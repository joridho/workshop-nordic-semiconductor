# workshop: Nordic Semiconductor

## 1. Installering av software

1. Innstaller [VS Code](https://code.visualstudio.com/download)

2. Innstaller [nRF Connect for Desktop](https://www.nordicsemi.com/Products/Development-tools/nrf-connect-for-desktop/download)
  
 3. I nRF Connect for Desktop, Innstaller:
 - LTE Link Monitor
 - Toolchain Manager 
 
 4. Åpne Toolchain Manager og installer nRF Connect SDK v2.3.0
 
 5. Trykk på "Open in VS Code" og innstaller "missing packages"
 
 6. Installer [Command Line Tools](https://www.nordicsemi.com/Products/Development-tools/nRF-Command-Line-Tools/Download#infotabs)
 
 
 ## 2. Last ned første "application"
 
 1. Last ned koden i dette prosjektet. 
 
 2. I VS Code, gå til nRF Connect som er vist i activity bar på venstre side, og under "WELCOME" trykke på "Open an existing application" og velg mappen du nettopp lastet ned. 
 
 3. Under "Apllication" vil prosjektet dukke opp og det vil stå "No build configurations". Trykke på den og velg "Board" velger du "thingy91_nrf9160_ns" og trykker på "Build Configuration". 
 
 4. Når build er ferdig, må du velge "Link Build Configuration And Device", deretter "Flash" under "ACTIONS". 
 
 5. Nå skal lyset blinke. 
 
 6. Gå inn på [prj.conf](https://github.com/joridho/workshop-nordic-semiconductor/blob/main/workshop-materiale/prj.conf) og endre CONFIG_BLINK=n og CONFIG_MAIN=n. Flash på nytt. 
 
 7. Nå skal lyset på av og på når du trykker på knappen. 
 
 ## 3. GPS 
 
 
 
 
