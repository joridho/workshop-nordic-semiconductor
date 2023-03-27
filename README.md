# workshop: Nordic Semiconductor

## 1. Installering av software

1. Installer [VS Code](https://code.visualstudio.com/download)

2. Installer [nRF Connect for Desktop](https://www.nordicsemi.com/Products/Development-tools/nrf-connect-for-desktop/download)
  
 3. I nRF Connect for Desktop, Innstaller:
 - LTE Link Monitor
 - Toolchain Manager 
 
 4. Åpne Toolchain Manager og installer nRF Connect SDK v2.3.0
 
 5. Trykk på "Open in VS Code" og installer "missing packages"
 
 6. Installer [Command Line Tools](https://www.nordicsemi.com/Products/Development-tools/nRF-Command-Line-Tools/Download#infotabs)
 
 
 ## 2. Last ned første "application"
 
 1. Last ned koden i dette prosjektet. 
 
 2. I VS Code, gå til nRF Connect som er vist i activity bar på venstre side, og under "WELCOME" trykke på "Open an existing application" og velg mappen du nettopp lastet ned. 
 
 3. Under "Apllication" vil prosjektet dukke opp og det vil stå "No build configurations". Trykke på den og velg "Board" velger du "thingy91_nrf9160_ns" og trykker på "Build Configuration". 
 
 4. Når build er ferdig, må du velge "Link Build Configuration And Device", deretter "Flash" under "ACTIONS". 
 
 5. Nå skal lyset blinke. 
 
 6. Gå inn på [prj.conf](https://github.com/joridho/workshop-nordic-semiconductor/blob/main/workshop-materiale/prj.conf) og endre CONFIG_BLINK=n og CONFIG_MAIN=y. Flash på nytt. 
 
 7. Nå skal lyset gå av og på når du trykker på knappen. 
 
 ## 3. GPS 
 
 1. Under "WELCOME" velg "Create a new application" og velg "asset_tracker_v2" og "Create Application".
 
 2. Build, link opp enheten og flash på samme måte som i oppgave 2
 
 3. Gå til [nRF Cloud](https://nrfcloud.com/) og lag en bruker
 
 4. Trykk på plusset, registrer LTE Device, og hopp over å registrere sim-kort 
 
 5. Nå skal du kunne se data fra GPS og sensorer 
 
 
