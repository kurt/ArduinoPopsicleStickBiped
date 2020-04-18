/* ServoControl
 
*/ 

#include <Servo.h> 
 
Servo LeftAnkle;  // create servo object to control LeftHip - joint angle 1
Servo LeftKnee;   // joint angle (ja) 2 
Servo LeftHip;    // ja 3
Servo RightHip;   //...
Servo RightKnee;
Servo RightAnkle;

//Standing pos:
int pos = 0;    // variable to store the servo position 

 
void setup() 
{ 
  LeftAnkle.attach(3);  
  LeftKnee.attach(5);   
  LeftHip.attach(6);    
  RightHip.attach(9);   
  RightKnee.attach(10);
  RightAnkle.attach(11); 
} 
 
void loop() 
{ 

 //myservo.write(0);
 delay(500);
 while(1){ 
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    LeftAnkle.write(pos);              // tell servo to go to position in variable 'pos' 
    LeftKnee.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    LeftAnkle.write(pos);              // tell servo to go to position in variable 'pos' 
    LeftKnee.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
 }
} 






