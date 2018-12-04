#include "general.h"
#include "linef.h"

int main()
{
	TASK_Inits();
	T_U8 valpin;
/*	int i;
	
   PWM1_vInit();//pentru servo
    //vMotorInit();
	//vSetMotorDir(0);
	// vSetMotorSpeed(50);
	for(i=60;i<=120;i=i+1)
	{
		__delay_ms(100);
		SetDirServo(i);
	}
*/
	valpin=LF_u8ReadPins();
	if(valpin>=63)
	{
		SetDirServo(60);
	}
		else
 	{	
		SetDirServo(120);
	}
	
while(1)
{
}

    return 0;
}