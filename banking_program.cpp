#include <iostream>
using namespace std;
void showbalance(double balance);
double withdraw(double balance);
double deposit();
int main(){
    double balance = 10000;
    int choice;
    int pin;
    cout << "**********************" << "\n";
    cout << "Welcome to KBI" << "\n"; 
    cout << "**********************" << "\n";
    cout << "Enter your pin: ";
    cin >> pin;
    if(pin != 1803){
        cout << "Incorrect pin!\n";
        exit(0);
    }
    cout << "**********************" << "\n";
    cout << "Welcome Krrish!\n";
    do{
        cout << "**********************" << "\n";
        cout << "1) Show Balance\n";
        cout << "2) Withdraw\n";
        cout << "3) Deposit\n";
        cout << "4) Exit\n";
        cout << "Enter: ";
        cin >> choice;
        switch(choice){
            case 1:
            showbalance(balance);
            break;
            case 2:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
            case 3:
            balance += deposit();
            showbalance(balance);
            break;
            case 4:
            cout << "Thanks for visiting!\n";
            break;
            default:
            cout << "Invalid Choice!\n";
            break;
        }
    }while(choice !=4);

}
double withdraw(double balance){
    double amount;
    cout << "Enter the amout you want withdrawed: ";
    cin >> amount;
    if(amount > balance){
        cout << "Insufficient Amount!\n";
        return 0;
    }else if(amount < 0){
        cout << "Invalid Amount\n";
        return 0;
    }else{
        return amount;
    }
}
void showbalance(double balance){
    cout << "Balance: " << balance << "\n";
}

double deposit(){
    double amount;
    cout << "Enter the amout you want deposited: ";
    cin >> amount;
    if(amount > 0){
    return amount;
    }else{
        cout << "Not Valid Amount!\n";
        return 0;
    }
}
