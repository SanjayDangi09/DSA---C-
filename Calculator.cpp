#include<iostream>
using namespace std ;

int main(){

    int a,b;

    cout << "enter the value of a:";
    cin  >> a;

    cout << "enter the value of b :";
    cin  >> b;

    char op;
    cout << "enter the operation:";
    cin >> op;

    switch(op){

        case '+':
            cout<<"addtion is :"<<(a+b)<<endl;
            break;   

        case '-':

            cout<<"substraction is : "<<(a-b)<<endl;
            break;

        case '*' :
            cout<< "multiplication  is : "<<(a*b)<<endl;
            break;

        case '/':
            cout << "division is :"<<(a /b)<<endl;
            break;

        case '%':
             cout << "remainder is : " << (a%b) << endl;
             break;

       default :
              cout << "operation is invalid please try again :";          

    }
}