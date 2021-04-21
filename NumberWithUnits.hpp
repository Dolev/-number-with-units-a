#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{
    class NumberWithUnits{
        double parameter;
        string type;
            

        public:
             // Constructors:
            NumberWithUnits(double num , string s):parameter(num),type(s){
                //cout<< parameter << " [" << type << "] "<<endl;
            };
            ~NumberWithUnits(){};
            // Functions: 
            static void read_units(ifstream& file);
            //Math Operator
            NumberWithUnits operator-();//unary
            NumberWithUnits& operator+(){return *this;};//unary
            friend NumberWithUnits operator+(NumberWithUnits& a,NumberWithUnits& b);
            friend NumberWithUnits operator-(NumberWithUnits& a,NumberWithUnits& b);

            
            NumberWithUnits& operator+=(const NumberWithUnits& b);
            NumberWithUnits& operator-=(NumberWithUnits& b);
            //multi - function 
            friend NumberWithUnits& operator*(NumberWithUnits& a, double x);    //like i watched in Kern Kalif videos
            friend NumberWithUnits& operator*(double x, NumberWithUnits& a);
            //Comparation functions -(bool functions)-
            friend bool operator>(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator<(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator>=(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator<=(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator!=(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);

            NumberWithUnits& operator++();
            NumberWithUnits operator++(int temp);
            NumberWithUnits& operator--();
            NumberWithUnits operator--(int temp);

            friend ostream& operator<<(ostream& output, const NumberWithUnits& other);

            friend void operator>>(istringstream& input, NumberWithUnits& a);

    };
}
