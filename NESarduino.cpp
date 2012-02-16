  #include <delay_x.h>
  int NES_BIT(){PORTB = B000010; _delay_us(6); int nbit = PINB & 4; PORTB = B000000; _delay_us(6); return nbit >> 2;}
  int NES_A = 0;
  int NES_B = 0;
  int NES_SELECT = 0;
  int NES_START = 0;
  int NES_UP = 0;
  int NES_DOWN = 0;
  int NES_LEFT = 0;
  int NES_RIGHT = 0;

void NES_READ(){
  //latch
  PORTB = B000001; _delay_us(12); 
  int nbit = PINB & 4;
  NES_A = nbit >>2;
  PORTB = B000000; _delay_us(6);
  //serial reads
  NES_B = NES_BIT();
  NES_SEL = NES_BIT();
  NES_STA = NES_BIT();
  NES_UP = NES_BIT();
  NES_DOW = NES_BIT();
  NES_LEF = NES_BIT();
  NES_RIG = NES_BIT();
  
}

