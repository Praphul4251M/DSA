#include <iostream>
using namespace std;

int main(void){

int a, num; // since there was sequence irrespective of row -logic

 cout<<"Enter an integer\n";
 cin>>a;

 for(int i = 1; i <= a; i++){
     
     num = 1;
     
     for(int j = 0; j < i; j++){
         cout<<num<<" ";
         num++;
        }
        
      cout<<endl;

}

  return 0;

}