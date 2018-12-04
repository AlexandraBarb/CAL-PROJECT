#include "linef.h"
#include "mcal_gpio.h"
void LF_vSetPinsDir(BOOL bDir)
{
	T_U8 i;
	for(i=0;i<=5;i=i+1)
	{
		GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
	}
}



void LF_vWritePins()
{ 
		T_U8 i;
		for(i=0;i<=5;i=i+1)
		{
			GPIO_u8WritePortPin(PORT_C,i,1);
		}
}

T_U8 LF_u8ReadPins()
{
	T_U16 val;
	T_U8 val2;

	LF_vSetPinsDir(OUTPUT);
	LF_vWritePins();
	__delay_ms(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	val=GPIO_u16ReadPort(PORT_C);
	val2=val&0b111111;
	return val2;
	
}
