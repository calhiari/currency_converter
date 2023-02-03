#pragma once
#include "iostream"
#include "string"
#include "map"

class Converter{
    public:
        Converter();
        float get(std::string);

    private:
        std::map <std::string, float> _pairs;
};