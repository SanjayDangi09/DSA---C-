#include<iostream>

using namespace std ;

// pivot means the smallest no.


int getpivot(int arr[] , int n){

    int start = 0 ;
    int end = n-1 ;;
    int mid = start + (end-start)/2;

    while ( end > start ){
        
        if (arr[mid]>= arr[0]){
            start = mid +1;
        }

        else{
            end= mid ;


        }
        mid = start +( end -start )/2;

    }
    return start ;

}

int main(){
    int arr[5] = { 2,5,6,1,7};

    cout << "pivot no. is : " << getpivot(arr, 5) << endl;
}