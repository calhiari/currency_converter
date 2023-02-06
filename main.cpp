#include "main.h"

void test1(){
    Converter conv;
    float nzdusd = conv.get("NZDUSD");
    printf("\nThis is the value of nzdusd %f\n", nzdusd);
    assert(nzdusd == 0.6295);
}

void start_testing(){
    test1();
}

int main (){
    start_testing();

    std::cout << "passed all tests!" << std::endl;
    return 0;
}
