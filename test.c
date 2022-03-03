#define F_CPU 16000000
#include <avr/io.h>      
#include <util/delay.h>  
#include "peri.h"
int main()
{
  uint8_t count = 7;
  init_peri();
  set_led_value(7);
}

