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
  
  if another input && timer > 100 ms:   // once valid time, another input is good
    instruction.append(timer)           // store instructions[index]
    index++
    timer = 0

  
  if timer > 1000 ms:
    index = 0
    timer = 0
    if (ParseThis(instruction) == true)
      current_instruction = instruction

  // using enums as state,
  switch(state){

  }

  
  void ParseThis(float* instructions){

  }
    





  // after 1000 ms:
  // reset index and timer 
  // parse the instruction, 

  // if okay:
  // current_instruction = instruction
  // execute current_instruction
  
    

  
  */
  

}
