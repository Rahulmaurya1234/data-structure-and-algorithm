// encapsulation is the process of wrappping data and methods into a single unit
// it is one of the four fundamental OOP concepts
// it is used to restrict access to some components of an object and prevent the accidental modification of data
// it is achieved using access specifiers: private, protected, public   

#include<iostream>
#include<string>
using namespace std;    

class Account{
    private:
    double balance;
     
    
     public:
    
     // properties & attributes
     string accHolderName;
     string accNumber;
     string accType;
     
    
     // methods & member functions
    
     void changeAccType(string newType){
          accType = newType;
     }
    
     // setter method for balance
     void setBalance(double b){
          balance = b;
     }
     // getter method for balance
     double getBalance(){
          return balance;
     }
};
int main(){
     // create object of class Account 
     Account a1;
     a1.accHolderName = "rahul";
     a1.accNumber = "1234567890";
     a1.accType = "savings";
     a1.setBalance(50000);
     cout << "Account Holder Name: " << a1.accHolderName << endl;
     cout << "Account Number: " << a1.accNumber << endl;
     cout << "Account Type: " << a1.accType << endl;
     cout << "Account Balance: " << a1.getBalance()<< endl;
    
     return 0;
}