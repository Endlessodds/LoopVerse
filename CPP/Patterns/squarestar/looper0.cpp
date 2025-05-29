#include <iostream>
using namespace std;
int main(){

int row,col;
cout<<"Enter the row";
cin>>row;
cout<<"Enter the column";
cin>>col;

for (int j=1;j<=row;j++){
 for(int i=1;i<=col;i++){
    cout<<"  *";   
 }
 cout<<endl;
} 
  return 0;
}

//A square n by n asterix print
