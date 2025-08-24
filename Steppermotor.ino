#include <AccelStepper.h>

// Motor pin defining
#define Motor1PinA1 2
#define Motor1PinA2 3
#define Motor1PinB1 4
#define Motor1PinB2 5
#define Motor2PinA1 6
#define Motor2PinA2 7
#define Motor2PinB1 8
#define Motor2PinB2 9
#define Motor3PinA1 10
#define Motor3PinA2 11
#define Motor3PinB1 12
#define Motor3PinB2 13

// setup motors with the library
AccelStepper Motor1(AccelStepper::FULL4WIRE, Motor1PinA1, Motor1PinA2, Motor1PinB1, Motor1PinB2);
AccelStepper Motor2(AccelStepper::FULL4WIRE, Motor2PinA1, Motor2PinA2, Motor2PinB1, Motor2PinB2);
AccelStepper Motor3(AccelStepper::FULL4WIRE, Motor3PinA1, Motor3PinA2, Motor3PinB1, Motor3PinB2);

void setup() {
  // Select maximum speed(steps per miliseconds)
  Motor1.setMaxSpeed(1000);  
  Motor2.setMaxSpeed(800);
  Motor3.setMaxSpeed(500);
  // increments of increase
  Motor1.moveTo(500);   
  Motor2.moveTo(400);
  Motor3.moveTo(200);
}

void loop() {
  // run
  Motor1.run();
  Motor2.run();
  Motor3.run();
}
