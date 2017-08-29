# Table of Contents

1) Description
2) Current Phase
3) Hardware Overview
4) Sorfware Overview
5) Hardware Design
6) Software Design
7) Learning the Arduino IDE

# WAGR
Wall Avoiding Gait Robot (WAGR - pronounced wager)

## Current Phase: 
`Designing gait algorithm for directional movement. `

##
An intermediate-hard level of the famous Wall Avoiding Robot/Obstacle Avoiding robot.

WAR is designed to perform basic obstacle detection and avoidance with the design focused on wheels/motors. The hard part in the project is . But in the <b>WAGR</b>, both the hardware and software can exponentially complex compared to WAR.

### Hardware Design
<b>WAGR</b> is a step up in that it uses 8 servo motors: 4 for hip joints and 4 for knee joints. Design is based on 4 limbs with `previously 2` now 3 degrees of freedom per limb (sweep for hip, raise movement for knee, reach movement for extremeties). This is arguably a more difficult setup than if you use a hexapod design (6 limbs, 2 degrees of freedom per limb: 2 servos per limb).

`A more easier design would be to add 1 more degree of freedom in our current <b>WAGR</b>. Add a raise servo to the entire limb to make it easier to design the gait movement of the bot.` Now rectified.

### Software Design
<b>WAGR</b>'s current software design is based on trial and error. We reproduce the movements on a given gait cycle by moving each servo, calculate the angles of each movement frame and implement them in dirty code.

We want to then refine the code and implement a sensing system, most likely 4 ping sensors per side, and allow the bot to move omnidirectionally with moving towards a goal.

# Designing the Hardware.

The whole project is mainly 3D printed parts. 

# Writing the Software

The C language is still only choice for this project when using the Arduino IDE. But it isn't so bad.
We are using the standard `Servo.h` library that Arduino has preinstalled.

So we start by importing the library.
```C
#include <Servo.h>
```
And instantiating the 12 servos:
```C
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
```
Attach the pins to the necessary signal port on each servo on the setup function: 
```C
void setup()
{
  // assign servos to pins and center servos
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
```
And you're ready to configure your bot to move.
