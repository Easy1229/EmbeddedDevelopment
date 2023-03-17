#include <reg52.h>
#define uchar unsigned char
#define uint unsigned int

void Delay(uint time){
	uint i,j;
	for(i=0;i<time;i++)
		for(j=0;j<time;j++);
}

int main(){
	uint i,j;
	while(1){
		uchar a=0xfe;
		uchar b=0x7f;
		
		for(i=0;i<7;i++){
		P1=a;
		a=a<<1;
		Delay(200);
	}
		for(j=0;j<7;j++){
		P1=b;
		b=b>>1;
		Delay(200);
		}
	}
	//return 0;
}
 

 
