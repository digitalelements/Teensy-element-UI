#include "MIDIcontroller.h"

// digitalelements FSR USB Module 10

byte MIDIchannel = 10;

const int pressPin [10] = {A0,A1,A2,A3,A4,A5,A6,A7,A8,A9}; // ANALOG pin


  // Pin & Note number
  MIDIdrum Pad0(A0, 36);
  MIDIdrum Pad1(A1, 38);
  MIDIdrum Pad2(A2, 38);
  MIDIdrum Pad3(A3, 39);
  MIDIdrum Pad4(A4, 40);
  MIDIdrum Pad5(A5, 41);
  MIDIdrum Pad6(A6, 42);
  MIDIdrum Pad7(A7, 43);
  MIDIdrum Pad8(A8, 44);
  MIDIdrum Pad9(A9, 45);

void setup(){

 
  // Threshold
 
  Pad0.setThreshold(400);
  Pad1.setThreshold(60);
  Pad2.setThreshold(200);
  Pad3.setThreshold(200);
  Pad4.setThreshold(200);
  Pad5.setThreshold(200);
  Pad6.setThreshold(200);
  Pad7.setThreshold(200);
  Pad8.setThreshold(200);
  Pad9.setThreshold(200);

  // Input Range

  Pad0.inputRange(520, 960);
  Pad1.inputRange(80, 900);
  Pad2.inputRange(80, 900);
  Pad3.inputRange(80, 900);
  Pad4.inputRange(80, 900);
  Pad5.inputRange(80, 900);
  Pad6.inputRange(80, 900);
  Pad7.inputRange(80, 900);
  Pad8.inputRange(80, 900);
  Pad9.inputRange(80, 900);


  // Velocity Output

  Pad0.outputRange(32,127);
  Pad1.outputRange(1,127);
  Pad2.outputRange(1,127);
  Pad3.outputRange(1,127);
  Pad4.outputRange(1,127);
  Pad5.outputRange(1,127);
  Pad6.outputRange(1,127);
  Pad7.outputRange(1,127);
  Pad8.outputRange(1,127);
  Pad9.outputRange(1,127);

  //WaitTime
  
  Pad0.setWaitTime(60);
  Pad1.setWaitTime(10);
  Pad2.setWaitTime(10);
  Pad3.setWaitTime(10);
  Pad4.setWaitTime(10);
  Pad5.setWaitTime(10);
  Pad6.setWaitTime(10);
  Pad7.setWaitTime(10);
  Pad8.setWaitTime(10);
  Pad9.setWaitTime(10);
  

}

void loop(){
  Pad0.send();
  Pad1.send();
  Pad2.send();
  Pad3.send();
  Pad4.send();
  Pad5.send();
  Pad6.send();
  Pad7.send();
  Pad8.send();
  Pad9.send();

// Crash Protection
  while(usbMIDI.read()){}

}
