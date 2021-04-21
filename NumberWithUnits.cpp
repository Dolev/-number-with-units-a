#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel{
void NumberWithUnits::read_units(ifstream& file){
}

ostream& operator<<(ostream& output, const NumberWithUnits& other){
    return output;// should print output << other.parameter << " [" << other.type << "] " << endl;
}
void operator>>(istringstream&input, NumberWithUnits& a){

}

NumberWithUnits operator+(NumberWithUnits& a, NumberWithUnits& b){
   return NumberWithUnits {0, "km"};
}

NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& b){
    return *this;
}

NumberWithUnits operator-(NumberWithUnits& a, NumberWithUnits& b){
    return NumberWithUnits {0, "km"};
}

NumberWithUnits& NumberWithUnits::operator-=(NumberWithUnits& b){
    return b;
}

NumberWithUnits NumberWithUnits:: operator-(){
    return NumberWithUnits {0, "km"};
}

NumberWithUnits& operator*(NumberWithUnits& a, double x){
    return x*a;
}

NumberWithUnits& operator*(double x, NumberWithUnits& a){
    return a*x;
}

bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){
     return true;
}

bool operator!=(NumberWithUnits& a, NumberWithUnits& b){
     return true;
}

bool operator<(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}
bool operator>(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}
bool operator<=(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}
bool operator>=(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}

// Postfix operator
NumberWithUnits& NumberWithUnits::operator++(){
    return *this;
}
NumberWithUnits& NumberWithUnits::operator--(){
    return *this;
}

// Prefix operator
NumberWithUnits NumberWithUnits::operator++(int temp){
    NumberWithUnits a {0, "km"};
         return a;
}          
NumberWithUnits NumberWithUnits::operator--(int temp){
    NumberWithUnits a {0, "km"};
         return a;
}


}
