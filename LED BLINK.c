#include<LPC21xx.h>
void delay(int a){
  int i;
	for(;a;a--)
	for(i=0;i<12000;i++);
}
int main()
	{
	PINSEL0=0X00000000;
	IODIR0=0X00000003;
	while(1)
	{
		IOSET0=0X00000003;
		delay(500);
		IOCLR0=0X00000003;
		delay(500);
	}
}
