#include <iostream>
using namespace std;

int main()
{
 int a;
 int b;

cout << "Adjon meg egy számot: ";
cin >> a;
cout << "Adjon meg egy másik számot is: ";
cin >> b;

a = a^b;
b = b^a;
a = a^b;

cout << "A számok felcserlés után: "<<a<<" és "<<b<< '\n';
return 0;
}
