#include <iostream>
using namespace std;
int main()
{
	//n as total rows
	//i as current row
	//s as space
	//j as star printing
  
	int n, i, s, j;
	cout << "Enter no of rows in pyramid?" << endl;
	cin >> n;
  
	for (i = 1; i <= n; i++) {

	  //printing space
		for (s = 1; s <= n - i; s++) 
			cout <<" ";
		
		//printing symbol
		for (j = 1; j <= (2 * i) - 1; j++) 
			cout << "*";
		

		cout << endl;
	}
}
//total row = n
//for calculating space---------------> total_row - current_row ie., s=n-i
//for calculating star to be print----> 2*current_row - 1 ie., j=(2*i)-1 
//general formula for printing star---> 2n-1
