#include<iostream>

using namespace std ;

int main () {

    int number ;
    int sum =0;

    cout << " Enter the no. :" ;
    cin >> number ;

// when the negative no. is enterd the loop will terminated.
// The sum wil display after loop termination .  

    while (number >= 0){

        sum += number ;

        cout << " Enter the no. :" ;
        cin >> number ;


    }

    cout << " The sum of no. is :" << sum ;
    return 0 ;

}