#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout << "Enter the Day no.:";
    cin >> n;

    while(n<=n){

        switch(n){

            case 1 : 
                
                cout << "monday";
                    break;

            case 2 :
                cout << "tuesday";
                    break;

            case 3 :  
                cout << "wednesday ";
                    break;

            case 4 :
                cout << "thursday ";
                    break;

            case 5 :
                cout << "friday " ;
                    break;

            case 6 : 
                cout << "saturday " ;
                     break;

            default :
                cout << "sunday " ;
                    break;

        }
         exit(n);
       
    }
    
}