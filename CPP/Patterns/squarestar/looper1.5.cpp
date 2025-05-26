//The concept is well explained in the python folder Patterns/squarestar/looper1.5.py
//check it out
#include <iostream>
using namespace std;

int main() 
{
  int count=0;
  while(count<25){
    cout<<"  *";
    if((count+1)%5==0){
      cout<<endl;}
    count+=1;  
    }
  
  return 0;
}
