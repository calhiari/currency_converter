#include "main.h"

void test3(){
    Converter conv;
    double result;

    result = conv.convert("usd", "usd", 10);

    std::cout << result << std::endl;
}

void test2(){
    Converter conv;
    vector <string> names = conv.available_pairs();

    for(string name: names){
        std::cout << name << ' ';
    }

    std::cout << std::endl;
}

void test1(){
    Converter conv;
    float nzdusd = conv.get("NZDUSD");
    printf("\nThis is the value of nzdusd %f\n", nzdusd);
}

void start_testing(){
    test1();
    test2();
    test3();
}

int main (){
    //start_testing();

    Converter conv;
    // shows available pairs
    std::cout << "These are the available currency pairs: " << std::endl;
    vector <string> pair_names = conv.available_pairs();
    for (string name: pair_names) std::cout << name << " ";
    std::cout << std::endl;   

    string currency1, currency2;
    double amount;
    std::cout << "What is the currency to be converted? ";
    std::cin >> currency1;
    std::cout << "What is the currency to be converted to? ";
    std::cin >> currency2; 
    std::cout << "What is the amount? ";
    std::cin >> amount;

    std::cout << "The result is " << conv.convert(currency1, currency2, amount) << " " << currency2;

    return 0;
}
