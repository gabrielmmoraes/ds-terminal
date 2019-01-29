#ifndef TERMINAL_H_
#define TERMINAL_H_

#include <stdint.h>

void init_terminal();
void add_command(void(*)(), char*, uint8_t);
void check_commands();
void execute_command(unsigned long int, char*, int);
void check_exit(char*);

#endif