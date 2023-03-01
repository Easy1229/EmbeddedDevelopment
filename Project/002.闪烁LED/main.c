#include <reg52.h>

sbit LED1=P1^0;

void Delay(unsigned int time){
	unsigned char i,j;
	for(i=0;i<time;i++){
		for(j=0;j<time;j++);
	}	
}
int main(){
	while(1){
	LED1=0;
	Delay(212);
	LED1=1;
	Delay(212);
	}
}