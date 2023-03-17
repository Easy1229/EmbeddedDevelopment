#include <reg52.h>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int 

void Delay(uint);
uchar n;

int main(){
	n=0xfe;
	while(1){
		P1=n;
		Delay(500);
		n=_crol_(n,1);
	}
}

void Delay(uint time){
	uint i,j;
	for(i=0;i<time;i++)
		for(j=0;j<110;j++);
}