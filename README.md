<img width="640" height="480" alt="HACK BOY Cover 43" src="https://github.com/user-attachments/assets/341a34df-61fc-4dc9-9838-43f5cdb8035b" />

Hack Boy
-

Hack Boy is a hackpad (macropad) designed to look like the original Game Boy. It has 4 keys, a rotary encoder, an OLED display, and RGB underglow. It is based on QMK firmware and is created for the Hack Club Stasis program.

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
(JLCPCB has a 2 dollar coupon and AliExpress has a 3 dollar coupon, which is why the funding amount is 5 dollars lower than the BOM total):
(not listed in Stasis BOM because I already have these):

* 4x M3x5x5.5 Heat Set Inserts
* 4x M3 Screws

| Name                         | Purpose                         | Quantity | Total Cost (USD) | Link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | Distributor |
|------------------------------|---------------------------------|----------|------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------|
| 0.91"" 128x32 OLED Display   | Display text and animations     | 1        | 4.07             | https://www.aliexpress.us/item/3256807013199079.html?spm=a2g0o.productlist.main.13.1fb44rbr4rbrJW&algo_pvid=88d61bc3-ad04-48fd-ac39-9cd5ce4a17c7&algo_exp_id=88d61bc3-ad04-48fd-ac39-9cd5ce4a17c7-12&pdp_ext_f=%7B%22order%22%3A%2279%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%214.09%213.59%21%21%2127.64%2124.26%21%40210337c117794986562357406e71c3%2112000046316668326%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A8f9e3ac0%3Bm03_new_user%3A-29895%3BpisId%3A5000000204886261&curPageLogUid=ILeZHAD4BSke&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005007199513831%7C_p_origin_prod%3A                                                                                                                   | AliExpress  |
| 10 PCS DSA Black Keycaps     | Covers the key switches         | 1        | 2.7              | https://www.aliexpress.us/item/3256810533781399.html?spm=a2g0o.productlist.main.2.76barKVkrKVkw8&algo_pvid=a0e25742-d517-49cf-90b6-502203a18787&algo_exp_id=a0e25742-d517-49cf-90b6-502203a18787-1&pdp_ext_f=%7B%22order%22%3A%22586%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.66%212.16%21%21%212.66%212.16%21%402103123917794978454482320eb10c%2112000053290823995%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A8f9e3ac0%3Bm03_new_user%3A-29895%3BpisId%3A5000000204886261&curPageLogUid=EOFkWa1pLd43&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010720096151%7C_p_origin_prod%3A                                                                                                                      | AliExpress  |
| PCB                          | Connects all the components     | 1        | 2                | https://cart.jlcpcb.com/quote?stencilLayer=2&stencilWidth=100&stencilLength=100&stencilCounts=5&plateType=1&spm=Jlcpcb.Homepage.1010                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | JLCPCB      |
| SK6812-E MINI-E LEDs         | Lights up the macropad          | 1        | 2.43             | https://www.aliexpress.us/item/3256805007401420.html?src=google&src=google&albch=shopping&acnt=708-803-3821&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en3256805007401420&ds_e_product_merchant_id=579408549&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=19419176312&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=19419169321&gbraid=0AAAAAD6I-hEZe85gq6SaAjufh59rQoHQC&gclid=Cj0KCQjwyr3OBhD0ARIsALlo-Om1MU1fzzwNndIHXdMPar71GHYK74SMb5pBdOySu_c3fGzl6F0mJQQaAlrfEALw_wcB&gatewayAdapt=glo2usa | AliExpress  |
| EC11 Rotary Encoder 5 PCS    | Input knob                      | 1        | 3.24             | https://www.aliexpress.us/item/3256808530463909.html?spm=a2g0o.detail.0.0.51b99wd09wd0fl&mp=1&pdp_npi=6%40dis%21USD%21USD+3.31%21USD+2.80%21%21USD+2.80%21%21%21%40210311a017794977756083026e4b30%2112000046368783803%21ct%21US%21-1%21%211%210%21&_gl=1*1pwpes3*_gcl_aw*R0NMLjE3Nzk0OTc1MzMuQ2owS0NRand5cjNPQmhEMEFSSXNBTGxvLU9tMU1VMWZ6endObmRJSFhkTVBhcjcxR0hZSzc0U01iNXBCZE95U3VfYzNmR3psNkYwbUpRUWFBbHJmRUFMd193Y0I.*_gcl_dc*R0NMLjE3Nzk0OTc1MzMuQ2owS0NRand5cjNPQmhEMEFSSXNBTGxvLU9tMU1VMWZ6endObmRJSFhkTVBhcjcxR0hZSzc0U01iNXBCZE95U3VfYzNmR3psNkYwbUpRUWFBbHJmRUFMd193Y0I.*_gcl_au*NDUyODkyMjcxLjE3Nzk0OTM2MTE.*_ga*MTY1MzkyNjEyMi4xNzc1MjgwMTA1*_ga_VED1YSGNC7*czE3Nzk0OTcyNjUkbzQkZzEkdDE3Nzk0OTc3NzUkajQ5JGwwJGgw&gatewayAdapt=glo2usa                                 | AliExpress  |
| 20 PCS Brown Switch          | Input button                    | 1        | 0.99             | https://www.aliexpress.us/item/3256811652574937.html?spm=a2g0o.cart.0.0.14fc7a9dFa3X1v&mp=1&pdp_npi=6%40dis%21USD%21USD+2.99%21USD+0.99%21%21USD+0.99%21%21%21%402101eecd17809377910832251e98ce%2112000056744509269%21ct%21US%217700223557%21%211%210%21&_gl=1*1q92loc*_gcl_aw*R0NMLjE3Nzk0OTc1MzMuQ2owS0NRand5cjNPQmhEMEFSSXNBTGxvLU9tMU1VMWZ6endObmRJSFhkTVBhcjcxR0hZSzc0U01iNXBCZE95U3VfYzNmR3psNkYwbUpRUWFBbHJmRUFMd193Y0I.*_gcl_dc*R0NMLjE3Nzk0OTc1MzMuQ2owS0NRand5cjNPQmhEMEFSSXNBTGxvLU9tMU1VMWZ6endObmRJSFhkTVBhcjcxR0hZSzc0U01iNXBCZE95U3VfYzNmR3psNkYwbUpRUWFBbHJmRUFMd193Y0I.*_gcl_au*NDUyODkyMjcxLjE3Nzk0OTM2MTE.*_ga*NzY5NTYyMDc3LjE3ODA4NTI1MDc.*_ga_VED1YSGNC7*czE3ODA5Mzc3ODMkbzIkZzEkdDE3ODA5Mzc3OTMkajUwJGwwJGgw&gatewayAdapt=glo2usa                           | AliExpress  |
| Seeed Studio XIAO RP2040     | Controls the macropad           | 1        | 9.99             | https://www.amazon.com/Microcontroller-Dual-Core-MicroPython-CircuitPython-Interfaces/dp/B09NNVNW7M/ref=sr_1_1?crid=11LJQMLOUBNZL&dib=eyJ2IjoiMSJ9.Hxs3jCHqokIXwzSfDn6Q00dVyEjPI8sSxCsrRDHxt6c7Cg-4TTc6FHlM9xT0HpXQH3fLkjPcXW9UDjBryk2urLUt4DOboVISIgcR7C__JJletdZ9K-Dsz5KXHpiEhaYvu9m14HIzAKxgRISDl-DlLk2jcXUuy38YGKEVhK0URi_xmgbK2VdKH5aG_duyvRQe595QZFTSHVnM5yZ7HMzDXfyUofMHRuGhclG-i31LKjE.cjAjLB-Wy8Puj3evec66X3kp8MaTCKanFVZYivxmDsI&dib_tag=se&keywords=seeed%2Bstudio%2Bxiao%2Brp2040&qid=1775279587&sprefix=seeed%2Bstudio%2Bxiao%2Brp%2Caps%2C1054&sr=8-1&th=1                                                                                                                                                                                                          | Amazon      |
| 4x M3x5x5.5 Heat Set Inserts | Where the M3 screws thread into | 1        | Already own      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |             |
| 4x M3 Screws                 | To attach the body and lid      | 1        | Already own      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |             |
