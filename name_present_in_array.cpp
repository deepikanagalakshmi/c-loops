#include <iostream>
#include <string>
using namespace std;

int main() {
  string check;
  string names[] = {"caly","john","james"};
  cout << "ENTER NAME TO FIND:\n";
  getline(cin,check);

  for(int i=0;i<3;i++){
    if (names[i] == check){
      cout<<"MATCH"<<endl;
      break;
    }
    
  }
}
