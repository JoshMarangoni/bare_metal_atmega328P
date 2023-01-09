
#define CUSTOM_DDRB  *((volatile unsigned char*)0x24)
#define CUSTOM_PORTB *((volatile unsigned char*)0x25)

#define PERIOD 2000000U

void custom_delay(long int n, bool on)
{
  for (long i = 0; i < n; i++) {
    CUSTOM_PORTB = on ? (1 << 5) : 0;
  }
}

void setup() {
  // set PB5 as a digital output
  CUSTOM_DDRB = (1 << 5);
}

void loop() {
  // turn on PB5 register for certain number of clock cycles
  custom_delay(PERIOD, false);
 
  // turn on PB5 certain number of clock cycles
  custom_delay(PERIOD, true);
}
