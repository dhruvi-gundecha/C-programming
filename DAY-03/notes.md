--> Decision Making in C

----------------------------------------------

--> what is decision making ?

- C program statemenrs are executed sequentially.
- Decision making statements are used to control flow of program.
- It allows us to control whether a program segment is executed or not.
- It evaluates condition or logical expression first and based on its result(either true or false),the control is transferred to perticular statement.
- If result is true then it takes one path else it takes another path.

--> Decision making statements are : 

- one way       : if
- two way       : if-else
- multi way     : if-else if-else if-else
- two way       : ?:
- n way         : switch-case

--> relational operators are used to compare two expression's.

----------------------------------------------

--> if :

- if is single branch decision making statement.
- if is keyword.

--> syntax :-


if (condition){
    // statement will executed if condition is true.
}

----------------------------------------------

--> if-else :

- if-else is two branch decision making statement.
- else is keyword.

--> syntax :-


if (condition){
    // statement will executed if condition is true.
}
else{
    // statement will executed if condition is false.
}

----------------------------------------------

--> if-else if-else if-else :

- this is multi branch decision making statement.
- also if-else if ladder 

--> syntax :-


if (condition 1){
    // statement-1 will executed if condition is true.
}
else if(condition 2){
    // statement-2 will executed if condition is above condition is false.
}
else{
    // statement-3 will executed if all if and else if condition is false.
}

----------------------------------------------

--> Nested if :

- if condition-1  is true than condition-2 is evaluated. if it is true than statement-1 is executed.
- if condition-1 is false than statement-3 will be executed.

--> syntax :-


if (condition 1){
    if(condition-2){
        // statement - 1 
    }
    else{
        // statement - 2
    }
}
else{
    // statement - 3
}

----------------------------------------------

--> ? : (ternary operator) :

- similar as if-else.
- if condition is true than before colon (:) statement is executed. else condition false than after colon (:) statement is executed.

--> syntax :-


variable = expression-1 ? expression-2 : expression-3

----------------------------------------------

--> Switch case :

-  the switch statement  allows to execute one code block among many alternatives.
- it is similar as ladder if.

--> syntax :-


switch(expression)
{
    case constant-1 : 
        // statement-1
    break;

    case constant-2 : 
        // statement-2
    break;

    case constant-3 : 
        // statement-3
    break;

    default :
        // default statement will executed. 
}

----------------------------------------------