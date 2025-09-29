#include <iostream>
class BankAccount {
private:
        //Attributes are private (Encapsulation)

int accountNumber;
double balance;

public:  //constructor
BankAccount(int accNum,double initial balance) {

accountNumber=accNum;
balance=initialBalance;
std::cout <<"Account" << accNum
<<"created with balance $"<< balance
<< std::endl;
}

//public method to deposit funds
void deposit(double amount) {

if(amount>0) {

balance +=amount;
std::cout<< "$"<< amount<<"deposited."<<std::endl;
}
}

//public method to view the balance 
double getBalance()const {

//This is the only way to read the private 'balance'
return balance;
}
};

int main() {
//create an object
BankAccount savings(1001,500.00);

savings.deposit(150.00); //Accessing the 
balance through the method

//Direct access to balance is 
prevented by 'private'
//saving .balance=10000;// this would cause a compile error

std::cout <<"Current Balance:$" <<
saving.getBalance() <<std::endl;
return 0;
}















