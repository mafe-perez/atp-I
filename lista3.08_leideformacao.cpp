#include <iostream>
using namespace std;

main () {
	int a, b, d;
	float c;
	
	a = -2;
	b = -29;
	c = 200;
	d = 20;
	
	while (true) {
		a = a + 2;
		b = b + 30;
		c = c / 2;
		d = d - 5;
		if (a == 10) break;
		cout << a << " " << b << " " << c << " " << d << " ";
	}
}
