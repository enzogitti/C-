#include "darts.h"
#include <string>

namespace darts {

int score (double x, double y){
    double dist = x*x + y*y;

    if (dist<=1*1) return 10;
    else if (dist<=5*5) return 5;
    else if (dist<=10*10) return 1;
    else return 0; 
    
}

}  
