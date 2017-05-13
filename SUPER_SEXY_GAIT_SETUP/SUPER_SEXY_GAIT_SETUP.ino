#include <Servo.h>
#include <time.h>
// set the names of the servos
/*
hip11 = front right hip
knee1 = front right knee
hip21 = front left hip
knee2 = front left knee

*/

Servo hip11;  
Servo hip21; 
Servo hip31;
Servo hip41;
Servo knee1;
Servo knee2;
Servo knee3;
Servo knee4;

void setup()
{
  //pinMode(13, OUTPUT);  // LED pin
  // assign servos to pins and center servos
  srand (time(NULL));
  hip11.attach(7); 
  hip21.attach(5);
  hip31.attach(4);   
  hip41.attach(1); 

  knee1.attach(8);
  knee2.attach(6);
  knee3.attach(3);
  knee4.attach(2);
  
  {
    knee3.write(115); //Stand(115) Reach (50)
    knee4.write(120); //Stand 95, Reach 145   
    knee2.write(90); // Stand(75) Reach (180-165)
    knee1.write(70); // Stand(90) Reach(0-15)

    //hip11.write(100); // Foward(15) Side(100)
    //hip21.write(80);  //Side(79), Forward(170)
    hip31.write(120);  // Side 120
    hip41.write(60); //Side 80, 
    
    }
    
}



void slowga() {
  int k = rand() % 100 + 40;
  delay(120);
  }

void finger() {
  int i,p,l;
  p = rand() % 60;
  l = rand() % 40;
  for (i=p;i<140;i++) {
    knee4.write(i);
    knee1.write(i);
    slowga();
  }
  for (i=l;i>70;i--) {
    knee4.write(i);
    knee1.write(i);
    slowga();
   }
}
    
void super(int p) {
    int cheese = p;
    int i,u;
    u = rand() % 40;
    switch(cheese) {
      case 1:
        for (i=0; i<u ; i++) {
        hip11.write(i);
        hip21.write(i+30);
        hip31.write(i+50);
        hip41.write(i);
        slowga();
        }
        break;
      case -1:
        for (i=u; i>0 ; i--) {
        hip11.write(i);
        hip21.write(i+30);
        hip31.write(i+50);
        hip41.write(i);
        slowga();
      }
        break;
      }

  }
  
void shimy() {
  super(1);
  finger();
  super(-1);
  }


void curl4() {
  knee1.write(115);
  knee2.write(50);
  knee3.write(150);
  knee4.write(145);
  hip11.write(60);
  hip21.write(140);
  hip31.write(160);
  hip41.write(30);
  slowga();
  }

void straight() {
  knee3.write(115); //Stand(115) Reach (50)
  knee4.write(95); //Stand 95, Reach 145   
  knee2.write(90); // Stand(75) Reach (180-165)
  knee1.write(70); // Stand(90) Reach(0-15)
  slowga();
  }
  

void reach4() {
  hip41.write(0);
  slowga();
  knee4.write(145);
  slowga();
  }

void neutral() {
  knee3.write(115); //Stand(115) Reach (50)
  knee4.write(95); //Stand 95, Reach 145   
  knee2.write(90); // Stand(75) Reach (180-165)
  knee1.write(70); // Stand(90) Reach(0-15)
  slowga();
  hip11.write(60);
  hip21.write(140);
  hip31.write(160);
  hip41.write(60);
  slowga();
  }

void reach3() {
  hip31.write(180);
  slowga();
  knee3.write(40);
  }

void curl3() {
  knee1.write(115);
  knee2.write(50);
  knee3.write(80);
  knee4.write(95);
  hip11.write(60);
  hip21.write(140);
  hip31.write(90);
  hip41.write(60);
  slowga();
  }

void straight3() {
  knee3.write(115); //Stand(115) Reach (50)
  knee4.write(95); //Stand 95, Reach 145   
  knee2.write(90); // Stand(75) Reach (180-165)
  knee1.write(90); // Stand(90) Reach(0-15)
  slowga();
  }

void loop()
{
  //Smooth Gait Function. 

  shimy();

  /*
  //Functional Lateral Movement
  curl4();
  reach4();  
  straight();  
  neutral(); 

  curl3();
  reach3();
  straight();
  neutral();
  
  */
}





/*Code Graveyard/Recycle Bin:
 * 
 * 
 * void LimbTread() 
{
  int i,k;
  for (i=0;i<116;i++) {
    k=i;
    hip11.write(k);
    hip21.write(k+50);
    hip31.write(k+100);
    hip41.write(k-10);
    knee1.write(k-10);
    knee2.write(k+40);
    knee4.write(k+40);
    knee3.write(k+10);
    rest();
  }
}

void LimbTread2()
{
  int i,f;
  for (i=0;i<60;i++) {
    f=70-i;
    hip11.write(f);
    hip21.write(f+10);
    hip31.write(f+100);
    hip41.write(f-10);
    knee1.write(f-10);
    knee2.write(f+40);
    knee3.write(f+10);
    knee4.write(f+40);
    rest();
  }
}

void Right() {
  knee2.write(80);
  knee3.write(70);
  knee1.write(90);
  knee4.write(120);
  }
  
void rest() {
  delay(5);
  }

void sleep() {
  hip11.write(15);
  hip21.write(170);
  hip31.write(50);
  hip41.write(160);
  knee1.write(140);
  knee2.write(30);
  knee3.write(140);
  knee4.write(60);
  }

void kill() {
  hip11.write(120);
  hip21.write(79);
  hip31.write(120);
  hip41.write(80);
  knee1.write(15);
  knee2.write(160);
  knee3.write(30);
  knee4.write(150);
  
  }

 void swipeLimb1() {

  int i;
  for (i=0; i<90; i++) {
    hip11.write(i+20);
    knee1.write((i/2)+20);
  }
}

void swipeLimb2() {

  int i,k;
  for (i=0; i<90; i++) {
    k=-i;
    hip11.write(k+20);
    knee1.write((k/2)+20);
  }
}

*/

