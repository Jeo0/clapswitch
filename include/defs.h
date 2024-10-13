#define MicPin 12
#define OptocouplerPin 32

// timing related 
bool firstFlag = false;     // true to signify that there's a stream of incoming input
unsigned long currentMillis = millis();
unsigned long previousMillis = 0;
const long interval = 1000;

// instruction related
unsigned long instruction[8] = {};     // used like a back buffer... only make it the front if it is valid after parsing
unsigned long current_execute[8] = {};  // used like a front buffer
int optocouplerState = LOW;
short int instructIndex = 0;         // used for storing delays through the instruction
