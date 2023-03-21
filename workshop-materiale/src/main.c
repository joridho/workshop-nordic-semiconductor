#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

// get the devicetree node identifier for the nodes with aliases sw0 and led0
#define SW0_NODE DT_ALIAS(sw0)
#define LED0_NODE DT_ALIAS(led0)

// get the device pointer 
static const struct gpio_dt_spec button = GPIO_DT_SPEC_GET(SW0_NODE, gpios);
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);


void button_pressed(const struct device *dev, struct gpio_callback *cb, uint32_t pins)
{
    gpio_pin_toggle_dt(&led);
    printk("Button pressed\n"); // prints  to the monitor 
}

// define a variable of type static struct gpio_callback
static struct gpio_callback button_cb_data;

void main(void)
{
	// Configure the pin connected to the button or led to be an input pin and set its hardware specifications 
    gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	gpio_pin_configure_dt(&button, GPIO_INPUT);

    // read the status of the button
    bool val = gpio_pin_get_dt(&button);
    // update the LED to the status of the button 
    gpio_pin_set_dt(&led,val);

    // configure the  inteerrupt on the buttons pin
    gpio_pin_interrupt_configure_dt(&button, GPIO_INT_EDGE_TO_ACTIVE ); 

    // initialize the static struct gpio_callback variable  
    gpio_init_callback(&button_cb_data, button_pressed, BIT(button.pin)); 	
    
    // add the callback function by calling gpio_add_callback()
    gpio_add_callback(button.port, &button_cb_data);

	while (1) {
        k_msleep(10*60*1000); // Put the main thread to sleep for 100ms
	}

}