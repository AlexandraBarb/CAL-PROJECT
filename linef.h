#ifndef __linef_HEADER__
#define __linef_HEADER__
#include "general_types.h"
#include "general.h"

void LF_vSetPinsDir(BOOL bDir);//seteaza directia pinilor 0 5
void LF_vWritePins();//aplica tensiune
T_U8 LF_u8ReadPins();//citeste senzor si returneaza val pini

#endif