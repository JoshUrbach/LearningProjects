
#include <iostream>
using namespace std;

//sort elements in increasing order
void bubble_sort(int a[], int n){

    for(int times = 1; times <= n-1; times++){
        //repeated swapping
        for(int j = 0; j <= n -times; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }

}

int main() {
	// your code goes here

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);

    for(auto x : arr){
        cout << x << ","; 
    }
	return 0;
}
