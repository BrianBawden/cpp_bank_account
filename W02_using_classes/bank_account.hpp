//
//  bank_account.hpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#ifndef bank_account_hpp
#define bank_account_hpp

#include <stdio.h>
#include <string>


class Accounts{
    
private:
    static int accountId;
    std::string name;
    float balance;
    
public:
    Accounts();
    void setAccount();
    void viewAccount();
    void accountDeposit();
    void accountWithdrawl();
     
}; // End Accounts class


#endif /* bank_account_hpp */
