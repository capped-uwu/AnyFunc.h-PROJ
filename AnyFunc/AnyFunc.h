// AnyFunc.h

#ifndef ANYFUNC_H
#define ANYFUNC_H

#include <iostream>
#include <string>
#include <algorithm>

class AnyFunc {
public:
    static void teststr(const std::string& text);
    static void testint(const int& intval);
    static void reverseString(const std::string& text);
    static void squareInt(const int& intval);
    static void checkEvenOdd(const int& intval);
    static void getStringLength(const std::string& text);
    static void toLowerCase(const std::string& text);
    static void toUpperCase(const std::string& text);
    static void concatenateStrings(const std::string& str1, const std::string& str2);
    static void absoluteValue(const int& intval);
    static void getSubstring(const std::string& text, int start, int length);
    static void calculateFactorial(int n);
};

// ä÷êîÇÃé¿ëï
inline void AnyFunc::teststr(const std::string& text) {
    std::cout << text << std::endl;
}

inline void AnyFunc::testint(const int& intval) {
    std::cout << intval << std::endl;
}

inline void AnyFunc::reverseString(const std::string& text) {
    std::string reversedText = text;
    std::reverse(reversedText.begin(), reversedText.end());
    std::cout << reversedText << std::endl;
}

inline void AnyFunc::squareInt(const int& intval) {
    std::cout << "Square of " << intval << " is: " << intval * intval << std::endl;
}

inline void AnyFunc::checkEvenOdd(const int& intval) {
    if (intval % 2 == 0) {
        std::cout << intval << " is even." << std::endl;
    }
    else {
        std::cout << intval << " is odd." << std::endl;
    }
}

inline void AnyFunc::getStringLength(const std::string& text) {
    std::cout << "Length of the string is: " << text.length() << std::endl;
}

inline void AnyFunc::toLowerCase(const std::string& text) {
    std::string lowerText = text;
    std::transform(lowerText.begin(), lowerText.end(), lowerText.begin(), ::tolower);
    std::cout << "Lowercase: " << lowerText << std::endl;
}

inline void AnyFunc::toUpperCase(const std::string& text) {
    std::string upperText = text;
    std::transform(upperText.begin(), upperText.end(), upperText.begin(), ::toupper);
    std::cout << "Uppercase: " << upperText << std::endl;
}

inline void AnyFunc::concatenateStrings(const std::string& str1, const std::string& str2) {
    std::cout << "Concatenated String: " << str1 + str2 << std::endl;
}

inline void AnyFunc::absoluteValue(const int& intval) {
    std::cout << "Absolute Value: " << std::abs(intval) << std::endl;
}

inline void AnyFunc::getSubstring(const std::string& text, int start, int length) {
    std::string substring = text.substr(start, length);
    std::cout << "Substring: " << substring << std::endl;
}

inline void AnyFunc::calculateFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
}

#endif // ANYFUNC_H
