#include <iostream>

void getCountOfLetters(const char* str, unsigned& upper, unsigned& lower) {

    if(!str)
        return;

    if(*str == '\0')
        return;

    if(*str >= 'A' && *str <= 'Z')
        upper++;

    if(*str >= 'a' && *str <= 'z')
        lower++;

    return getCountOfLetters(++str,upper,lower);
}

int main() {

    unsigned lower = 0;
    unsigned upper = 0;

    const char* str = "eoPOr";
    getCountOfLetters(str, upper, lower);
    std::cout<< upper << " " << lower;
}