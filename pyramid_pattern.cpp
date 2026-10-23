#include <iostream>
using namespace std;

int main(void) {
    int a;

    cout<<"Enter an integer\n";
    cin>>a;

    // for(int i = 0; i < a; i++){

    //     // leading spaces (2 per missing level so the digits line up)
    //     for(int j = 1; j < (a - i); j++){
    //         cout<<"  ";
    //     }

    //     // numbers: count up to the peak, then back down
    //     for(int j = 0; j < (2 * i + 1); j++){

    //         int num = (j <= i) ? (j + 1) : (2 * i + 1 - j);// main logic
    //         cout<<num<< " ";

    //     }

    //     cout<<endl;
    // }

    for(int i = 0; i<a; i++){
        // spaces : a-i-1
        for(int j = 0; j<a-i-1;j++){
            cout<<" ";
        }

        //nums1: i+1

        for(int j = 1; j<=i+1; j++){
            cout<<j;
        }

        //nums2
        for(int j = i;j>0;j--){
            cout<<j;
        }

        cout<<endl;

    }

    return 0;
}