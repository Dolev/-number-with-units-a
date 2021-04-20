#include "NumberWithUnits.hpp"
using namespace ariel;
        ostream& operator<<(ostream& os) {
            return os << getParameter() << " [" << gettype() << "] "<<endl;
        }
        NumberWithUnits operator+(const NumberWithUnits& other) const {
            return NumberWithUnits(this->parameter+other.getParameter(),if(this->type==other.gettype()){return this->type}else{throw invalid_argument("CASE 1 : Wrong input: not the smae type.");});
        }
        NumberWithUnits operator-(const NumberWithUnits& other) const {
             return NumberWithUnits(this->parameter-other.getParameter(),if(this->type==other.gettype()){return this->type}else{throw invalid_argument("CASE 2 : Wrong input: not the smae type.");});
        }
        NumberWithUnits& operator++() {
         return NumberWithUnits(++this->parameter,this->type);
        }
        NumberWithUnits& operator--(NumberWithUnits& a) {
            a.setParamter()=a.getParamter()-1;
            return a;
        }
        NumberWithUnits& operator+=(NumberWithUnits& a) {
            return a;
        }
        NumberWithUnits& operator-=(NumberWithUnits& a) {
            return a;
        }
        bool operator ==(NumberWithUnits a, NumberWithUnits b){
            if(a.getParameter()==b.getParameter()){
                 return true;
            }
            else{
                 return false;
            }
        }