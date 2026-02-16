# Crate Opening Game

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

## Author:
* **HCP** - *Initial version-V1* - (Date: 2026-03-02)

## License
This project is open-source and free to use for educational purposes.
