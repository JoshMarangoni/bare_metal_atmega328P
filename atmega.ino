
#define CUSTOM_DDRB  *((volatile byte*)0x25)
#define CUSTOM_PORTB *((volatile byte*)0x25)

void setup() {
  // set PB5 as a digital output
  CUSTOM_DDRB = 32;
}

void loop() {
  // turn on PB5 for 1M clock cyles
  for (long i = 0; i < 1000000; i++) { CUSTOM_PORTB = 32 ;}

  // turn off PB5 for 1M clock cyles
  for (long i = 0; i < 1000000; i++) { CUSTOM_PORTB = 0 ;}
}
