#pragma once
#include "iostream"
#include "string"
#include "map"
#include "sstream"
#include "fstream"
#include "vector"

using std::vector, std::string, std::map;

class Converter{
    public:
        Converter();
        float get(string);
        vector <string> available_pairs();
        double convert(string, string, double);

    private:
        vector <string> _pair_names;
        map <string, float> _pairs;
};