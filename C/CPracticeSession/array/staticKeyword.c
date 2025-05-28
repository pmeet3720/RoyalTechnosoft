// #include <stdio.h>

// // Global static
// static int global_static_var = 10;

// // Global const
// const int global_const_var = 100;

// void example() {
//     static int s = 0;       // retains value across calls
//     const int c = 50;       // cannot be changed after this line

//     s++;  // valid
//     // c++; // ❌ error: assignment of read-only variable ‘c’

//     printf("static: %d, const: %d\n", s, c);
// }

// int main() {
//     example(); // static: 1, const: 50
//     example(); // static: 2, const: 50
//     example(); // static: 3, const: 50

//     return 0;
// }
#include <stdio.h>

// void set_static_var(int val) {
//     static int s = 0;
//     s = val;
//     printf("Updated static s = %d\n", s);
// }

// void show_static_var() {
//     static int s = 0;
//     printf("Static s = %d\n", s);
// }

int main() {
    // show_static_var();      // s = 0
    // set_static_var(10);     // s = 10
    // show_static_var();      // still prints s = 0 (different static!)

    int x = 5, y = 50,cnt=0;

    while(x<=y){
        x = y / x;
        cnt++;
        printf("%d", cnt);
    }
    
    return 0;
}

