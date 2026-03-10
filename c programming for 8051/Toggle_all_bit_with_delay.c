#include <reg51.h>
void MSDelay(unsigned int);
void main(void){
	while(1){
		P0 = 0x55;
		P2 = 0x55;
		MSDelay(250);
		P0 = 0xAA;
		P2 = 0xAA;
		MSDelay(250);
	}
}

void MSDelay(unsigned int itime){
	unsigned int i;
	unsigned int j;
	for(i=0;i<itime;i++){
		for(j=0;j<1275;j++);
	}
}