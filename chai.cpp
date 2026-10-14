// #include <iostream>
// using namespace std;
//  int main () {
//     int age;
//     cout<< " Enter your age : ";
//     cin >> age;
//     cout << " you are " << age << " year old " << endl;
//     return 0;
//  }

#include <iostream>
using namespace std;

int main () {
    int month;
    cout<< " choose month : ";
    cin >> month;
    cout << " This " << month << endl; 
    switch (month) {
        case 1 :
           cout << " jen " << endl;
           break;
        case 2 :
           cout << " feb " << endl;
           break;
        case 3 :
           cout << " march " << endl;
           break;
        case 4 : 
           cout << " april " << endl;
           break;
        case 5 :
           cout << " may " << endl;
           break;
        default:
           cout << " No month ah plork " << endl;
           break;
    }
    return 0;
}