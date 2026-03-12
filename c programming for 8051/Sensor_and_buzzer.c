#include <reg51.h>
void MSDelay(unsigned int);
sbit Dsensor = P1^1;
sbit Buzzer = P1^7;

void main(void){
	Dsensor = 1;
	while(Dsensor == 1){
		Buzzer =0;
		MSDelay(200);
		Buzzer = 1;
		MSDelay(200);
	}
}

void MSDelay(unsigned int itime){
	unsigned int i , j;
	for(i=0;i<itime;i++){
		for(j=0;j<1275;j++);
	}
}