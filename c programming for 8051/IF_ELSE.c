#include <reg51.h>
void main(void){
	unsigned char mybyte;
	P0 = 0xFF;
	while(1){
		mybyte = P0;
		if(mybyte>100){
			P1 = mybyte;
		}
		else{
			P2 = mybyte;
		}
	}
}