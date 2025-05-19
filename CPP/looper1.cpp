#include <iostream>
using namespace std;
int main(){
  int i=1;
  //we need to declare variable inorder to use it on the loop itself
  while(i<=10){
    //while loop only needs the condition;
    cout<<i<<endl;
    i++;
    //uness we update the value of i, we'll end up in endless loop.
  }
  return 0;
}
