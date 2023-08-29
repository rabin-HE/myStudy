//============================智宇科技===========================
//  例程17-74HC595
//===============================================================
//connect 74hc595 pin10:MR--->VCC; Pin13:OE--->GND
int latchPin = 5;//to 595 pin12
int clockPin = 4;//to 595 pin11
int dataPin = 2; //to 595 pin14
int a;
void setup ()
{
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT); //让三个脚都是输出状态
}
void hanshu()
{
     digitalWrite(clockPin,LOW);
     digitalWrite(latchPin,LOW); //将ST_CP口上面加低电平让芯片准备好接收数据
     delay(500);
     digitalWrite(clockPin,HIGH);
     digitalWrite(latchPin,HIGH); //将ST_CP这个针脚恢复到高电平
     delay(500);
     a++;
     if(a == 8)
     a=0;
     if(a == 0)
     digitalWrite(dataPin,HIGH); 
     else
     digitalWrite(dataPin,LOW); 
     
}
void loop()
{
  hanshu();
}
