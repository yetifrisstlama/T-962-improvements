#ifndef SERIAL_H_
#define SERIAL_H_

void Serial_Init(void);

//non-blocking read
char uart_readc(void);

//non-blocking check
int uart_isrxready(void);

int uart_readline();

// Filled by uart_readline
char serial_cmd[255];


#endif /* SERIAL_H_ */
