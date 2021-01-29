//Jorge Avila

#include "clock.h"
#include "gpio.h"
#include <stdio.h>
#include <stdlib.h>
#include "wait.h"

//define
#define BLUE_LED PORTF,2 //PF2

//prototypes
void initHw();

int main(void)
{
    initHw();

}
void initHw()
{
    // Initialize system clock to 40 MHz
    initSystemClockTo40Mhz();

    // Enable clocks
    enablePort(PORTF);

    // Configure LED and pushbutton pins
    selectPinPushPullOutput(BLUE_LED);
    setPinValue(BLUE_LED, 1);
    while(true);
}
