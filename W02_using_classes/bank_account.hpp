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
    int accoutID;
    std::string name;
    float balance;
    
public:
    Accounts();
    void setAccount();
     
}; // End Accounts class

#endif /* bank_account_hpp */
