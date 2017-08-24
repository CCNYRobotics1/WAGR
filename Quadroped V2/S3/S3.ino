#include <Servo.h>
#include <time.h>
// set the names of the servos
// A-D is the arm symbol. 1-3 is the joint number. 1 is the closest to the board, 3 is the farthest.

Servo a1;  
Servo a2; 
Servo a3;
Servo b1;
Servo b2;
Servo b3;
Servo c1;  
Servo c2; 
Servo c3;
Servo d1;
Servo d2;
Servo d3;


void setup()
{
  //pinMode(13, OUTPUT);  // LED pin
  // assign servos to pins and center servos
  srand (time(NULL));
  a1.attach(0); 
  b1.attach(3);
  c1.attach(6);
  d1.attach(9);
  
  a2.attach(1);
  b2.attach(4);
  c2.attach(7);
  d2.attach(10);

  a3.attach(2);
  b3.attach(5);
  c3.attach(8);
  d3.attach(11);

    
}

void standNeutral() {
  
    a1.write(65);
    a2.write(110);
    a3.write(110);
    
    b1.write(130);
    b2.write(100); 
    b3.write(90);

    c1.write(130);
    c2.write(80);
    c3.write(90);

    d1.write(65);
    d2.write(80);  
    d3.write(110); 
};

void fetal() {
    a1.write(65);
    a2.write(50);
    a3.write(70);
    
    b1.write(130);
    b2.write(130); 
    b3.write(130);

    c1.write(130);
    c2.write(140);
    c3.write(140);

    d1.write(65);
    d2.write(40);  
    d3.write(70); 
  
  
  }

void step1() {
    a1.write(20);
    a2.write(110);
    a3.write(110);
    
    b1.write(180);
    b2.write(100); 
    b3.write(90);

    c1.write(130);
    c2.write(80);
    c3.write(90);

    d1.write(65);
    d2.write(80);  
    d3.write(110); 
  
  }

void step2() {
    a1.write(65);
    a2.write(140);
    a3.write(170);
    
    b1.write(180);
    b2.write(100); 
    b3.write(90);

    c1.write(130);
    c2.write(80);
    c3.write(90);

    d1.write(65);
    d2.write(80);  
    d3.write(110); 
  
  }

void step3() {
    a1.write(80);
    a2.write(120);
    a3.write(110);
    
    b1.write(140);
    b2.write(100); 
    b3.write(90);

    c1.write(160);
    c2.write(80);
    c3.write(90);

    d1.write(65);
    d2.write(80);  
    d3.write(110); 
  
  }


void loop()
{
//  step1();
//  delay(3000);
  step2();
  delay(3000);
//  step3();
//  delay(3000);
}


