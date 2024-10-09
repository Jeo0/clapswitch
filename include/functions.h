
float instructions[8] = {};
float current_execute[8] = {};

const long interval = 1000;
int ledState = LOW;



  enum State {
    White,
    Rainbow,
    Continuous
  };
  State state = White;

