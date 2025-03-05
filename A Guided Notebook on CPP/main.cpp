#include <iostream>

using std::cout;

int main() {
    // int data type from main function has a return type of 4 bytes in memory
    // int a = 10; is 4 bytes of memory
    // float b = 5.5; is 4 bytes of memory

    cout << "\n" << "Data Types/Size/Ranges (approximately)\n";
    cout << "A bool (BOOLEAN) type is a data type with a 1 byte size"
    << "and a range of true(or 1) and false(or 2)\n"
    << "A char (CHARACTER) is a type of data with 1 byte size"
    << "and has a range of -128 to 128 (signed)\n"
    << "An int (INTEGER) is a data type with 4 byte size and"
    << "can range from (+/-) 2,147,483,647\n"
    << "A long data type is 4-8 bytes in size and usually is"
    << "bigger than int, depending on the system\n"
    << "A float data type is 4 bytes in size and has exactly"
    << "7 decimal digits in precision (7.0192748)\n"
    << "A double data type is 8 bytes in size and has exactly"
    << "15 decimal digits in precision (7.021920192748748)\n"
    << "Auto daya type is basically a smart detection for typing\n\n";


    cout << "\nSigned/Unsigned is a way to affect how values are stored\n"
    << "Signed integers have storage size of 4 bytes and can range from "
    << "-2,147,483,648 to 2,147,483,647\n"
    << "Unsigned integers have a storage size of 4 bytes and can range from "
    << "0 to 4,294,967,295\n\n";
    // Signed ints can store negative and positive numbers while unsigned ints can only store
    // positive numbers but has double the range.
    // Float and Double (floating point types) are always signed and can store positive and negative by design
    // When you assign a negative signed integer to an unsigned variable, it wraps around due to integer "overflow"

    // signed int bignumber = 2147483647;
    // cout << bignumber + 1;
    //This line of code will print out -2147483648 because of integer overflow, causing it to wrap around


    cout << "\nArithmetic/Comparison Operators\n"
    << "+ is addition / - is subtraction\n"
    << "* is multiplication / / is division\n"
    << "% is the modulus (remainder)\n"
    << "(a) isEqual = (a == b) represents 'equal to'\n"
    << "(a) isNotEqual = (a != b) represents 'not equal to'\n"
    << "(a) isGreater = (a > b) represents 'greater than'\n"
    << "(a) isLess = (a < b) represents 'is less than'\n"
    << "A literal constant is a fixed value that has been inserted directly into the source code and cannot be changed\n"
    << "A variable's value can be set and changed through initialization and assignment\n"
    << "Objects and variables represent memory locations that hold values. These values can be fetched on demand\n\n";




    return 0;
}