#include "main.h"
#include "lemlib/api.hpp" // IWYU pragma: keep



void rightSideAuto(){
        //RIGHTBLUE/RIGHT
    chassis.moveToPoint(0, 11, 500);
    chassis.turnToHeading(32,300);
    intake1Speed = 115;
    chassis.moveToPoint(12, 35, 5000,{ .maxSpeed = 50});
    pros::delay(1000);
    chassis.turnToHeading(160,1500);
    chassis.moveToPoint(34, 3, 5000,{ .maxSpeed = 60} );
    pros::delay(200);
    chassis.turnToHeading(180,300);


     //distance sensor reset  
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(700); //NEED THIS DELAY TO LET POS UPDATE BEFORE TURNING
    chassis.setPose((72-(distanceL.get_distance())/25.4),3, 180); 

    pros::delay(500);
    chassis.moveToPoint(53.5, 25, 1200,{ .forwards = false, .maxSpeed = 80,});
    pros::delay(200);
    intake2Speed = 115;
     pros::delay(350);
    toungue.extend();
    
     chassis.moveToPoint(53.5, -12, 1000, {.maxSpeed = 80});  
    intake2Speed = 0;
    chassis.moveToPoint(53.5, -6, 1000, {.forwards = false, .maxSpeed = 60});  
    chassis.moveToPoint(53.5, -14, 1000, {.maxSpeed = 80});  
    pros::delay(300);

    chassis.moveToPoint(53.5, 25, 2000,{ .forwards = false, .maxSpeed = 80,});
    pros::delay(450);
    intake2Speed = 115;
    pros::delay(3000);
    // _________________


    pros::delay(500);


}



void leftSideAuto(){
        chassis.moveToPoint(0, 11, 500);
    chassis.turnToHeading(-32,300);
    intake1Speed = 115;
    chassis.moveToPoint(-12, 35, 5000,{ .maxSpeed = 50});
    pros::delay(1000);
    chassis.turnToHeading(-160,1500);
    chassis.moveToPoint(-34, 3, 5000,{ .maxSpeed = 60} );
    chassis.turnToHeading(0,300);


     //distance sensor reset  
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(1000); //NEED THIS DELAY TO LET POS UPDATE BEFORE TURNING
    chassis.setPose(-(72-(distanceL.get_distance())/25.4),3, 0); 

    pros::delay(500);
    chassis.turnToHeading(180,500);
    chassis.moveToPoint(-54, 25, 5000,{ .forwards = false, .maxSpeed = 80,});
    pros::delay(300);
    intake2Speed = 115;
    pros::delay(1000);
        toungue.extend();
    
     chassis.moveToPoint(-54, -11, 1000, {.maxSpeed = 80});  
    pros::delay(200);

    intake2Speed = 0;
    chassis.moveToPoint(-54, -6, 1000, {.forwards = false, .maxSpeed = 60});  
    chassis.moveToPoint(-54, -11, 1000, {.maxSpeed = 60});  
    pros::delay(500);
    chassis.moveToPoint(-54, 25, 5000,{ .forwards = false, .maxSpeed = 60,});
    intake2Speed = 115;
    pros::delay(1500);
    // _________________


    pros::delay(500);


}



void skillsAuto(){
    intakeM.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    intakeT.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);

    //MIDDLLE BALLS
    // chassis.setPose(0, 0, 0); 
    // intake1Speed = 120;
    // chassis.moveToPoint(0, 14, 1000); // slight move to reset odometry  
    // pros::delay(1000); // wait for a moment
    // chassis.moveToPoint(0, 10, 500, {.forwards = false, .maxSpeed = 90}); // slight move to reset odometry  
    // chassis.moveToPoint(0, 17, 700); // slight move to reset odometry  
    // pros::delay(1000); // wait for a moment
    // chassis.moveToPoint(0, 0, 2000, {.forwards = false}); // slight move to reset odometry  
    
    // chassis.setPose(0, 0, 180);

//MIDDLE LOADERS
    // chassis.setPose(8, 9, -145);
    // chassis.moveToPoint(17,38, 5000, {.forwards = false}); // move to shooting position
    // chassis.turnToHeading(-40,3000); // turn to face goal
    // chassis.moveToPoint(13,42, 5000); // move to shooting position
    // pros::delay(700); // wait for a moment to stabilize
    // intake1Speed = -120;
    // pros::delay(500); // wait for a moment to shoot
    // intake1Speed = 0;

