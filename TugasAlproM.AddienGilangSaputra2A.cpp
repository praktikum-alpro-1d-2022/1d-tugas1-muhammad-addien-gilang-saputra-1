#include<iostream>
using namespace std;
int main () {

 int a=120, b=200, temp;
 cout << "NILAI AWAL : A = " << a << " B = " << b << endl;

  temp = a;
  a = b;
  b = temp;
  cout << "NILAI SETELAH DI TUKAR : A = " << a << " B = " << b << endl;
  cout << endl;

return 0;

}
