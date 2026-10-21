#include <iostream>
using namespace std;

int main(void){

int a;
 cout<<"Enter an integer\n";
 cin>>a;

 for(int i = 1; i < (a + 1); i++){
     
     
     for(int j = 0; j < i; j++){
          
        cout<<"* ";
 }

      cout<<endl;

}
return 0;
}