Hack Boy
-
Hello! Hack Boy is a hackpad (macropad) designed to look like the original Game Boy. It has 4 keys, a rotary encoder, an OLED display, and RGB underglow. It is based on QMK firmware and is created for the Hack Club Stasis program.

I made this because I always wanted a macropad for my personal use. However, I did not want it to look like a generic box, so I decided to go with the Game Boy design for it to stand out. It was also a good chance for me to practice my KiCad, Fusion 360, and C skills.

Features
-
* 4x Cherry MX Keys
* 1x EC11 Rotary Encoder
* 1x 0.91" 128x32 OLED Display
* 6x SK2812 MINI-E LEDs
* 1x Seeed Studio XIAO RP2040

CAD
-
I designed the case in Fusion 360. It is a two part case held together using 4 M3 screws and heat set inserts. The deisgn pays homage to the original Game Boy, with realistic grooves, placement, fake buttons, logo, and speaker grille.

<img width="479" height="367" alt="image" src="https://github.com/user-attachments/assets/c74cfd42-8bc1-4ed4-86dd-99048742d218" />

Schematic and PCB
-
I designed the schematic and PCB in KiCad. The schematic took the least time. The PCB took much longer. I designed the graphics in Canva and exported it in SVG format. I probably should have added an LED for the top and bottom. Speaking of LEDs, they were a pain to wire, i had to rewire it multiple times to fit all of them. I added holes for allignment but never used them.

<img width="688" height="334" alt="image" src="https://github.com/user-attachments/assets/97c9bb54-c4fc-4c37-9322-48349bded523" />

<img width="391" height="461" alt="image" src="https://github.com/user-attachments/assets/7889a134-f787-47b1-a571-a507becd08f8" />

Firmware
-
Uses QMK firmware. Here are the functions:
* top left: Copy
* top right: Cut
* encoder press: Mute
* bottom left: Paste
* bottom right: Undo
* encoder turn: Volume up/down

Had some weird compile issue with the LED drivers, but it was fixed with:
WS2812_DRIVER = vendor

<img width="442" height="476" alt="image" src="https://github.com/user-attachments/assets/46b11584-4688-4cd1-a425-4c4fe69de87e" />

BOM:
-
* 4x DSA 20PCS Black PBT 1U Keycaps
* 6x SK6812-E MINI-E LEDs
* 1x EC11 Rotary Encoder with Push Button
* 10x Cherry MX Blue Switches
* 1x 0.91" 128x32 OLED Display
* 1x Seeed Studio XIAO RP2040

(not listed in Stasis BOM because I already have these):

* 4x M3x5x5.5 Heat Set Inserts
* 4x M3 Screws


