#include<stdio.h> 
Void main() 
{ 
    Int X=5; 
    If(X==1){ 
        printf("%d",X); 
    } 
    else{ 
        printf("%d",X);      
    } 
} 

//  => error :-

// Main.c:3:1: error: unknown type name 'Void'; did you mean 'void'?
//     3 | Void main()
//       | ^~~~
//       | void
// Main.c: In function 'main':
// Main.c:5:5: error: unknown type name 'Int'; did you mean 'int'?
//     5 |     Int X=5;
//       |     ^~~
//       |     int
// Main.c:6:5: error: implicit declaration of function 'If' [-Wimplicit-function-declaration]
//     6 |     If(X==1){
//       |     ^~
// Main.c:6:13: error: expected ';' before '{' token
//     6 |     If(X==1){
//       |             ^
//       |             ;

// => how to fix :-

// 1. void must be in small-case.
// 2. int in small case.
// 3. if in small case.
// ----------------------------------------

#include<stdio.h> 
Void main() 
{ 
    Int X=5; 
    If(true){ 
        printf("hello"); 
    } 
} 

//  => error :-

// Main.c:40:1: error: unknown type name 'Void'; did you mean 'void'?
//    40 | Void main()
//       | ^~~~
//       | void
// Main.c: In function 'main':
// Main.c:42:5: error: unknown type name 'Int'; did you mean 'int'?
//    42 |     Int X=5;
//       |     ^~~
//       |     int
// Main.c:43:5: error: implicit declaration of function 'If' [-Wimplicit-function-declaration]
//    43 |     If(true){
//       |     ^~
// Main.c:43:8: error: 'true' undeclared (first use in this function)
//    43 |     If(true){
//       |        ^~~~
// Main.c:40:1: note: 'true' is defined in header '<stdbool.h>'; this is probably fixable by adding '#include <stdbool.h>'
//    39 | #include<stdio.h>
//   +++ |+#include <stdbool.h>
//    40 | Void main()
// Main.c:43:8: note: each undeclared identifier is reported only once for each function it appears in
//    43 |     If(true){
//       |        ^~~~
// Main.c:43:13: error: expected ';' before '{' token
//    43 |     If(true){
//       |             ^
//       |             ;

// => how to fix :-

// 1. void must be in small-case.
// 2. int in small case.
// 3. if in small case.
// 4. add #include<stdbool.h> library
// ----------------------------------------

#include<stdio.h> 
void main() 
{ 
    int X=5; 
    if(X<1) 
        printf("hello"); 
    if(X==5) 
        printf("hi"); 
else 
        printf("hi"); 
} 

//  => error :-

// Main.c:87:1: error: unknown type name 'Void'; did you mean 'void'?
//    87 | Void main()
//       | ^~~~
//       | void
// Main.c: In function 'main':
// Main.c:89:5: error: unknown type name 'Int'; did you mean 'int'?
//    89 |     Int X=5;
//       |     ^~~
//       |     int
// Main.c:90:5: error: implicit declaration of function 'If' [-Wimplicit-function-declaration]
//    90 |     If(X<1)
//       |     ^~
// Main.c:90:12: error: expected ';' before 'printf'
//    90 |     If(X<1)
//       |            ^
//       |            ;
//    91 |         printf("hello");
//       |         ~~~~~~

// => how to fix :-

// 1. void must be in small-case.
// 2. int in small case.
// 3. if in small case.
// ----------------------------------------