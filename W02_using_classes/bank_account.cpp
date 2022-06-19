//
//  bank_account.cpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#include "bank_account.hpp"
#include <iostream>

Accounts::Accounts(){
    accoutID;
    name;
    balance;

};

void Accounts::setAccount(){
    std::cout << "Enter account name: ";
    std::cin >> name;
    std::cout << "Enter account balance: ";
    std::cin >> balance;
    std::cout << name << ": " << balance;
    
};

