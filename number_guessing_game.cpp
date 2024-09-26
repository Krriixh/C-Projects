#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int randNum = rand() % 10 + 1;
    int usernum;
    string name;
    char ask;
    cout << "Welcome to the Number Guesser!\nEnter your name: ";
    cin >> name;
    cout << "Hey " << name << "! Are you ready to play?(y/n): ";
    cin >> ask;
    if(ask != 'y'){
        cout << "Thanks for playing, come back again!\n";
        exit(0);
    }
    cout << "Okay here are the rules:\n1)You are to type number from 1-10\n2)It should be a numeric value (i.e 1,2,3 not one,two, three)\nEnter y to start: ";
    cin >> ask;
    if(ask !=  'y'){
        cout << "Thanks for playing, come back again!\n";
        exit(0);
    }
    cout << "Enter a number: ";
    cin >> usernum;
    do{
        cout << "Enter a number: ";
        cin >> usernum;
        if(usernum == randNum){
            cout << "Correct!\n";
        }else{
            cout << "Whoops, Incorrect!\n";
        }
        cout << "do you want to play again(enter n to quit))";
        cin >> ask;
    }while(ask != 'n');
    cout << "Thanks for playing!\n";
}
