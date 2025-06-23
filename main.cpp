#include <iostream>
using namespace std;

int main() {
    int random;
    srand(time(0));
    int lower = 1, upper = 100;
    random = rand() % (upper - lower + 1);

    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I'm thinking of a number between 1 and 100!"<<endl;
    cout<<"Can you guess it?"<<endl;

    int myNum;

    cout<<"Please choose difficulty: "<<endl;
    cout<<"[Easy(1), Medium(2), Hard(3)]"<<endl;

    int difficulty;
    cin>>difficulty;

    if (difficulty == 1) {
        cout<<"You are playing on EASY mode! You have 10 tries!"<<endl;
        int tries =10;
        for (int i=1; i<=10; i++) {
            cout<<"Enter a number:"<<endl;
            cin>>myNum;
            if (myNum>random) {
                cout<<"Go lower!"<<endl;
            }else if (myNum<random) {
                cout<<"Go upper!"<<endl;
            }else {
                cout<<"You win!"<<endl;
            }
            tries--;
        }
        if (tries==0) {
            cout<<"You ran out of tries!Game Over!"<<endl;
        }
    }
    else if (difficulty==2) {
        cout<<"You are playing on Medium mode! You have 5 tries!"<<endl;
        int tries =5;
        for (int i=1; i<=5; i++) {
            cout<<"Enter a number:"<<endl;
            cin>>myNum;
            if (myNum>random) {
                cout<<"Go lower!"<<endl;
            }else if (myNum<random) {
                cout<<"Go upper!"<<endl;
            }else {
                cout<<"You win!"<<endl;
            }
            tries--;
        }
        if (tries==0) {
            cout<<"You ran out of tries!Game Over!"<<endl;
        }
    }
    else if (difficulty == 3) {
        cout<<"You are playing on Hard mode! You have 3 tries!"<<endl;
        int tries =3;
        for (int i=1; i<=3; i++) {
            cout<<"Enter a number:"<<endl;
            cin>>myNum;
            if (myNum>random) {
                cout<<"Go lower!"<<endl;
            }else if (myNum<random) {
                cout<<"Go upper!"<<endl;
            }else {
                cout<<"You win!"<<endl;
            }
            tries--;
        }
        if (tries==0) {
            cout<<"You ran out of tries!Game Over!"<<endl;
        }
    }
return 0;
}