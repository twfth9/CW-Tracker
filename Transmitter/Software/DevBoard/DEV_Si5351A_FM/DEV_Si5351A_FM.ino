#include "si5351.h"
#include "Wire.h"

TwoWire *MyWire = new TwoWire;

int16_t corr_factor = -19000;

void setup() {
  MyWire->begin();
  //MyWire->setClock(800);
  
  Si5351 si5351(MyWire, 0x6F);
  
  pinMode(7, OUTPUT);
  si5351.init(SI5351_CRYSTAL_LOAD_8PF, 0, 0);
  si5351.set_correction2(corr_factor, SI5351_PLL_INPUT_XO);
  si5351.set_freq(14600000000ULL, SI5351_CLK0);
  si5351.update_status();

  byte tick = 0;

  while(1)
  {
    for(int i=0; i< 0xFFFF; i++)
    {
      si5351.set_correction2(1000, SI5351_PLL_INPUT_XO);

      si5351.set_correction2(corr_factor, SI5351_PLL_INPUT_XO);
    }
}

void loop() {

}
