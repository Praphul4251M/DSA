#include <iostream>
using namespace std;

int main(void){

int a;
 cout<<"Enter an integer\n";
 cin>>a;

 for(int i = 1; i <= a; i++){
     
     
     for(int j = 1; j < (i+1); j++){
          
        cout<<i<<" ";
 }

      cout<<endl;

}
return 0;
}