#include<iostream>

using namespace std ;

int main(){

    int n ;
    cout << "Enter the no. :";
    cin >> n;

    int i ,j ;
    i=1;

    while(i<=n){
        int j= 1;
    
    while(j<=n){
        int ans = n-j+1;

        cout << ans << " "; 
        j++;

    }
    cout << endl;
    i++;
}
}