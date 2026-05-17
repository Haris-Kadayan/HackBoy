# Overview

Hi, my name is Haris Kadayan and I built Hack Boy which is a Game Boy themed macropad built for Hack Club Blueprint.

Bascially, Hack Boy is a macropad with
- 4 Cherry MX Switches
- Rotary encoder with button
- 0.91 inch SSD1306 OLED display
- 6 SK6812 MINI-E RGB LEDs
- Seeed Studio XIAO RP2040

# Main features

- It has 4 keys
- Encoder controls volume
- When you press the encoder, it will mute the volume
- When it boots, it says Hack Boy v1.1, then By: Haris K., then shows the current volume. If it is muted, it shows Muted.
- Left key:
- LEDs default to red (for now :)

# To compile it

Just run this:
qmk compile -kb hack_boy -km default

# To flash it

I think this is it:
Put the xiao into bootloader mode and drag the final .uf2 file onto it.