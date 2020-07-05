//triangle with alphabet pattern
//ASCII value of A is 65 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter n :";
	cin >> n;
	char c = 'A';
	for (int i = 1; i<=n; i++) {
		
		for (int j = 1; j <= n-i; j++) {
			cout << " ";
		}
		
		// alphabet pattern
		for (int k = 1; k <= (2*i)-1; k++) {
			cout<<(char)(64+i);
			//printf("% c", 64 + i);
		}
		cout<<endl;
	}
}

