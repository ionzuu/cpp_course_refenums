#include <iostream>
using namespace std;

main(){
    string name = "john";
    cout << "Value of variable is: " << name << " address of variable is : " << &name << endl;
    string &nr_6 = name;
    cout << "Value of variable is: " << name << " address of variable is : " << &nr_6 << endl;

    nr_6 = "Travis";
    cout << "Value of variable is: " << name << " address of variable is : " << &name << endl;
    cout << "Value of variable is: " << name << " address of variable is : " << &nr_6 << endl;

    // Ref. var. must be initialized when created
    // Ref var can't change associations / connections
    // Ref var must be the same as associated variable
}