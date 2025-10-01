#include "vehicle_purchase.h"
#include <string>


namespace vehicle_purchase {

bool needs_license(std::string kind) {
    if (kind=="car" || kind=="truck") {
        return true;}
    else {
        return false;}
}

std::string choose_vehicle(std::string option1, std::string option2) {
    if (option2 > option1) {
        return option1 + " is clearly the better choice.";
    }
    else if (option1 > option2) {
        return option2 + " is clearly the better choice.";
    }
    else {
        return option1 + " and " + option2 + " are equally good choices.";
    }
}

double calculate_resell_price(double original_price, double age) {
    double desconto;

    
    if (age < 3){
        desconto = 80;
    }
    else if (age>=3 && 10>age){
        desconto = 70;
    }
    else{
        desconto = 50;
    }
    return (desconto/100) * original_price;
    
}
}

  
