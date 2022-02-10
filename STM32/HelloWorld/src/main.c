#include <zephyr.h>
#include <stdio.h>

void main(void)
{
    // Nothing Fancy, just print 'hello world' to the console every 500 ms.
    for (;;)
    {
        printf("Hello World! \r");
        k_sleep(K_MSEC(500));
    }
}
