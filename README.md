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
Stack* createStack(unsigned int size){
  Stack* stack = (Stack*) malloc(size * sizeof(Stack));
  stack->size = size;
  stack->top = -1;
  stack->buffer = (int*) malloc(size * sizeof(int));
  return stack;
}

int main(){
  Stack* stack_pointer = createStack(size)
  return 0;
}
```

4. Use the add_command function to register the functions you want to use inside the terminal.

```C
void pop(Stack* stack){
  if (!empty(stack)){
    printf("%d\n", stack->buffer[stack->top--]);
    printStack(stack);
    return;
  }

  else printf("The stack is empty.\n");
  return;
}

void push(Stack* stack, int n){
  if (stack->top == stack->size-1){
    printf("The stack is full.\n");
    return;
  }
  
  stack->buffer[++stack->top] = n;
  printStack(stack);
  return; 
}

int main(){
  Stack* stack_pointer = createStack(size);
  
  // add_command((unsigned long int) func_pointer, call of the func inside terminal, num of arguments)
  add_command((unsigned long int) &pop, "pop", 0);
  add_command((unsigned long int) &pop, "push", 0);  
  
  return 0;
}
```

Obs.: Up until now you can only call functions of one int argument or none, so uint8_t n_args can only be 0 or 1 in value.

5. Call init_terminal with the Data Structure pointer as an argument.

```C
int main(){
  Stack* stack_pointer = createStack(2);
  
  add_command((unsigned long int) &pop, "pop", 0); 
  add_command((unsigned long int) &pop, "push", 0); 
  
  init_terminal(stack);
  
  return 0;
}
```

6. Compile terminal.c with your main.c source code.

```
gcc /path/to/terminal.c main.c -o dsterminal
```

7. Run the executable (example running below can be checked [here](https://github.com/gabrielmmoraes/data-structures)).

```
gabrielmmoraes@pc:~/Projects/data-structures/stack$ ./stack 2
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
```

Obs.: All function calls must have parenthesis, even if it does not need any argument.

8. Exit with Ctrl+C or quit() command (native function).

```
gabrielmmoraes@pc:~/Projects/data-structures/stack$ ./stack 2
>> quit()
gabrielmmoraes@pc:~/Projects/data-structures/stack$ 
```
