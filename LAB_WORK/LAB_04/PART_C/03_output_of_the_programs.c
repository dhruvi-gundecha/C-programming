// 3. Output of the following program. 

#include <stdio.h> 
Void main()  
{ 
    printf("includehelp.com\rOK\n");  
    printf("includehelp.com\b\b\bOk\n"); 
} 
 
// => error :-

// Main.c:2:1: error: unknown type name 'Void'; did you mean 'void'?
//     2 | Void main()
//       | ^~~~
//       | void

// => how to fix :-

// 1. void must be in small case.
//------------------------
#include <stdio.h> 
Void main() 
{ 
    unsigned char c=290;  
    printf("%d",c); 
} 
 
// => error :-

// Main.c:2:1: error: unknown type name 'Void'; did you mean 'void'?
//     2 | Void main()
//       | ^~~~
//       | void
// Main.c: In function 'main':
// Main.c:4:21: warning: unsigned conversion from 'int' to 'unsigned char' changes value from '290' to '34' [-Woverflow]
//     4 |     unsigned char c=290;
//       |                     ^~~

// => how to fix :-

// 1. void must be in small case.
// 2. also decalre datatype matches with print datatye.
// 3. here you are declare unsigned char c and print this in integer datatype  then fix this.
//------------------------
#include <stdio.h> 
Void main() 
{ 
    Int ok= -100; 
    -100; 
    printf("%d",ok);  
    return 0; 
} 
 
// => error :-

// Main.c:2:1: error: unknown type name 'Void'; did you mean 'void'?
//     2 | Void main()
//       | ^~~~
//       | void
// Main.c: In function 'main':
// Main.c:4:5: error: unknown type name 'Int'; did you mean 'int'?
//     4 |     Int ok= -100;
//       |     ^~~
//       |     int

// => IMPORTANT KEY : in void main function the code will never return any value...

// => how to fix :-

// 1. if you want to return something than use int main function if not than use void main function.
// 2. after that Int must be in small case.
// 3. if you are using int than return 0. else not return anything.
//------------------------