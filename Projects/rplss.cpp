/*-------------------------------------------------------------------------------------
 *                            !!ROCK PAPER SCISSORS LIZARD SPOCK!!
 *-------------------------------------------------------------------------------------
 * Wyatt Owen
 * 20221111
 *
 * Play against the computer in a game of Rock, paper, scissors, lizard, Spock from the show "The Big Bang Theory"
 *
 * scissors X-->paper
 * scissors X--> lizard
 * paper X--> rock
 * paper X-->spock
 * rock X--> lizard
 * rock X--> scissors
 * lizard X--> spock
 * lizard X--> paper
 * spock X--> scissors
 * spock X--> rock
*/
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;
using std::string;
using std::vector;

int main () {

    int user;
    char cont;
    vector<string> rplss {"Rock!", "Paper!", "Scissors!", "Lizard!", "Spock!"};

    string count{"\n============================================================================\n\n     !ROCK!\n\n          !PAPER!\n\n               !SCISSORS!\n\n                    !LIZARD!\n\n                         !SPOCK!\n\n\n           !!SHOOT!!\n============================================================================\n\n"};
    string prompt{"\n\n\n\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n                  ROCK PAPER SCISSORS LIZARD SPOCK\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n\nEnter either Rock(1), Paper(2), Scissors(3), Lizard(4), or Spock(5)\n\nREADY!?"};

    cout<<prompt<<endl;
    cout<<"Your choice:  ";
    while (cin>>user) {
        int comp{rand() % 5 + 1};
        cout<<count<<endl;
        string player{rplss[user - 1]};
        string computer{rplss[comp - 1]};

        cout<<endl<<"You entered: "<<player<<endl<<"Computer entered: "<<computer<<"\n\n";
        switch(user){
            case 1:
                if (comp == 3 || comp == 4){
                    cout<<"Rock crushes "<<computer<<"\nYOU WIN!!\n";
                } else if (user == comp) {
                    cout<<"TIE... TRY AGAIN!";
                } else if (comp == 5){
                    cout<<"Spock disintegrates "<<player<<"\nsorry, you lose(:\n";
                } else if (comp == 2) {
                    cout<<"Paper covers "<<player<<"\nsorry, you lose(:\n";
                } else cout << "HMM...";
                break;
            case 2:
                if (comp == 1){
                    cout<<"Paper covers Rock""\nYOU WIN!!\n";
                } else if (comp == 5) {
                    cout<<"Paper disproves Spock!\nYOU WIN!\n";
                }  else if (user == comp) {
                    cout<<"TIE... TRY AGAIN!";
                } else if (comp == 3){
                    cout<<"Scissors cuts Paper!\nsorry, you lose(:\n";
                } else if (comp == 4) {
                    cout<<"Lizard eats Paper!\nsorry, you lose(:\n";
                } else cout << "HMM...";
                break;
            case 3:
                if (comp == 1){
                    cout<<"Rock crushes Scissors\nsorry, you lose(:\n";
                } else if (comp == 2) {
                    cout<<"Scissors cuts Paper\nYOU WIN!\n";
                }  else if (comp == 3) {
                    cout<<"TIE... TRY AGAIN!";
                } else if (comp == 4){
                    cout<<"Scissors beheads Lizard!\nYOU WIN!\n";
                } else if (comp == 5) {
                    cout<<"Spock smashes Scissors!\nsorry, you lose(:\n";
                } else cout << "HMM...";
                break;
            case 4:
                if (computer == "Rock!"){
                    cout<<"Rock smashes Lizard\nsorry, you lose(:\n";
                } else if (computer == "Paper!") {
                    cout<<"Lizard eats Paper!\nYOU WIN!\n";
                }  else if (computer == "Scissors!") {
                    cout<<"Scissors beheads Lizard!\nsorry, you lose(:\n";
                } else if (computer == "Lizard!"){
                    cout<<"TIE... TRY AGAIN!";
                } else if (computer == "Spock!") {
                    cout<<"Lizard poisons Spock!\nYOU WIN!\n";
                } else cout << "HMM...";
                break;
            case 5:
                if (computer == "Rock!"){
                    cout<<"Spock disintegrates Rock!\nYOU WIN!\n";
                } else if (computer == "Paper!") {
                    cout<<"Paper disproves Spock!\nsorry, you lose(:\n";
                }  else if (computer == "Scissors!") {
                    cout<<"Spock smashes Scissors!\nYOU WIN!\n";
                } else if (computer == "Lizard!") {
                    cout<<"Lizard poisons Spock!\nsorry, you lose(:\n";
                } else if (computer == "Spock!") {
                    cout<<"TIE... TRY AGAIN!\n";
                } else cout << "HMM...\n";
                break;
            default:
                cout<<"Invalid character... Operation Skynet now commencing";
                break;
        }
        cout<<"\nContinue? (enter y to continue or any other character to quit): ";
        cin>>cont;

        if (cont == 'y') {
            cout<<"\n\n(1)Rock\n(2)Paper\n(3)Scissors\n(4)Lizard\n(5)Spock\n\nYour choice:  ";
            continue;
        }
        else return -1;

    }

    return 0;
}