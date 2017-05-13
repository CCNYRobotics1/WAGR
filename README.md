# WAGR
Wall Avoiding Gait Robot (WAGR - pronounced wager)

## Current Phase: 
Designing gait algorithm for directional movement. 

##
An intermediate-hard level of the famous Wall Avoiding Robot/Obstacle Avoiding robot.

WAR is designed to perform basic obstacle detection and avoidance with the design focused on wheels/motors. The hard part in the project is the hardware. But in the <b>WAGR</b>, both the hardware and software can exponentially complex compared to WAR.

### Hardware Design
<b>WAGR</b> is a step up in that it uses 8 servo motors: 4 for hip joints and 4 for knee joints. Design is based on 4 limbs with 2 degrees of freedom per limb (sweep for hip, raise movement for knee). This is arguably a more difficult setup than if you use a hexapod design (6 limbs, 2 degrees of freedom per limb: 2 servos per limb).

A more easier design would be to add 1 more degree of freedom in our current <b>WAGR</b>. Add a raise servo to the entire limb to make it easier to design the gait movement of the bot.

### Software Design
<b>WAGR</b>'s current software design is based on trial and error. We reproduce the movements on a given gait cycle by moving each servo, calculate the angles of each movement frame and implement them in dirty code.

We want to then refine the code and implement a sensing system, most likely 4 ping sensors per side, and allow the bot to move omnidirectionally with moving towards a goal.

