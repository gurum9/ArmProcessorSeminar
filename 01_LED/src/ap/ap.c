#include "ap.h"



void updateLed(void);



void apInit(void)
{

}

void apMain(void)
{
  while(1)
  {
    updateLed();
  }
}

void updateLed(void)
{
  static uint32_t pre_time = 0;


  if (millis()-pre_time >= 500)
  {
    pre_time = millis();
    ledToggle(_HW_DEF_LED_USER1);
  }
}
