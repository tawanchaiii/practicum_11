#define F_CPU 16000000
#include <avr/io.h>      
#include <util/delay.h>  
#include "peri.h"
#define MAX 1024
#define STEP 8
int main()
{
  uint16_t light;
  init_peri();
  while(1){
    light = read_adc(PC4);
    set_led_value(light/(MAX/STEP));
  }
}

