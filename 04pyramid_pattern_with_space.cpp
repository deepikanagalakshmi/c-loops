#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"Enter no of rows: ";
  cin>>n;
  
 for(int i=1;i<=n;i++){
     
     //for space
     for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
      //for printing i no of stars in i th row
     for(int k=1;k<=i;k++){
         cout<<"* ";
     }
     
      cout<<endl;
 }
    return 0;
}
