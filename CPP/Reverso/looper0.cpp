#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a postitive number: "<<endl;
  cin>>num;
  cout<<"Reversed number: ";
  for(;num>0;){
    cout<<num%10;
    num/=10;
  }
  return 0;
}
