#include "AnyFunc.h"

int main() {
    AnyFunc::teststr("Testing Message!"); // string test
    AnyFunc::testint(3); // int test

    // Additional tests
    AnyFunc::reverseString("Hello"); // Reverse string
    AnyFunc::squareInt(5); // Square of an integer
    AnyFunc::checkEvenOdd(7); // Check if an integer is even or odd
    AnyFunc::getStringLength("Test123"); // Get the length of a string
    AnyFunc::toLowerCase("HELLO"); // Convert to lowercase
    AnyFunc::toUpperCase("hello"); // Convert to uppercase
    AnyFunc::concatenateStrings("Hello, ", "World!"); // Concatenate strings
    AnyFunc::absoluteValue(-8); // Absolute value of an integer
    AnyFunc::getSubstring("SubstringTest", 3, 5); // Get a substring
    AnyFunc::calculateFactorial(4); // Calculate factorial

    return 0;
}
