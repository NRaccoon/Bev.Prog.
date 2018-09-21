#include <iostream>
using namespace std;

int main()
{
int i = 2;
int b = 0;
while (i !=0) {
i <<= 1;
b++;
}

cout << "Lépések: " << b << '\n';
}
