#include <iostream>
using namespace std;

int main(void){

int a, num = 1; // since there was sequence irrespective of row -logic

 cout<<"Enter an integer\n";
 cin>>a;

 for(int i = 0; i < a; i++){
     
     
     for(int j = 0; j < a; j++){
          
        cout<<num<<" ";
        num++;
 }

      cout<<endl;

}

  return 0;

}