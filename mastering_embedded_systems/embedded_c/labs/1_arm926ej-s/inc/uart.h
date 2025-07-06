#ifndef __UART_H__
#define __UART_H__

#define UART0DR     *((volatile unsigned long *)(0x101f1000))

void uart_send_str(unsigned char * pString);

#endif /* __UART_H__ */ 