#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel {
      static void read_units(std::ifstream &);
    
    class NumberWithUnits{
        double parameter=0;
        string type="";

        public:
        void setParameter(double s) {
            this->parameter = s;
        }
        // Getter
        double getParameter() {
            return this->parameter;
        }
        string gettype(){
            return this->type;
        }
        void settype(string s) {
            this->type = s;
        }
        // Functions: 
      
        ostream& operator<<(ostream& os);
        // Math operator
        
        NumberWithUnits operator+(const NumberWithUnits& other) const;
        NumberWithUnits operator-(const NumberWithUnits& other) const;


        NumberWithUnits& operator+=(NumberWithUnits& a);
        NumberWithUnits& operator-=(NumberWithUnits& a);
        
        friend bool operator ==(NumberWithUnits a,NumberWithUnits b);

        NumberWithUnits& operator++(NumberWithUnits& a);
        NumberWithUnits& operator--(NumberWithUnits& a);
         // Constructors:
        NumberWithUnits(double num , string s):parameter(num),type(s){
            cout<< getParameter() << " [" << gettype() << "] "<<endl;
        }
        ~NumberWithUnits(){};
    };

}
