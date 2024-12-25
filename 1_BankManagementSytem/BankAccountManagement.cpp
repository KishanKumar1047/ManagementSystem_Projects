#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount
{
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount (string ah , int an ,double b) : accountHolderName(ah) , accountNumber(an) ,balance(b) {}
};

int main()
{

    return 0;
}