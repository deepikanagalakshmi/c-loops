//inverted triangle with i stars
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter n :";
	cin >> n;
	for (int i = n; i > 0; i--) {
		
		//space n-i ----> 5-5=0 5-4=1  5-3=2  5-2=3  5-1= 4 
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		
		//star
		for (int k = 1; k <= i; k++) {
			cout<<"* ";
		}
		cout<<endl;
	}
}
