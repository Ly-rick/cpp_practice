#include <iostream>
using namespace std;

int main () { 
    int number;
    cout << " Enter your salary : ";
    cin >> number ;
    if (number < 1000) {
        cout << " your salary is low " << endl;
    } else if (number < 2000) {
        cout << " your salary is good " << endl;
    }else if (number < 3000) {
        cout << " your salary is very good " << endl;
    } else if (number <4000) {
        cout << " your salary is excellent " << endl;
    }
    return 0;
}