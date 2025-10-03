double interest_rate(double balance) {
    if (balance<0) return 3.213;
    else if (balance<1000) return 0.5;
    else if (balance<5000) return 1.621;
    else return 2.475;
}

double yearly_interest(double balance) {
    double rate = interest_rate(balance);
    
    return balance * (rate/100);
     
}

double annual_balance_update(double balance) {
    double ann = yearly_interest(balance);

    return ann + balance;
    
}

int years_until_desired_balance(double balance, double target_balance) {
    int cont = 0;

    for (; balance < target_balance; cont++){
        balance = annual_balance_update(balance);
    }
    return cont;
}
