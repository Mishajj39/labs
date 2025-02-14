#include <iostream>

int main(){
    unsigned short number = 0xABCD;
    unsigned short* n = &number;
    unsigned char* c = reinterpret_cast<unsigned char*>(n);

    std::cout << number << std::endl;
    std::cout << static_cast<int>(*c) << std::endl;
    std::cout << static_cast<int>(*(c + 1)) << std::endl;

    return 0;
}