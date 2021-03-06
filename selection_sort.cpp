#include <iostream>
using namespace std;

//Sort the elemetns in increasing order
void selection_sort(int a[], int n){

    //loop through the array moving pos by 1 to make sure we keep a sort array 
    for(int pos =0; pos <= n-2; pos++){

        int current = a[pos];
        int min_position = pos;

        //find minimum element
        for(int j = pos; j<n; j++){

            if(a[j] < a[min_position]){
                min_position = j; 
            }
        }
        
        //swap outside loop
        swap(a[min_position], a[pos]);
    }
}

int main() {
	
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(auto x: arr){
        cout << x << ",";
    }

	return 0;
}

