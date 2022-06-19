//
//  main.cpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#include <iostream>
#include "bank_account.hpp"



int main() {
    // insert code here...
    
    Accounts brian;
    brian.setAccount();
    brian.viewAccount();
    
    bool banking = true;
    while(banking){
        char action;
        std::cout
        << "Account Menu: \n0. Quit Program \n1. Display Account Information \n2. Make a deposit \n3. Make a withdrawl \nYour choice: ";
        std::cin >> action;
        if(action == '0'){
            std::cout << "good bye.\n";
            banking = false;
        }else if(action == '1'){
            brian.viewAccount();
        }else if(action == '2'){
            brian.accountDeposit();
        }else if(action == '3'){
            brian.accountWithdrawl();
        }else{
            std::cout << "invalid entry try again. ";
        };
    };
    return 0;
   
}
