#include<iostream>

using namespace std ;

int main () {

    int number ;
    int sum =0;

    cout << " Enter the no. :" ;
    cin >> number ;


    while (number >= 0){

        sum += number ;

        cout << " Enter the no. :" ;
        cin >> number ;

      
  

    }
    cout <<sum;
    return 0 ;

   
}