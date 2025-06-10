#include<iostream>
using namespace std;

class Calc{
    private:
        int no1;
        int no2;

    public:
        Calc(int no1,int no2){
            this->no1 = no1;
            this->no2 = no2;
        }

        void dispData(){
            cout << "No1: " << no1 << " " << "No2: " << no2 << endl;
        }

        friend void swap(Calc &c); // if a global function wants to access the private properties of class then make it friend of class so that it can access it's private properties.
};

void swap(Calc &c){

    int temp = c.no1;
    c.no1 = c.no2; 
    c.no2 = temp;
}

int main(){
    Calc c(100, 200);
    c.dispData();

    swap(c);

    c.dispData();
    return 0;
}