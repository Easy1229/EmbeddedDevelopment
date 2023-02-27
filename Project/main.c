#include <reg52.h>

sbit LED1=P1^0;

void delay(unsigned int time)
{
	unsigned char i,j;
	for(i=0;i<time;i++)
		for(j=0;j<212;j++);
}
int main(){
	while(1){
		LED1=0;
		delay(212);
		LED1=1;
		delay(212);
	}
}