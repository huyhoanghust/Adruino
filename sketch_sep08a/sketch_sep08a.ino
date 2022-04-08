const int trig = 8;     // chân trig của HC-SR04
const int echo = 7;     // chân echo của HC-SR04
 
void setup()
{
    ​Serial.begin(9600);     // giao tiếp Serial với baudrate 960
    ​pinMode(trig,OUTPUT);   // chân trig sẽ phát tín hiệ
    ​pinMode(echo,INPUT);    // chân echo sẽ nhận tín hiệ
}
 
void loop()
{
    ​unsigned long duration; // biến đo thời gia
    ​int distance;           // biến lưu khoảng các
    ​digitalWrite(trig,0);   // tắt chân tri
    ​delayMicroseconds(2);
    ​digitalWrite(trig,1);   // phát xung từ chân tri
    ​delayMicroseconds(5);   // xung có độ dài 5 microSecond
    ​digitalWrite(trig,0);   // tắt chân tri
    
    ​
    ​duration = pulseIn(echo,HIGH); 
    ​// Tính khoảng cách đến vật
    ​distance = int(duration/2/29.412);
    
    ​
    ​Serial.print(distance);
    ​Serial.println("cm");
    ​delay(200);
}
