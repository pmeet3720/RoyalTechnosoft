/*
--------- Type of loop ------------
1. Entry controller      2. Exit controller
for and while            do..while
*/ 

#include<iostream>

using namespace std;

int main(){

    int sum = 0;
    //for loop
    for (int i = 1; i <= 5;i++){
        cout << "N: " << i << endl;
    }

    cout << "-----------------------------" << endl;
    // while loop
    int i = 5;
    while (i > 0){

        cout << "N: " << i << endl;
        i--;
    }

    cout << "-----------------------------" << endl;
    // do...while loop

    int j = 1;
    do{

        sum += j;
        j++;

    } while (j <= 5);
    cout << "Sum of 1 to 5: " << sum << endl;
    return 0;
}