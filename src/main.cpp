#include <Arduino.h>
#include "functions.h"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorBool = analogRead(32);
  Serial.println(sensorBool);

  /*


  if input [0]:
    delay 0.1 second
  else:
    execute instruction

  while (timer <.9 second) and (array is not full):
    if input:
      array[...] = input
      delay(0.1)

    timer++
    
  execute instruction
  */

  /*
  if input:
    start timer
    instruction.append(timer)
  
  if another input && timer > 100 ms && index != 7:   // once valid time, another input is good
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


    // if valid; update the state accordingly
    state = ...
  }


  void HandleContinuous(float* timer){
    // code from "https://docs.arduino.cc/built-in-examples/digital/BlinkWithoutDelay/"

    unsigned long currentMillis = *timer; 
    // interval = 1000 ms

    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
  }
  
  */
  

}
