#include <iostream>
using namespace std;
int main () {
   int age;
   cout << " Enter your age :";
   cin >> age;
   if (age < 0) {
      cout << " age can't be negative " << endl;
   } else if (age > 50) {
      cout<< " you are older not teeneger " << endl;
   } else if (age >17) {
      cout << " you are teeneger not older " << endl;
   } else if (age < 17) {
      cout << " you are a kid not teeneger " << endl;
   }
   cout << " you are " << age << " years old." << endl;
   return 0;
}