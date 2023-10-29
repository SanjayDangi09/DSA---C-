#include <iostream>

using namespace std ;

int main(){

    int n ;
    cout << "Enter The Value : ";
    cin >> n ;

    int row = 1;

    while(row <= n)
    {
        int column = 1;

        while(column <= row)
        {
            cout << " " << row ;
            column = column + 1 ;
        }
        cout << endl;
        row++;

    }
}