#include <stdio.h>

int main(void) {

    //Escape Sequences
    // \n = newline, \t = tab, \" \" = specific double quotations
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    // VARIABLES
    printf(
    "\nVariables/Statements/Expressions\n"
    "A variable is allocated space in memory to store a value, and the name is like a shortcut to access the value\n"
    "THe first step is to declare the type of the variable (int, float, )"
    "A literal constant is a fixed value that has been inserted directly into the source code and cannot be changed\n"
    "Objects and variables represent memory locations that hold values. These values can be fetched on demand\n"
    "Unary operators take one operand. Binary operators take two operands, often called left and right.\n"
    "Ternary operators take three operands. Null operators take zero operands.\n\n");

    printf(
        "\nData Types/Size/Ranges (approximately)\n"
        "A bool (BOOLEAN) type is a data type with a 1 byte size"
        "and a range of true(or 1) and false(or 2)\n"
        "A char (CHARACTER) is a type of data with 1 byte size"
        "and has a range of -128 to 128 (signed)\n"
        "An int (INTEGER) is a data type with 4 byte size and"
        "can range from (+/-) 2,147,483,647\n"
        "A long data type is 4-8 bytes in size and usually is"
        "bigger than int, depending on the system\n"
        "A float data type is 4 bytes in size and has exactly"
        "7 decimal digits in precision (7.0192748)\n"
        "A double data type is 8 bytes in size and has exactly"
        "15 decimal digits in precision (7.021920192748748)\n"
        "Auto daya type is basically a smart detection for typing\n\n");

    // int data type from main function has a return type of 4 bytes in memory
    // int a = 10; is 4 bytes of memory
    // float b = 5.5; is 4 bytes of memory

    printf(
        "\nSigned/Unsigned is a way to affect how values are stored\n"
        "Signed integers have storage size of 4 bytes and can range from "
        "-2,147,483,648 to 2,147,483,647\n"
        "Unsigned integers have a storage size of 4 bytes and can range from "
        "0 to 4,294,967,295\n\n");

    // Signed ints can store negative and positive numbers while unsigned ints can only store
    // positive numbers but has double the range.
    // Float and Double (floating point types) are always signed and can store positive and negative by design
    // When you assign a negative signed integer to an unsigned variable, it wraps around due to integer "overflow"

    // signed int bignumber = 2147483647;
    // printf(bignumber + 1);
    //This line of code will print out -2147483648 because of integer overflow, causing it to wrap around


    printf(
        "\nArithmetic/Comparison Operators\n"
        "+ is addition / - is subtraction\n"
        "* is multiplication / / is division\n"
        "% is the modulus (remainder)\n"
        "(a) isEqual = (a == b) represents 'equal to'\n"
        "(a) isNotEqual = (a != b) represents 'not equal to'\n"
        "(a) isGreater = (a > b) represents 'greater than'\n"
        "(a) isLess = (a < b) represents 'is less than'\n\n");


    printf(
        "\nOverview of Chapter 1\n"
        "A statement is a type of instruction that causes the program to perform some action\n"
        "A function is a collection of statements that execute sequentially\n"
        "Data is any information that can be moved, processed, or stored by a computer\n"
        "To create a variable, you sue a statement called definition statement, and when the program is ran it is\n"
        "instantiated, meaning it is assigned a memory address\n"
        "A variable is a named piece of memory that we can use to store values or pieces of data"
        "Copy assignment (=) can be used to assign an already created variable a value.\n\n");

    return 0;

}
