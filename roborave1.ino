#include "configuration.h"

/*motor control*/
void go_Back(void)  //Reverse
{
  digitalWrite(dir1PinL, HIGH);
  digitalWrite(dir2PinL,LOW);
  digitalWrite(dir1PinR,HIGH);
  digitalWrite(dir2PinR,LOW);
}
void go_Right(void)  //Turn right
{
  digitalWrite(dir1PinL, HIGH);
  digitalWrite(dir2PinL,LOW);
  digitalWrite(dir1PinR,LOW);
  digitalWrite(dir2PinR,HIGH);
}
void go_Left(void)  //Turn left
{
  digitalWrite(dir1PinL, LOW);
  digitalWrite(dir2PinL,HIGH);
  digitalWrite(dir1PinR,HIGH);
  digitalWrite(dir2PinR,LOW);
}
void go_Forward(void)  //Forward
{
  digitalWrite(dir1PinL, LOW);
  digitalWrite(dir2PinL,HIGH);
  digitalWrite(dir1PinR,LOW);
  digitalWrite(dir2PinR,HIGH);
}
void stop_Stop()    //Stop
{
  digitalWrite(dir1PinL, LOW);
  digitalWrite(dir2PinL,LOW);
  digitalWrite(dir1PinR,LOW);
  digitalWrite(dir2PinR,LOW);
}

/*set motor speed */
void set_Motorspeed(int speed_L,int speed_R)
{
  analogWrite(speedPinL,speed_L); 
  analogWrite(speedPinR,speed_R);   
}

//Pins initialize
void init_GPIO()
{
  pinMode(dir1PinL, OUTPUT); 
  pinMode(dir2PinL, OUTPUT); 
  pinMode(speedPinL, OUTPUT);  
 
  pinMode(dir1PinR, OUTPUT);
  pinMode(dir2PinR, OUTPUT); 
  pinMode(speedPinR, OUTPUT); 
  stop_Stop();
}






void setup() 
{
  init_GPIO();
  go_Forward();//Forward
  set_Motorspeed(255,255);
  delay(10000);
  
  go_Left();//Turn left
  set_Motorspeed(255,255);
  delay(570);
  
  stop_Stop();//Stop
  set_Motorspeed(0,0);
  delay(1000);
}





void loop() {
  // put your main code here, to run repeatedly:
  
  go_Forward();//Forward
  set_Motorspeed(355,255);
  delay(10000);
  
  go_Left();//Turn left
  set_Motorspeed(255,255);
  delay(10000);

  go_Forward();
  set_Motorspeed(355,255);
  delay(10000);

  go_Right();
  set_Motorspeed(355,255);
  delay(10000);
}
