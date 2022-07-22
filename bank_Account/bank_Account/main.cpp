//
//  main.cpp
//  bank_Account
//
//  Created by Apple on 22.07.22.
//
#include <iostream>
using namespace std;
class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder,string address,int age )
    {
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        account_number=rand()/10000;
        std::cout << "account number"<<account_number;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    BankAccount b("alfghat","Chemnitz",23);
    BankAccount a("alfghat","Chemnitz",23);
    std::cout << "Hello, World!\n";
    return 0;
}
