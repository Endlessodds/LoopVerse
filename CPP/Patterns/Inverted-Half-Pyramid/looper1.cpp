#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout<<"Enter n dimension for n by n output"<<endl;
    cin>>n;
    
    
    j=1;
  while(n>=j){
    
    i=n;
    while(i>=j){
      
      cout<<"*  ";
      i--;
    }
    cout<<endl;
    j++;
  }
    return 0;
}
