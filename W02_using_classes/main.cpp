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
        << "Account Menu: \n0. Quit Program \n1. Display Account Information \nYour choice: ";
        std::cin >> action;
        if(action == '0'){
            std::cout << "good bye."
            banking = false;
        }else if(action == '1'){
            brian.viewAccount();
        }else{
            std::cout << "invalid entry try again. ";
        };
    };
    return 0;
   
}
