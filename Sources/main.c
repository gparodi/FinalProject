#include "Config.h"


void main(void) {

  EnableInterrupts; /* enable interrupts */
  /* include your code here */



  for(;;) {
    __RESET_WATCHDOG(); /* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
