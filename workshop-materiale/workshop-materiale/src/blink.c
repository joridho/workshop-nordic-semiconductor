#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

void main(void)
{
	gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	while (1) {
		gpio_pin_toggle_dt(&led); 
		k_msleep(100); 
	}
}


