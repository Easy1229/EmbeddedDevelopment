#include <reg52.h>

sbit led1=P1^0;

void Delay(){
	int n=60;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		}
	}
}
	
int main(){
		while(1){
		led1=0;
		Delay();
		led1=1;
		Delay();
		}
}