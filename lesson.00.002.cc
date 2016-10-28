#include <iostream>

using namespace std;

int main(){
	cout << "Тази програма изчислява сума на три числa - А, B и C" << endl;
	int a, b, c;
	
	cout << "Input A: ";
	cin >> a;
	
	cout << "Input B: ";
	cin >> b;

	cout << "Input C: ";
	cin >> c;
	
	int suma = a + b + c;

	cout << a << " + " << b << " + " << c << " = " << suma << endl;
}

