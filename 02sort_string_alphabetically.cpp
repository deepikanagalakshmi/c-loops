//Input: face
//Output: acef

#include <iostream>
#include <string>
using namespace std;

string sort(char* str) {
	char temp;
	int len = strlen(str);
	cout << "Length of string: " << len << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {

			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
                            }
		}
        }
    return str;
}
int main()
{   
	char str[100];
	cout << "Enter a word: ";
	cin >> str;
	cout << "Original string---->" << str << endl;
	cout<<  "Sorted string------>"<<sort(str)<<endl;

	return 0;
}
