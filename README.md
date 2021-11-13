# ssmp-firmware

This is the unofficial firmware repo for the 256klabs [SUPER SIMPLE MACROPAD](https://www.etsy.com/ca/listing/1088544281/super-simple-macropad) and also includes support for basic MIDI keymaps. This is where to start if you need to redownload the SSMP firmware, download firmware for the SSMP that supports MIDI, or access the source code to extend the firmware to customize your SSMP beyond what is already provided. SSMP firmware is a version of [QMK Firmware](https://qmk.fm/) that has been configured to work for the SUPER SIMPLE MACROPAD. 

## Available firmware
- _**ssmp-via**_ is the firmware that ships with the SSMP that allows you to change your layout with VIA. More information on how to configure your SSMP with VIA can be [found here](https://www.youtube.com/watch?v=vyfjawPZ8_Y&t=315s).

- _**ssmp-midi**_ is firmware for the SSMP that uses a basic MIDI keymap that will send a MIDI note for each of the 8 keys. This is useful for triggering drum machines or for sending instructions via MIDI notes to another device like I do with the [Disting EX Looper](https://www.youtube.com/watch?v=ZkL7v5CCzgc&t=59s). Using this firmware, the 8 keys on the SSMP will send the notes C3, D3, E3, F3, G3, A3, B3, and C4 on MIDI Channel 1. Currently, in order to change the notes sent or the MIDI channel used by the SSMP, it is necessary to build your own firmware (see the ["Modifying"](#modifying) section below). Ways to change these in the future without needing to modify the firmware are being explored. 

## Installing
To install existing SSMP firmware, download a firmware .hex file (or modify and build your own) and install it to your SSMP with [QMK Toolbox](https://github.com/qmk/qmk_toolbox). The latest builds for ssmp-via and ssmp-midi can be found in the "Releases" page of this repo.

## Modifying
Before modifying, it's good to understand that the SSMP firmware is a version of [QMK Firmware](https://qmk.fm/) that has been configured to work for the SUPER SIMPLE MACROPAD. In order to modify your SSMP, you'll need to know how to configure and build QMK Firmware. In the QMK context, SSMP firmware is just a keyboard and keymaps for QMK that are compiled using QMK. Documentation for how to modify and build can be found at https://qmk.fm/.