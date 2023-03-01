#include <reg52.h>

sbit LED1=P1^0;
int main(){
	while(1){
		LED1=0;
	}
}