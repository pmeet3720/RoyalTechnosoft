#include<iostream>
#include<string>
using namespace std;

class Student{
    // private: -- will be inaccessible outside the class
    //     int rollno, std;
    //     char name[50];

    // make DMs private and member functions as public to maintain data security
    private:
        int rollno, std;
        // char name[50];
        string name;

    public:
        void scanData(){
            cout << "\nEnter Roll No.: ";
            cin >> rollno;
            cout << "\nEnter std: ";
            cin >> std;

            cin.ignore(); // to clear buffer after scanning integer.
            cout << "\nEnter Name: ";
            // cin >> s.name;
            getline(cin, name);
        }
        void dispData(){
            cout << rollno << " " << std << " " << name << endl;
        }
};

int main(){
    Student s[3];

    for (int i = 0; i < 3;i++){
        s[i].scanData();
    }

    for (int i = 0; i < 3;i++){
        s[i].dispData();
    }

        // s1.scanData();
        // s2.scanData();
        // s3.scanData();

        // s1.dispData();
        // s2.dispData();
        // s3.dispData();

        return 0;
}