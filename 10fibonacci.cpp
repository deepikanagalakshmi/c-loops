#include <iostream>
using namespace std;
int main()
{
	int n, f3;
	int f1 = 0;
	int f2 = 1;
	cout << "Enter n: ";
	cin >> n;

	if (n == 0) {
		cout << "0";
	}
	
	//cout << f1 << " " << f2<<" " ;
	for (int i = 1; i <= n; i++) {
		cout << f2 << " ";
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		
		
	}
}

