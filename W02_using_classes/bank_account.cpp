//
//  bank_account.cpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#include "bank_account.hpp"
#include <iostream>
#include <iomanip>

Accounts::Accounts(){
    accountId;
    name;
    balance;
};

void Accounts::setAccount(){
    accountId++;
    std::cout << "Enter account name: ";
    std::cin >> name;
    std::cout << "Enter account balance: ";
    std::cin >> balance;

};

void Accounts::viewAccount(){
  std::cout
    << "\nAccount ID: " << accountId
    << "\nAccount name: " << name
    << std::fixed << std::setprecision(2)
    << "\nAccount balance: $" << balance
    << std::endl;
};

void Accounts::accountDeposit(){
    float deposit;
    std::cout << "Enter deposit amount: \n";
    std::cin >> deposit;
    balance += deposit;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "new balance: $"<< balance << std::endl;
}

int Accounts::accountId = 0;

