#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int score = 0;
    string name;
    string askstart;
    int option;
    string endques;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Welcome to the Quiz Guesser Game " << name << "!\n";
    cout << "There will be 4 options to each question and you'll have to answer them by entering 1-4 in through your keyboard\nAre you ready?";
    cin >> askstart;
    if (askstart != "yes"){
        exit(0);
    }
    cout << "Question 1:\nWhat is the capital of India\n1)Punjab\n2)Delhi\n3)Kerala\n4)New York\n";
    cout << "Your answer";
    cin >> option;
    if(option == 2){
        cout << "Correct\n";
        score += 1;
    }else{
        cout <<"Uh oh\n";
    }
    cout << "Question 2:\nWhen was Shawn Mendes born\n1)2nd December\n2)17th November\n3)15th August\n4)8th August\n";
    cout << "Your answer";
    cin >> option;
    if(option == 4){
        cout << "Correct\n";
        score += 1;
    }else{
        cout <<"Uh oh\n";
    }
    cout << "Do you wanna know your score: ";
    cin >> endques;
    if (endques == "yes"){
        cout << "Your score is " << score << "\nThanks for playing the game!\n";
        exit(0);
    }else{
        cout << "Thanks for playing the game!\n";
    }

}
