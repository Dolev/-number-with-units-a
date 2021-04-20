#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;

#include <string>
using namespace std;
 // atleast 20
TEST_CASE(" Good test! ") {
  CHECK(NumberWithUnits a{2, "km"} = "2[km]");
  CHECK(NumberWithUnits b{30, "km"} = "30[km]");
  CHECK(NumberWithUnits c{-2, "km"} = "-2[km]");
  CHECK(NumberWithUnits a{-1000, "km"} = "-1000[km]");

  //Compare
  CHECK(NumberWithUnits a{-1000, "km"} ==  NumberWithUnits b{-1000, "km"});
  CHECK(NumberWithUnits a{-1000, "km"} !=  NumberWithUnits b{-2000, "km"});
    
}
    TEST_CASE(" Bad test! ")
{
  //CHECK(NumberWithUnits w{x, "km"} == "x[km]");//Cant accept chars - wrong input
    
    
   
    /* Add more checks here */
}