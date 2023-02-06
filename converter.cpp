#include "converter.h"

Converter::Converter(){
    // Initialize the class with recent data values for currencies.
    std::fstream file;
    string dataline;
    file.open("currencies.csv", std::ios::in);

    // reads the file until it reaches its end
    while(std::getline(file, dataline)){
        std::stringstream sstr(dataline);
        string currency_name, str_currency_val;

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

vector <string> Converter::available_pairs(){
    // traversing the dictionary to get currency pair names
    map <string, float>::iterator it;
    for(it = _pairs.begin(); it != _pairs.end(); ++it){
        if (it->first.length() <= 6)
            _pair_names.push_back(it->first);
    }    

    return _pair_names;
}

double Converter::convert (string curr1, string curr2, double amount){
    // converting both strings to upper case
    string upper_curr1 = "", upper_curr2 = "";
    for (char c: curr1) upper_curr1.push_back(toupper(c));
    for (char c: curr2) upper_curr2.push_back(toupper(c));

    // checks wheter the pair exists and converts
    double result;
    if (_pairs[upper_curr1 + upper_curr2] != 0)
        result = amount * _pairs[upper_curr1 + upper_curr2];
    else if (_pairs[upper_curr2 + upper_curr1] != 0)
        result = amount / _pairs[upper_curr2 + upper_curr1];
    else{
        std::cout << "This pair is unavailable, try another! " << std::endl;
        return 0;
    }

    return result;
}