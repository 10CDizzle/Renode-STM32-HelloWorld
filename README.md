# Renode-STM32-HelloWorld
 Quick Demonstration of Creating a Simulation Environment for the STM32 Using Renode.

# How to run the premade binary using Renode:

1. Ensure that you have Renode installed for your current platform (https://renode.io/)

2. Clone this repository

3. Open renode in the terminal. In windows, if the executable is added to PATH, you should be able to just type in `renode` in the powershell.

4. Set up the machine to emulate. In the opened Renode terminal, type in:
    - `mach create` to instantinate a new simulation machine instance.
    - `machine LoadPlatformDescription @platforms/boards/stm32f4_discovery.repl` to load the target simulation architecture
    - `sysbus LoadELF <path to HelloWorld.elf located in /Binary>` to load the target code.

5. In our case, the print statements will appear on Uart2, so we need to observe it by typing `showAnalyzer sysbus.uart2` in the machine terminal. Doing this should bring up another terminal.

6. From there, enter `start` to observe that ZephyrRTOS boots up and "Hello World!" Displays.


The source for the project is located in the repo's `/STM32/HelloWorld`. It uses platformIO to set up the project scaffolding.