
// Act as SPI slave and continuously send a single byte unsigned value over SPI
// that increments by 1 every time it is sent and loops around to 0

// based on code by Nick Gammon

volatile byte counter = 0;

void setup(void) {

  pinMode(MISO, OUTPUT);

  // turn on SPI in slave mode
  SPCR |= _BV(SPE);

  // turn on SPI interrupts
  SPCR |= _BV(SPIE);

}  // end of setup


ISR(SPI_STC_vect) {
  byte c = SPDR;
 
  switch (c) {
  case 0:
    counter = 0;
    break;
    
  default:
    counter++;
  } 

  SPDR = counter;

}  

void loop(void) {
  
}
