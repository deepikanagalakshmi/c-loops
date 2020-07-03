#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"Enter no of rows: ";
 cin>>n;
 for(int i=1;i<=n;i++){
    
    //just cut out the space loop
    // for(int j=1;j<=n-i;j++){
    //    cout<<" ";
    // }
    
     for(int k=1;k<=i;k++){
         cout<<"*";
     }
     cout<<endl;
 }
    return 0;
}
