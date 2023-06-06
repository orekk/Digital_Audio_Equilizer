#include <Arduino.h>

void setup(){
    Serial.begin(9600);
    while(!Serial)
    // 1. Receive the input sound signal from the microphone 


    // 2. Append the input signal into a signal[] 


    // 3. Run the fft execute on the signal[]


    // 4. Identify the fundamental frequency and determine if it fits the range of the human voice 
    // -- Detect the frequency range of the speaker and isolate for it 



    // 5. Squash the other frequencies in the signal_output[] and run the irrft 



    // output the signal[] output into the speaker 




}

void loop(){

}