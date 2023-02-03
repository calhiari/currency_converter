#include "main.h"

void test1(){
    Converter conv;
    int usdbrl = conv.get("usdbrl");
    assert(usdbrl == 5.5);
}

void start_testing(){
    test1();
}

int main (){
    start_testing();

    std::cout << "passed all tests!" << std::endl;
    return 0;
}
