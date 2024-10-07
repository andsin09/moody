/*
Name: Andrew Sinha
Block: B1
Date: 10/7/2024
Program: Mood Switch Cases
Extra: While Loop it
*/


//getting ready
#include <iostream>
using namespace std;


//starting
int main(){
    int mood;
    bool bre = false;

//loop it
    while(!bre){
        cout << "What is your mood? Pick the corresponding number: " << endl;
        cout << "1. Joy" << endl;
        cout << "2. Sadness" << endl;
        cout << "3. Anger" << endl;
        cout << "4. Fear" << endl;
        cout << "5. Anxiety" << endl;
        cin >> mood;

//switching
        switch(mood){

            case 1:
                cout << "good for you. you're joyous. stay that way." << endl;
                cout << "0. if your mood hasn't changed." << endl;
                break;
            case 2:
                cout << "it's alright bro. it'll get better." << endl;
                cout << "0. if your mood hasn't changed." << endl;
                break;
            case 3:
                cout << "chill out there buster. its not that deep." << endl;
                cout << "0. if your mood hasn't change." << endl;
                break;
            case 4:
                cout << "nothing to be afraid of mister." << endl;
                cout << "0. if your mood hasn't change." << endl;
                break;
            case 5:
                cout << "relax. calm down. you're okay." << endl;
                cout << "0. if your mood hasn't change." << endl;
                break;
            default:
                cout << "nu uh not a choice bud" << endl;
                bre = true;
                break;
        
    }
    }
}
