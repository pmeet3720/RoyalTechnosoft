#include<iostream>

using namespace std;

int main(){
    int a[5],sum=0;

    // scanning array
    for (int i = 0; i < 5;i++){
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    for (int i = 0; i < 5;i++){
        cout << "a[" << i << "]: " << a[i] << endl;
        sum += a[i];
    }

    cout << "Array sum: " << sum;
    return 0;
}