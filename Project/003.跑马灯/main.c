#include<reg52.h>
#define uchar unsigned char
#define uint unsigned int


void delay_ms(uint xms){
	uint i,j;
	for(i=0;i<xms;i++)
		for(j=0;j<xms;j++);
}

void main(void)
{
	uchar num,dat1,dat2;
	delay_ms(100);
	P0=0;
	while(1)
	{
		dat1=0xfe;
		dat2=0x7f;
		for(num=0;num<7;num++)
		{
			P1=dat1;
			dat1=dat1<<1; 
			delay_ms(100);
		} 
		for(num=0;num<7;num++)
		{
			P1=dat2;
			dat2=dat2>>1;
			delay_ms(100);
		}
	}
}