//UNCOMMENT HHEHHEHHE_____________________________________________
    //move to loader
    chassis.setPose(0, 9, 90);
    chassis.moveToPoint(49.5, 9, 5000, {.maxSpeed = 90}); 

    pros::delay(500);
    toungue.extend();
  
    pros::delay(100); 
    chassis.turnToHeading ( -180, 5000);

    //distance sensor reset  
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(1000); //NEED THIS DELAY TO LET POS UPDATE BEFORE TURNING
    chassis.setPose((72-(distanceL.get_distance())/25.4),10, 180); 

    //load balls
    intake1Speed = 120;
    chassis.moveToPoint(53, -1.5, 1000, {.maxSpeed = 80});
    pros::delay(2700);
    chassis.moveToPoint(53, 3, 1000, {.forwards = false, .maxSpeed = 80});
    chassis.moveToPoint(53, -2, 1000, {.maxSpeed = 80});
    pros::delay(300); 

   
    //move to other side
    chassis.moveToPoint(53, 5, 5000, {.forwards = false}); 
    toungue.retract();
    pros::delay(500);
    chassis.moveToPoint(32, 35, 5000, {.forwards = false,  .minSpeed=62, .earlyExitRange=4}); 
    chassis.moveToPoint(36, 83, 5000, {.forwards = false, .minSpeed=62, .earlyExitRange=2}); //change back to 40
   // chassis.moveToPoint(50, 100, 5000, {.forwards = false, .maxSpeed = 70, }); 
    chassis.moveToPoint(57, 105, 5000, {.forwards = false, .maxSpeed = 70, }); 
    intake1Speed = 0;

      //distance sensor reset  
      pros::delay(50);
   chassis.turnToHeading(180, 500);
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(800); //NEED THIS DELAY TO LET ROBOT GET TO POINT BEFORE SETTING POSE
    chassis.setPose((72-(distanceL.get_distance())/25.4),107, 180); 
        pros::delay(200);


   //score loaded balls
   chassis.turnToHeading(0, 500); // turn to face goal
    pros::delay(50); // wait for a moment to stabilize
    //chassis.moveToPoint(53, 100, 1500, {.forwards = false, .maxSpeed = 70});
    chassis.moveToPoint(56, 90, 1500, {.forwards = false, .maxSpeed = 70});
    chassis.turnToHeading(0, 50); // turn to face goal
    pros::delay(20); // wait for a moment to stabilize
    intake1Speed = 120;
    intake2Speed = 120;  
    pros::delay(2500); // wait for a moment to shoot

    
    //second loader
    intake1Speed = 0;
    intake2Speed = 0;
    toungue.extend();
    intake1Speed = 120;
    
    
    chassis.moveToPoint(55, 115, 5000, {.maxSpeed = 80, .minSpeed=30, .earlyExitRange=4});
    chassis.moveToPoint(55, 127, 5000, {.maxSpeed = 50});
    pros::delay(2700);
    chassis.moveToPoint(55, 120, 1000, {.forwards = false});
    chassis.moveToPoint(55, 128, 1000); 
    pros::delay(500);

    //final shoot
  chassis.moveToPoint(55, 91.5, 4000, {.forwards = false, .maxSpeed = 70});
    pros::delay(1000); // wait for a moment to stabilize
    intake1Speed = 120;
    intake2Speed = 120; 
    pros::delay(500);
    intake1Speed = -70;
    intake2Speed = -70; 
    pros::delay(50); //jam reverse
    intake1Speed = 120;
    intake2Speed = 120; 
    pros::delay(200);
    intake1Speed = -70;
    pros::delay(50); //jam reverse
    intake1Speed = 120;
    pros::delay(2000);
    

    chassis.moveToPoint(55, 100, 5000, {.minSpeed=72, .earlyExitRange=4});

    //imu reset
    /*
    pros::delay(800);
    chassis.setPose(55,100, avgImuHeading(imu.get_heading(), imu2.get_heading()));   
    */

    chassis.turnToHeading(90,500);

    intake1Speed = 0;
    intake2Speed = 0; 
    toungue.retract();

    //travel
    chassis.moveToPoint(40, 100, 5000, {.forwards = false});

          //distance sensor reset  
     
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(1000); //NEED THIS DELAY TO LET ROBOT GET TO POINT BEFORE SETTING POSE
    chassis.setPose(45,109-(distanceL.get_distance())/25.4, 90); 

        chassis.moveToPoint(-36, 85, 5000, {.forwards = false, .minSpeed=72, .earlyExitRange=6});
        chassis.moveToPoint(-41, 85, 5000, {.forwards = false, .maxSpeed = 55});


