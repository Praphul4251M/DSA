#include <iostream>
using namespace std;

int main(void){

int a, num = 1; 

 cout<<"Enter an integer\n";
 cin>>a;



 for(int i = 0; i < a; i++){ // logic paper first!
     
     // spaces
    for(int j = 0; j<i; j++){

        cout<<" ";
    }
     
     
     //nums
     for(int j = 0; j < (a - i); j++){
         

         cout<<(i+1); 
          
        }

      cout<<endl;

}

  return 0;

}