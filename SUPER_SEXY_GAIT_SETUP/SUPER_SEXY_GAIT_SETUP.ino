#include <Servo.h>
#include <time.h>

Servo hip11;  
Servo hip21; 
Servo hip31;
Servo hip41;
Servo knee1;
Servo knee2;
Servo knee3;
Servo knee4;

enum jointList {knee1, knee2, knee3, knee4, hip11, hip21, hip31, hip41, tell};

void setup()
{
  srand (time(NULL)); //Useful for randomizing movements of limbs
  hip11.attach(7); 
  hip21.attach(5);
  hip31.attach(4);   
  hip41.attach(1); 

  knee1.attach(8);
  knee2.attach(6);
  knee3.attach(3);
  knee4.attach(2);
  
  int k1,k2,k3,k4,h1,h2,h3,h4,h5; //k's are knee positions, h's are hip positions.
  //Initial Posterior State
  k1=70; k2=90; k3=115; k4=120
  h1=100; h2=80; h3=120; h4=60;
  
  knee3.write(k3); //Stand(115) Reach (50)
  knee4.write(k4); //Stand 95, Reach 145   
  knee2.write(k2); // Stand(75) Reach (180-165)
  knee1.write(k1); // Stand(90) Reach(0-15)

  hip11.write(h1); // Foward(15) Side(100)
  hip21.write(h2);  //Side(79), Forward(170)
  hip31.write(h3);  // Side 120
  hip41.write(h4); //Side 80, 
    
   
    
}

void preCheck() {//makes sure all ports and components are attached and accounted for.
  int i;
  jointList frame = knee1;
  for ( i = frame; i<tell; i++) {
    i.attached();
    while(i.attached()== TRUE) {
      continue;}
    else break;
    }
  }

int sRead(const char&) { //This function enables for developers to read angle of servos. Useful for visuallizing movements by playing around with the values.
  //README: to read knee#: input sRead(1#). to read hip#: input sRead(2#)
  int port = f
  switch(port) {
    case 1:
    angle = 
    }
  }


void slowga() { //delay function to see the movements better.
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




