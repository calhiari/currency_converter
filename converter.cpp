#include "converter.h"

Converter::Converter(){
    // Initialize the class with recent data values for currencies.
    std::fstream file;
    std::string dataline;
    file.open("currencies.csv", std::ios::in);

    // reads the file until it reaches its end
    while(std::getline(file, dataline)){
        std::stringstream sstr(dataline);
        std::string currency_name, str_currency_val;

        std::getline(sstr, currency_name, ',');
        std::getline(sstr, str_currency_val, ',');

        // string to float conversion
        _pairs[currency_name] = atof(str_currency_val.c_str());
    }

    file.close();
}

float Converter::get(std::string currency_pair){
    return _pairs[currency_pair];
}

