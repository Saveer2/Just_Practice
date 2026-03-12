#include <reg51.h>
void main(void){
	unsigned char z;
	z=P1;
	z=z&0x3;
	switch(z){
		case(0):
		{
			P0 = '0';
			break;
		}
		case(1):
		{
			P0 = '1';
			break;
		}
		case(2):
		{
			P0 = '2';
			break;
		}
		case(3):
		{
			P0 = '3';
			break;
		}
	}
}