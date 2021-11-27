#include "esphome.h"
#include "RCSwitch.h"
using namespace esphome;


class MyFunkOutput1 : public Component, public Switch {
 public:
   RCSwitch mySwitch;
 
  void setup() override {
    // This will be called by App.setup()
    pinMode(2, OUTPUT);
	mySwitch.enableTransmit(0);
  }

  void write_state(bool state) override {
    digitalWrite(2, !state);
	if (state)
	  mySwitch.switchOn("11011", "10000");
	else
	  mySwitch.switchOff("11011", "10000");
		
	publish_state(state);
  }
};

class MyFunkOutput2 : public Component, public Switch {
 public:
   RCSwitch mySwitch;
   const char* myCode;
 
 MyFunkOutput2(const char* code){myCode=code;}
 
  void setup() override {
    // This will be called by App.setup()
	mySwitch.enableTransmit(0);
  }

  void write_state(bool state) override {
	if (state)
	  mySwitch.switchOn("11011", myCode);
	else
	  mySwitch.switchOff("11011", myCode);
		
	publish_state(state);
  }
};
