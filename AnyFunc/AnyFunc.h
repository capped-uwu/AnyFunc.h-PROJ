// AnyFunc.h

#ifndef ANYFUNC_H
#define ANYFUNC_H

#include <iostream>
#include <string>

class AnyFunc {
public:
    static void test(const std::string& text);
};

// ŠÖ”‚ÌÀ‘•
inline void AnyFunc::test(const std::string& text) {
    std::cout << "Testing AnyFunc with text: " << text << std::endl;
}

#endif // ANYFUNC_H