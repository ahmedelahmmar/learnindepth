#include "../inc/uart.h"

void uart_send_str(unsigned char *pString)
{
    if (pString)
    {
        while (*pString != '\0') UART0DR = (unsigned long)(*pString++);
    }
}