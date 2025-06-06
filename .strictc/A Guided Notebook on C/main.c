#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {

    //Escape Sequences
    // \n = newline, \t = tab, \" \" = specific double quotations etc.
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n\n");

    // Void pointer // Used to find system Architecture
    if (sizeof(void*) == 4) {
        printf("The system architecture is 32 bit\n\n");
    } else if (sizeof(void*) == 8){
        printf("The system architecture is 64 bit\n\n");
    } else {
        printf("System architecture unknown\n\n");
    }

    // VARIABLES
    printf(
    "Initializing and Declaring Variables\n"
    "A variable is allocated space in memory to store a value, and the name is like a shortcut to access the value\n"
    "The first step is to declare the type of the variable:\n"
    "int x;          is the declaration of x\n"
    "x = 123;        is the initialization of x\n"
    "int x = 123;    is the declaration and initialization of x\n"
    "Use %% as a format specifier to specify he data type you want to insert\n\n"


    "Data Types:            Full Type:                      FS:  \n"
    "(short)                short integer                  %%hd  \n"
    "(int)                  integer                        %%d   \n"
    "(float)                floating point number          %%f   \n"
    "(double)               floating point number          %%lf  \n"
    "(char)                 single character               %%c   \n"
    "(char x[])             array of characters            %%s   \n"
    "(bool)                 true or false (0 or 1)         %%d \n\n"
    // void represents no data but its pointer can point to system architecture (32/64 bit)
    );

    // CONSTANTS
    printf("(const): a constant variable is a variable the cannot be changed after it's declared");


    printf("Data Type Sizes\n");
    // %zu works on all platforms
    printf("Short Size: %zu\n", sizeof(short));
    printf("Integer Size: %zu\n", sizeof(int));
    printf("Float Size: %zu\n", sizeof(float));
    printf("Double Size: %zu\n", sizeof(double));
    printf("Char Size: %zu\n", sizeof(char));
    printf("Character Array Size: %zu*\n", sizeof(char[5]));
    printf("Bool Size: %zu\n\n", sizeof(bool));

    printf("Data Type Ranges\n");
    // Use MIN MAX
    printf("Short Range: %hd/%hd \n", SHRT_MIN, SHRT_MAX);
    printf("Integer Range: %d/%d \n", INT_MIN, INT_MAX);
    // %e for scientific notation because of large pool of numbers
    printf("Float Range: %e/%e, and the precision is %d digits(decimals) \n\n", FLT_MIN, FLT_MAX, FLT_DIG);
    // printf("Double Range: %lf/%lf",);


    // RELATIONAL AND LOGICAL OPERATORS
    printf(
        "Arithmetic Operators (basic math)\n"
        "Addition: +\t"
        "Subtraction: -\t"
        "Multiplication: *\n"
        "Division: /\t"
        "Modulus: %% \n\n"

        "Relational operators are dependant on whether the statements are true or false\n"
        "Equal: ==\t"
        "Greater: >\t"
        "Greater/Equal: >=\n"
        "Not Equal: !=\t"
        "Less: <\t\t"
        "Less/Equal: <=\n\n"
        //printf("Equal: %d, or True", 1 == 1);

        "Logical Operations comparing conditions\n"
        "&&: Used as the AND condition, both statements are true\n"
        "||: Used as the OR condition, one or both statements are true\n\n"
    );

    // CONDITIONAL STATEMENTS
    // IF-ELSE

    //  if (x (relational operation) y) {
    //       printf("will print if true);
    // } else if (condition with relational operation) {
    //       printf("will print if true");
    // } else {
    //       printf("will print if none are true");
    //  };

    // SWITCH-CASE
    // a control structure of different code blocks based on the value of an expressino

    // switch (variable) {
    //     case 1:
    //      printf("something happened");
    //      break;
    //     case 2:
    //      printf("something happened");
    //      break;
    //     default:
    //      printf("Invalid choice");
    //  }
    //


    // USER INPUT
    printf(
        "scanf() is a function used to read inputs, and only reads the characters that match the format specifier\n\n"

        );


    // LOOPS
    printf(
            // FOR LOOP
           "for loop: is best used when you know how many times something should repeat\n"


           // WHILE LOOP
           "while loop: is best used when you dont know how many times something should repeat in advance\n"


           // DO-WHILE LOOP
           "do-while loop: similar to while, but always runs at least once\n"
           "This is a sample push, respond with message and commit if working properly"
           );


    fflush(stdin);
    getchar();
    return 0;
}