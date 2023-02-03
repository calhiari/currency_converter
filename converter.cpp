#include "converter.h"

Converter::Converter(){
    _pairs["usdbrl"] = 5.5;
}

float Converter::get(std::string currency_pair){
    return _pairs[currency_pair];
}

