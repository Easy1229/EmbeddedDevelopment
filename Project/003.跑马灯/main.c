#include <reg52.h>
#include <intrins.h>

sbit LED=P1^0;

 void Delay(unsigned char time){
	 while(time--);
 }
 
 int main(){
 
	 char k=0xff;
	 
	 while(1){
		LED=k;
		 Delay(50000);
		 k=_crol_(k,1);
	 }
	 
 }