#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a positive number to be reversed: ";
  cin num; 
  cout<<"Reversed: "
    while(num>0){
      cout<<num%10; //if num = 123, 123%10 is 3. 3 is printed
      num/=10; // 123/=10 is 12. ans num is updated
    // through the while loop, until num<0. it will iterate. 
    // this code is a trick to reverse. when using cout from the last digit to the first
    // so that is reversed.
    }
  return 0;
}
