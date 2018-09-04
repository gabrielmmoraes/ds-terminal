# DS Terminal

Run-time terminal for dynamic Data Structure manipulation.

## How to use it

1. Clone the source code with git.

```
git clone https://github.com/gabrielmmoraes/ds-terminal.git
```

2. Include header file in your main.c source code.

```C
#include "path/to/terminal.h"
```

3. Create the Data Structure you want to manipulate and define a pointer to it.

```C
typedef struct DS {
}DS;

DS* createDS(){
  DS* ds = (DS*) malloc(size * sizeof(DS));
  return ds;
}

int main(){
  DS* pointer_to_ds = createDS()
  return 0;
}
```

4. Use the add_command function to register the functions you want to use inside the terminal. And then call the init_terminal function with a pointer to your Data Structure.

```C
void pop(DS* ds){
  printf("I'm the pop function\n");
  return;

void push(DS* ds){
  printf("I'm the push function\n");
  return;
}

int main(){
  DS* ds = createDs();
  
  // add_command((unsigned long int) func_pointer, call of the func inside terminal, num of arguments)
  add_command((unsigned long int) &pop, "pop", 0);
  add_command((unsigned long int) &pop, "push", 1);  
  
  init_terminal(pointer_to_ds);
  
  return 0;
}
```

Obs.: Up until now you can only call functions of one int argument or none, so uint8_t n_args can only be 0 or 1 in value.

5. Compile terminal.c with your main.c source code and run the  executable (example running below can be checked [here](https://github.com/gabrielmmoraes/data-structures)).

```
gcc /path/to/terminal.c main.c -o dsterminal
```

```
gabrielmmoraes@pc:~/Projects/data-structures/stack$ ./stack
>> push(3)
[3]
>> push(4)
[3, 4]
>> push(5)
The stack is full.
>> pop()
4
[3]
>> pop()
3
[]
>> quit()         // Native function
gabrielmmoraes@pc:~/Projects/data-structures/stack$
```

Obs.: All function calls must have parenthesis, even if it does not need any argument.
