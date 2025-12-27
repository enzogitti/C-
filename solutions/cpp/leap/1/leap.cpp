#include "leap.h"
#include <string>

namespace leap {
    bool is_leap_year(int year){
        if (year%400==0) return true;
        if (year%100==0) return false;
        if (year%4==0) return true;
        else return false;
    }
    std::string leap_msg(int year){
        if(is_leap_year(year)){
            return std::to_string(year) + " was a leap year!";}
        else{
            return std::to_string(year) + " was not leap year.";
        }
        }
    }
