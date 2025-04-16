# Fun with UI
Making the UI for the router better

## Functionality
In order of complexity...
### 1. Basic menu nagivation
Wanna be able to go through a basic menu interface, with multiple options for each screen
Example tree:
```
.
└── Initization
    └── Zero X
        └── Zero Z
            ├── Cut Design
            │   ├── Preset
            │   │   └── *preset display*
            │   │       └── *run-time interface*
            │   └── From File
            │       └── *file display*
            │           └── *run-time interface*
            └── Calibrate
                └── *calibration sequence*
```
### 2. File display
Wanna be able to display the files on an SD card, in a rolling format. This is already done in the [main repo](https://github.com/camchaney/handheld-cnc/blob/ecf91b87ccc00b31abd9c8516a26ed839b1f7e69/main/src/ui/display.cpp#L154), but not very clean.

### 3. More complex run-time UI
The current run-time UI isn't super intuitive with just a circle and a tick mark to show the user where to move. And unfortunately, there isn't enough CPU room to make it more complex while running the rest of the code. This is where either multi-threading or multiple processors comes in.

For *multi-threading*, we'd have to switch to an ESP32. This isn't that big of a deal, because we're already thinking of going to ESP32 for WiFi features and cheaper price. Although, this isn't exactly trivial. It's hard to tell how easy or seamless multi-threading would be for this application. We'd have to do all of the display computation on a separate core, communicating minimal data between the two. This also wouldn't be able to be implemented as soon because we are trying to keep the PCBs the same for now.

For *multiple processors*, we'd need a display that has an integrated processor. This is actually pretty easy to find, and quite comparable in price to just the standalone display. We'd also be able to use it with the Teensy, as well as with the ESP32 if we choose to go that route in the future. Also, the screen can be made bigger and touch screen without any real considerations on slowing down the main processor. We just need some way of communicating between the processors to give the screen the data it needs for making the run-time display. All of the data will likely be sent via serial or SPI.

The main data that is needed for the run-time display is:
- _machine state_ - x, y, yaw, v_x, v_y
- _path information (looking at least a few points ahead)_ - (x, y) X BUFFER_SIZE

The machine state information can't really be optimized for the data transfer. The path information could, though. Instead of sending a whole buffer of points via serial (which could take a long time), the entire design could be stored on the SD card of the display's processor. This way, you would only need to send the current point index, and the display processor can retreive the associated data on its own.

## Hardware
- *Driver* - GCA901
- *Encoder* - EC11

## Repo Contents
- Datasheets and examples given to me by the AliExpress display manufacturer
- A super simple platformIO project to get started with LVGL. It's compiling, but not working at the moment. Good for reference, though.
