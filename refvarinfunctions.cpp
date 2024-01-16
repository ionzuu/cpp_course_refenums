#include <iostream>
using namespace std;

int & swap (int &, int &);

main(){
    int a = 10;
    int b = 20;

    int &c = swap(a, b);

    int &ref = a;

    ref = 50;

    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

}

int & swap(int &x, int &y){
    int t;
    t = x; // t = 10
    x = y; // a = 20
    y = t; // b = t = 10

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return x;
}