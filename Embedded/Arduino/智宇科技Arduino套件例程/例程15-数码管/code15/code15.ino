//============================智宇科技===========================
//  例程15-数码管
//===============================================================
int a=7;//定义数字接口7 连接a 段数码管         数码管7脚
int b=6;// 定义数字接口6 连接b 段数码管        数码管6脚
int c=5;// 定义数字接口5 连接c 段数码管        数码管4脚
int d=11;// 定义数字接口11 连接d 段数码管      数码管2脚
int e=10;// 定义数字接口10 连接e 段数码管      数码管1脚
int f=8;// 定义数字接口8 连接f 段数码管        数码管9脚
int g=9;// 定义数字接口9 连接g 段数码管        数码管10脚
int dp=4;// 定义数字接口4 连接dp 段数码管      数码管5脚
void digital_1(void) //显示数字1
{
	unsigned char j;
	digitalWrite(c,HIGH);//点亮c段
	digitalWrite(b,HIGH);//点亮b段
	for(j=7;j<=11;j++)//7~11口相应段拉低：a,f,g,e,d
		digitalWrite(j,LOW);
	digitalWrite(dp,LOW);//小数点不点亮
}
void digital_2(void) //显示数字2
{
unsigned char j;
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
for(j=9;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
}
void digital_3(void) //显示数字3
{
unsigned char j;
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4(void) //显示数字4
{
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5(void) //显示数字5
{
unsigned char j;
for(j=7;j<=9;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
digitalWrite(e,LOW);
}
void digital_6(void) //显示数字6
{
unsigned char j;
for(j=7;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
}
void digital_7(void) //显示数字7
{
unsigned char j;
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
for(j=8;j<=11;j++)
digitalWrite(j,LOW);
}
void digital_8(void) //显示数字8
{
unsigned char j;
for(j=5;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
}

void digital_9(void) //显示数字9
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_a(void) //显示字母a
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
	int i;//变量声明
	for(i=4;i<=11;i++)
		pinMode(i,OUTPUT);//设置4-11为输出口
}
void loop()
{
  while(1)
  {
    digital_1();//显示数字1
    delay(1000);//延时1s
    digital_2();//显示数字2
    delay(1000); //延时1s
    digital_3();//显示数字3
    delay(1000); //延时1s
    digital_4();//显示数字4
    delay(1000); //延时1s
    digital_5();//显示数字5
    delay(1000); //延时1s
    digital_6();//显示数字6
    delay(1000); //延时1s
    digital_7();//显示数字7
    delay(1000); //延时1s
    digital_8();//显示数字8
    delay(1000); //延时1s
    digital_9();//显示数字9
    delay(1000); //延时1s
    digital_a();
    delay(1000); //延时1s
  }
}
