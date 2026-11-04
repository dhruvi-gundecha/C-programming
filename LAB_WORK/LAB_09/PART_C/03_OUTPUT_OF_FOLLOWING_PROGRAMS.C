// 3. Output of the following program
//-----------------------------------------------------------

void main()
{
int a=25;
while(a <= 27)
{
printf("%d ", a);
a++;
}
}

// => output :- 

// Main.c: In function 'main':
// Main.c:10:1: error: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
//    10 | printf("%d ", a);
//       | ^~~~~~
// Main.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
//   +++ |+#include <stdio.h>
//     1 | // 3. Output of the following program
// Main.c:10:1: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
//    10 | printf("%d ", a);
//       | ^~~~~~
// Main.c:10:1: note: include '<stdio.h>' or provide a declaration of 'printf'

//-----------------------------------------------------------
// => how to fix :- 

// 1. add library of #include<stdio.h>
//-----------------------------------------------------------


#include <stdio.h>
void main()
{
while(0)
{
printf("Hello\n");
}
}

// => output :- 

// Program did not output anything!
//-----------------------------------------------------------
// => how to fix :- 

// 1. change 0 to 1 in while loop.
// 2. add break inside while
//-----------------------------------------------------------