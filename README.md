# yousician_foot_pedal
Simple USB stompbox to control [Yousician](https://yousician.com/)).   
The stompbox has 3 buttons and simulates keyboard presses using [keyboard.h](https://reference.arduino.cc/reference/en/language/functions/usb/keyboard/) (beware: doesn't work on every Arduino).   
- [ ] Change to [Keyboard.press](https://www.arduino.cc/reference/tr/language/functions/usb/keyboard/keyboardpress/) & releases instead of Keyboard.print()
- [ ] Legend with [keypresses](https://www.arduino.cc/reference/tr/language/functions/usb/keyboard/keyboardmodifiers/)
---
- `R` : reset the song
- `P` : toggles between practice and perfom mide
- `space` : toggles between pauze and play

# Hardware
- [ ] [Arduino Micro](https://store.arduino.cc/en-be/products/arduino-micro) (Keyboard.h is not available for Arduino nano, nano 3IOT & ESP32)
- [ ] [3 x Footswitch Soft Click, SPST, momentary](https://www.tonefactory.nl/footswitch-soft-click-spst-momentary)
- [ ] [Stompbox casing](https://www.tonefactory.nl/effect-behuizing-1590b-style-black)
- [ ] [USB-c panel mount](https://www.gotron.be/panel-mount-usb-c-kabel-montage-op-chassis-rond.html)
# Code
* ⌨️ [Arduino Code](pedal.ino)

# Wiring
- `Arduino` D2, D3 & D4  --> all `button` power sides (left or right, doesn't matter)
- `button` ground sides (middle) --> `Arduino` GND

# Construction
- Drill holes in casing
- Mount buttons & USB panel
- Connect wires
- Add felt & grip

  
