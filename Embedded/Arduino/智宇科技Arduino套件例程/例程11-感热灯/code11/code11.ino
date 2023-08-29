//============================智宇科技===========================
//  例程11-感热灯
//===============================================================
int potpin=0;//设置模拟端口A0
int ledpin=11;//设置数字端口11 ，后面用作PWM输出
int val=0;//声明变量val
void setup()
{
	pinMode(ledpin,OUTPUT);//设置数字11为输出模式
	Serial.begin(9600);//设定波特率为9600
}
void loop()
{
	val=analogRead(potpin);//读取A0的模拟电压值，并赋值到val  10 位  2^10=1024   0-1023 
	val = 255- val/2; //常温下测量是    650-0     PWM 0-255   降低到490左右  
        if(val < 0)
        val = 0;
	Serial.println(val);
	analogWrite(ledpin,val);// PWM输出驱动LED   PWM 0-255
	delay(100);//延时100ms
}
