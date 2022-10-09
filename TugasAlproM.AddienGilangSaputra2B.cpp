#include<iostream>
using namespace std;
int main () {

 int a=120, b=200, temp;

  cout << "NILAI AWAL : A = " << a << " B = " << b << endl;
  a = a+b;
  b = a-b;
  a = a-b;
  cout << "NILAI SETELAH DITUKAR : A = " << a << " B = " << b << endl;

return 0;

}
