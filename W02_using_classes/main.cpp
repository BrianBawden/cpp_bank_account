//
//  main.cpp
//  W02_using_classes
//
//  Created by Brian Bawden on 6/17/22.
//

#include <iostream>

class Accounts{
    
private:
    int accoutID;
    std::string name;
    float balance;
    
public:
    Accounts(){
        accoutID = 0;
        name = "null";
        balance = 0.0;
        std::cout << "account created.\n";
    };//end accounts constructor
     
}; // End Accounts class

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    Accounts brian;
    return 0;
   
}
