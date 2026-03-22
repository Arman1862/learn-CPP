#include <iostream>

// typedef is for shorten the original syntax(actually long)
// typedef std::string text_t; 
//         ^original   ^identifier, why the indetifier use _t? because to mark that is a typedef

// or we can use "using" keyword to work better?
using text_t = std::string;
//   ^identifier ^original

int main() {
    text_t name = "Arman";

    std::cout << name;
}