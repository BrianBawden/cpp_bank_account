//
//  bank_account.cpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#include "bank_account.hpp"
#include <iostream>

Accounts::Accounts(){
    accoutID = 0;
    name = "null";
    balance = 0.0;
    std::cout << "account created.\n" << accoutID << std::endl << name << std::endl << balance << std::endl;
};

