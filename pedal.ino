/*
This is a simple code snippet for a foot paddle fot comon Yousician shortcuts
It simulates a keyboard using keyboard.h

wokwi test: https://wokwi.com/projects/414254245075609601

- R = restart
- P = toggle practice/perform
- SPACE = pauze/play

Wiring:
- GNDs to button side 2
- D2, D3 & D4 to button side 1
*/

#include <Keyboard.h>

USBHIDKeyboard Keyboard;

// set pin numbers for the buttons:
const int rButton = 2;
const int pButton = 3;
const int spaceButton = 4;

// state variables (the button is a switch button)
int rButtonState = 0;
int pButtonState = 0;
int spaceButtonState = 0;
int rButtonState_previous = 0;
int pButtonState_previous = 0;
int spaceButtonState_previous = 0;

void setup() {

  // pinmodes
  pinMode(rButton, INPUT_PULLUP);
  pinMode(pButton, INPUT_PULLUP);
  pinMode(spaceButton, INPUT_PULLUP);

  // initialize states when powering up
  rButtonState_previous = digitalRead(rButton);
  pButtonState_previous = digitalRead(pButton);
  spaceButtonState_previous = digitalRead(spaceButton);

  Serial.begin(9600);

  // init usb connection
  USB.begin();
  Keyboard.begin();
}

void loop() {

  // toggle R keypress
  rButtonState = digitalRead(rButton);
  // Serial.println(rButtonState);
  if (rButtonState != rButtonState_previous) {
    if (!rButtonState) {
      Serial.println("p");
      Keyboard.print("r");
    }
    rButtonState_previous = rButtonState;
  }

  // toggle P keypress
  pButtonState = digitalRead(pButton);
  if (pButtonState != pButtonState_previous) {
    if (!pButtonState) {
      Serial.println("p");
      Keyboard.print("p");
    }
    rButtonState_previous = pButtonState;
  }

  // toggle space keypress
  spaceButtonState = digitalRead(spaceButton);
  if (spaceButtonState != spaceButtonState_previous) {
    if (!spaceButtonState) {
      Serial.println("SPACE");
      Keyboard.print(" ");
    }
    spaceButtonState_previous = spaceButtonState;
  }

  // delay for table readings
  // (allow voltage drop to ground)
  delay(10);
}
