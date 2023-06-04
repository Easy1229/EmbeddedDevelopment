#include <reg52.h>
sbit LED =P1^0;
int main(){
	while(1){
		LED=1;
	}
}