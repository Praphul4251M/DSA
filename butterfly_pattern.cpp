#include <iostream>
using namespace std;

int main(void) {

    int a;
   

    cout<<"Enter an integer\n";
    cin>>a;

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";


    //left upper wing
    for(int i = 0;i<a;i++){

        //star
        for(int j = 0;j<(i+1);j++){
            cout<<"*";
        }
        
        //spaces
        for(int j = 0;j<(a-1-i);j++){
            cout<<" ";
        }
        
        //right upper wing

        //spaces
        for(int j = 0;j<(a-1-i);j++){
            cout<<" ";
        }
        
        
        //star
        for(int j = 0;j<(i+1);j++){
            cout<<"*";
        }

        cout<<endl;
    }


//outer loop
    for(int i = 0;i<a;i++){


        //left lower wing

        //star
        for(int j = 0;j<(a-i);j++){
            cout<<"*";
        }


        //spaces
        for(int j = 0;j<(i);j++){
            cout<<" ";
        }
        

        //right lower wing
        //spaces
        for(int j = 0;j<(i);j++){
            cout<<" ";
        }


        //star
        for(int j = 0;j<(a-i);j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}                                                                 