//     //REFLECTION

   pros::delay(500);
    toungue.extend();
    
    pros::delay(100); 
    intake1Speed = 120;
    chassis.turnToHeading ( 0, 5000);

    //distance sensor reset  
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(1000); //NEED THIS DELAY TO LET POS UPDATE BEFORE TURNING
    chassis.setPose(-(72-(distanceL.get_distance())/25.4),95, 0); 

    //load balls
    chassis.moveToPoint(-53, 109, 1000, {.maxSpeed = 80});
    pros::delay(2700);
    chassis.moveToPoint(-53, 101, 1000, {.forwards = false, .maxSpeed = 80});
    chassis.moveToPoint(-53, 110, 1000, {.maxSpeed = 80});
    pros::delay(300);

    //move to other side
    chassis.moveToPoint(-53, 95, 5000, {.forwards = false}); 
    pros::delay(500);
    toungue.retract();
    chassis.moveToPoint(-36, 67, 5000, {.forwards = false,  .minSpeed=82, .earlyExitRange=6}); 
    chassis.moveToPoint(-40, 28, 5000, {.forwards = false, .minSpeed=62, .earlyExitRange=6}); //change back to 40
   // chassis.moveToPoint(50, 100, 5000, {.forwards = false, .maxSpeed = 70, }); 
    chassis.moveToPoint(-69, -5, 5000, {.forwards = false, .maxSpeed = 70 }); 
    intake1Speed = 0;

         //distance sensor reset  
      pros::delay(50);
   chassis.turnToHeading(0, 500);
    pros::lcd::print(7, "X: %f", 72-((distanceL.get_distance())/25.4));
   pros::delay(1000); //NEED THIS DELAY TO LET ROBOT GET TO POINT BEFORE SETTING POSE
    chassis.setPose(-(72-(distanceL.get_distance())/25.4),12, 0); 

   //score loaded balls
   chassis.turnToHeading(180, 500); // turn to face goal
     chassis.moveToPoint(-56, 20, 5000, {.forwards = false, .maxSpeed = 80});
    chassis.turnToHeading(180, 25); // turn to face goal
    intake1Speed = 120;
    intake2Speed = 120;  
    pros::delay(2500); // wait for a moment to shoot
     
    //second loader
    intake1Speed = 0;
    intake2Speed = 0;
    toungue.extend();
    intake1Speed = 120;
    
    
    chassis.moveToPoint(-55, -5, 5000, {.maxSpeed = 80, .minSpeed=30, .earlyExitRange=4});
    chassis.moveToPoint(-55, -16.5, 5000, {.maxSpeed = 50});
    pros::delay(2700);
    chassis.moveToPoint(-55, -12, 1000, {.forwards = false});
    chassis.moveToPoint(-55, -17, 1000); 
    pros::delay(300);

    //final shoot
  chassis.moveToPoint(-55, 20, 2000, {.forwards = false, .maxSpeed = 70});
    pros::delay(1000); // wait for a moment to stabilize
    intake1Speed = 120;
    intake2Speed = 120;    
    pros::delay(2000);





     pros::delay(5000); // wait for a m
     
}

void thankYOU(){
        int n = 0;
    chassis.setPose(0, 0, 0);
    while (n < 7) {
        chassis.moveToPoint(0, 3, 5000, {.minSpeed=72, .earlyExitRange=4}); 
        chassis.moveToPoint(0, 0, 5000, { .forwards = false, .minSpeed=52, .earlyExitRange=4,}); 
        n = n + 1;
    }
    n = 0;
    while (n < 7) {
        chassis.moveToPoint(0, 3, 5000, {.minSpeed=72, .earlyExitRange=4} ); 
        chassis.moveToPoint(0, 0, 5000, { .forwards = false, .minSpeed=52, .earlyExitRange=4,}); 
        chassis.turnToHeading(-7, 1000, { .minSpeed=52, .earlyExitRange=8,});
        chassis.turnToHeading(7, 1000,  { .minSpeed=52, .earlyExitRange=4,});
        n = n + 1;
    }
    
    


}