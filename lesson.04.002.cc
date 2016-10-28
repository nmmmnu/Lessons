#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 1;
	
	while(a <= 10)
	{
		cout << setw(3) << a << " ";

		int b = 1;
		
		while(b <= 10)
		{
			const int r = a * b;
			cout << setw(3) << r << " ";
			b++;
		}
		
		cout << endl;
		
		a++;
	}
}

