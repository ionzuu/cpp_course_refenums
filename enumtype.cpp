#include <iostream>
using namespace std;

enum dayOfWeek { M = 1, Tu, W, Thu, F, Sa, Su};
string getDay(dayOfWeek);
main(){
    dayOfWeek d = Thu;
    cout << d << endl;

    cout << dayOfWeek(0) << endl;
    cout << getDay(dayOfWeek(3));
}
string getDay(dayOfWeek d){
    switch(d){
        case M:
        return "Monday";
        break;
        case Tu:
        return "Tuesday";
        break;
        case W:
        return "Wednesday";
        break;
        case Thu:
        return "Thursday";
        break;
        case F:
        return "Friday";
        break;
        case Sa:
        return "Saturday";
        break;
        case Su:
        return "Sunday";
        break;
        default:
        cout << "You typed something wrong" << endl;
        break;
    }
    return " ";
}