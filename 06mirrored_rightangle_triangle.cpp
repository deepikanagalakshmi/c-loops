#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"Enter no of rows: ";
 cin>>n;
 for(int i=1;i<=n;i++){
    
     for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
     for(int k=1;k<=i;k++){
         cout<<"*"; //--->dont put space after star(cout<<"*";) else it will become pyramid program
     }
     cout<<endl;
 }
    return 0;
}
