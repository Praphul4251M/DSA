#include <iostream>
using namespace std;

int main(void){

int a, num = 1; 

 cout<<"Enter an integer\n";
 cin>>a;

 for(int i = 1; i <= a; i++){
     
   
     
     for(int j = 0; j < i; j++){
         cout<<num<<" ";
          num++;
        }
        
      cout<<endl;

}

  return 0;

}