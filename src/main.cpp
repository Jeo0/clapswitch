#include <Arduino.h>
#include "functions.h"
#include "defs.h"


void setup() {
  Serial.begin(9600);
  pinMode(MicPin, INPUT);
  pinMode(OptocouplerPin, OUTPUT);
}

void loop() {
  int sensorBool = analogRead(32);
  Serial.println(sensorBool);


  /*
  if input:
    start timer
    flag first = true
    instruction.append(timer)
  */
  if (analogRead(MicPin)){
    previousMillis = currentMillis;
    firstFlag = true;
    instruction[instructIndex] = previousMillis;
  }


  /*

  
  if another input && timer > 100 ms && index != 7 && flag_first == true:   // once valid time, another input is good, index is not 7
    instruction.append(timer)           // store instructions[index]
    index++
    timer = 0

  
  // after 1000 ms:
  // reset index and timer 
  // parse the instruction, 

  // if okay:
  // current_instruction = instruction
  // execute current_instruction
  
  if timer > 1000 ms:
    index = 0
    timer = 0
    flag_first = false
    if (ParseThis(instruction) == true)
      current_instruction = instruction

  // using enums as state,
  switch(state){
    case White:
      output(pin, LOW);
    case Rainbow:
      output(pin, HIGH);
    case Continuous:
      handleContinuous(timer);
  }

  
  enum State {
    White
    Rainbow
    Continuous
  };
  void ParseThis(float* instructions){
    // instructions = {0, 150, 0, 0, 0, 0, 0, 0};

    // if valid; update the state accordingly
    state = ...
  }


  void HandleContinuous(float* timer){
    // code from "https://docs.arduino.cc/built-in-examples/digital/BlinkWithoutDelay/"

    unsigned long currentMillis = *timer; 
    // unsigned long currentMillis = millis();  // original code
    // interval = 1000 ms

    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;

      // if the LED is off turn it on and vice-versa:
      ledState = !ledState;

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
  }
  
  */

  /* 
  // if there comes an input: within 1000 ms;   not less than 120 ms;   store
  // else if no input:  within 1000 ms;                                 
  */
  

}
