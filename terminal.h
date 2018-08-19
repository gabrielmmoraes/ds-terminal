#ifndef TERMINAL_H_
#define TERMINAL_H_

#include <stdint.h>

void initTerminal();
void addCommand(unsigned long int, char*, uint8_t);
void checkCommands();
void executeCommand(unsigned long int, char*, int);

#endif