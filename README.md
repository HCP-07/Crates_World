# Crates World 
**InterFace**
<img width="908" height="627" alt="C_W1" src="https://github.com/user-attachments/assets/73d37e93-c9ae-47f4-920a-43c9687d62d0" />


A text-based simulation game written in **C++** where players test their luck by opening various tiers of loot crates. The game features a real-time "Stock Refresh" system and vibrant ANSI color coding for an immersive terminal experience.

## Features

* **Dynamic Economy:** Start with $100 and try to grow your fortune.
* **Time-Based Stock:** Crates refresh their availability every minute based on your system clock.
* **6 Crate Tiers:***
    * 🟢 Basic ($50)
    * 🔵 Majestic ($500)
    * 🟣 Space ($850)
    * 🔴 Ancient ($3,000)
    * 🟠 Spooky ($5,000)
    * 🌈 **Divine ($40,000)**
* **Rarity System:** Items range from "Broken Lamps" to "Eternal Black Holes" with varying sell prices.
* **Vibrant UI:** Utilizes ANSI escape codes for a colorful terminal interface.
**1.Crates**
<img width="903" height="645" alt="C_W2" src="https://github.com/user-attachments/assets/b9e90a32-a6ac-421c-a999-407f764cb5b9" />

**2.Crates Opening Glimpse**
<img width="828" height="939" alt="C_W3" src="https://github.com/user-attachments/assets/c9a7486c-583e-4def-a75f-e2f13601a4ab" />

## Tech Stack

* **Language:** C++
* **Libraries:** `<iostream>`, `<ctime>`, `<string>`
* **Compatibility:** Best viewed in terminals that support ANSI colors (Linux, macOS, and modern Windows Terminals).

## How to Play

1.  **Compile the code:**
    ```bash
    g++ Crate_Game.cpp -o Crate_Game
    ```
2.  **Run the executable:**
    ```bash
    Windows: Crate_Game.exe
    Linux/Mac: ./Crate_Game
    ```
3.  **Navigate the Menu:** Use the number keys to select crates or check crate info.
4.  **Check Stock:** If a crate is "Not In Stock," wait a minute for the system time to refresh!

## Execution :
For Now Given For - Windows
To run the executable, you may need to click 'More Info' -> 'Run Anyway' if Windows Protector blocks it.

## Author:
* **HCP** - *Initial version-V1* - (Date: 2026-03-02)

## License
This project is open-source and free to use for educational purposes.
