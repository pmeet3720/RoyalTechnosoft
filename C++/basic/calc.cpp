#include<iostream>

using namespace std;

int main(){
    int no1, no2,ans=0;

    // << Insertion operator (left shift operator)
    // >> Extertion operator (right shift operator)

    //user input
    // cout << "Enter No1: ";
    // cin >> no1;

    // cout << "Enter No2: ";
    // cin >> no2;

    cout << "Enter two nos: ";
    cin >> no1 >> no2;

    ans = no1 + no2;
    cout << "No1: " << no1 << ", "<< "No2: " << no2 <<", "<< "Add: " << ans << endl;

    ans = no1 - no2;
    cout << "No1: " << no1 << ", "<< "No2: " << no2 <<", "<< "Sub: " << ans << endl;

    ans = no1 * no2;
    cout << "No1: " << no1 << ", "<< "No2: " << no2 <<", "<< "MUl: " << ans << endl;

    ans = no1 / no2;
    cout << "No1: " << no1 << ", "<< "No2: " << no2 <<", "<< "DIV: " << ans << endl;
    return 0;
}