#include <iostream>
using namespace std;
int main() {
int a, b, c;
cout << "Enter two\npositive integers\n"; // line (a)
cin >> a >> b;
if ((a > b) && (b > 4)) cout << a - b << endl; // line (b)
else cout << b - a << endl;
c = a + b;
for (int n = (c / 2); n <= (c * 2); n += 3) cout << n; // line (c)
cout << endl;
cout << c + b / a << endl; // line (d)
cout << (c + b) % a << endl; // line (e)
return 0;
}