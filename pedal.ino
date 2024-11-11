/*
This is a simple code snippet for a foot paddle fot comon Yousician shortcuts
It simulates a keyboard using keyboard.h

wokwi test: https://wokwi.com/projects/414254245075609601

- R = restart
- P = toggle practice/perform
- SPACE = pauze/play

Wiring:
- 3.3V to all button power sides (left or right, doesn't matter)
- button ground sides (middle) to 10k ohm resistors (1)
- 10k ohm resistors (2) to ground
- 10k ohm resistors (2) to D2, D3 & D4
*/

// #include <keyboard.h>

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
    pinMode(rButton, INPUT);
    pinMode(pButton, INPUT);
    pinMode(spaceButton, INPUT);

    // initialize states when powering up
    rButtonState_previous = digitalRead(rButton);
    pButtonState_previous = digitalRead(pButton);
    spaceButtonState_previous = digitalRead(spaceButton);

    Serial.begin(9600);
    // Keyboard.begin();

}

void loop() {

  // toggle R keypress
  rButtonState = digitalRead(rButton);
  if(rButtonState != rButtonState_previous){
    Serial.println("R");
    // Keyboard.write('r');
    rButtonState_previous = rButtonState;
  }

    // toggle P keypress
  pButtonState = digitalRead(pButton);
  if(pButtonState != pButtonState_previous){
    Serial.println("P");
    // Keyboard.write('p');
    pButtonState_previous = pButtonState;
  }

  // toggle space keypress
  spaceButtonState = digitalRead(spaceButton);
  if(spaceButtonState != spaceButtonState_previous){
    Serial.println("space");
    // Keyboard.write('space');
    spaceButtonState_previous = spaceButtonState;
  }

  // delay for table readings 
  // (allow voltage drop to ground)
  delay(10);
    
}