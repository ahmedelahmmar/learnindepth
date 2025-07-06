#include "../inc/uart.h"

unsigned char buff[] = "learn_in_depth_lab_1_by_ahmed";

int main(void)
{
    uart_send_str(buff);
    while (1);

    return 0;
}