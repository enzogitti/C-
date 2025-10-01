#include <string>
#include <cmath>

double daily_rate(double hourly_rate) {
    const int billable_hours (8);
    return hourly_rate * billable_hours;
    
}

double apply_discount(double before_discount, double discount) {
    double dec (discount/100);
    double valor (before_discount * dec);
    return before_discount - valor;
}

int monthly_rate(double hourly_rate, double discount) {
    double total(hourly_rate*176);
    double desconto = apply_discount(total,discount);
    return (int)ceil(desconto);
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    double dia = daily_rate(hourly_rate);
    double des = apply_discount(dia,discount);
    double orcamento (budget/des);
    return (int)floor(orcamento);
}
