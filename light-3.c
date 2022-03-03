#define F_CPU 16000000
#include <avr/io.h>      
#include <util/delay.h>  
#include "peri.h"
int main()
{
  uint16_t light;
  init_peri();
  while(1){
    light = read_adc(PC4);
    if (light < 350){
      set_led_value(0b001);
    }
    else if (light < 750){
      set_led_value(0b010);
    }
    else{
      set_led_value(0b100);
    }
  }
}

