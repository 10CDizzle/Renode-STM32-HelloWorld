#include <zephyr.h>

void main(void)
{
    //Nothing Fancy, just print 'hello world' to the console
    for(;;) { 
          printf("Hello_x86! \r");
          task_sleep(500);
   }
}
