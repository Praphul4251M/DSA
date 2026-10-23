#include <iostream>
using namespace std;

int main(void) {

    int a;
     int num = 1;

    cout<<"Enter an integer\n";
    cin>>a;


    //top

    for(int i = 0;i < a;i++){

        // spaces: 
        for(int j = 0;j < a-i-1;j++){

            cout<<" ";

        }

        cout<<"*";

        if(i != 0){
            //spaces
            for(int j = 0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }
     

    //bottom
    for(int i = 0;i<(a-1);i++){



        //spaces
        for(int j = 0;j<(i+1);j++){
            cout<<" ";
        }

        cout<<"*";

        if(i != a-2){
            //spaces
             for(int j = 0;j<2*(a-i)-5;j++){
            cout<<" ";
        }
        cout<<"*";
        }

       
        cout<<endl;
    }
 
    return 0;
}                                                                 