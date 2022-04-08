# include "LiquidCrystal.h"  //lcd libary                                       
LiquidCrystal lcd(6,5,4,3,2,1);   //LCD object Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 11; //trig pin connection 
const int echoPin = 10;  //echopin connection 
long duration;
int distanceCm;
float liquid;
                                                                                                            
void setup() {      // setup perameter
lcd.begin(16,2);                                                   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
lcd.setCursor(0,0);
lcd.print("  Distance    ");
lcd.setCursor(0,1);
lcd.print("  Measurement  ");
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("    Made By    ");
lcd.setCursor(0,1);
lcd.print("    Jeet.org    ");
delay(2000);
lcd.clear();
}

void loop() {   // loop of flow program
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;                                                                                 
lcd.setCursor(0,0);                                                 
lcd.print("Distance Measur.");
delay(10);
lcd.setCursor(0,1);
lcd.print("Distance:");
lcd.print(distanceCm);
lcd.print(" Cm ");
delay(10);
}
