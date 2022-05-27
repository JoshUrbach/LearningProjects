
#include <iostream>
#include <vector>

using namespace std;

//counts a frequency of values in array, sets an array equal in size to largest element, uses a dynamic array or vector to hold frequencies, then adds each in order back to original array 
void counting_sort(int a[], int n){
    //Largest Element
    int largest = -1;

    for(int i = 0; i <n; i++){
        largest = max(largest, a[i]);
    }

    //create a count array 
    vector<int> freq(largest+1, 0);

    //update frequency array... O(n)
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    } 

    //put freq array elements back into original array

    int j = 0;
    for(int i = 0; i <= largest; i++){
        
        //if the index has a value over 0 we add the index to the array and subtract 1 until the frequency in that index is 0
        while(freq[i] > 0){ //worst case this runs O(N + Range)..linear complexity
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main() {
	
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

	return 0;
}
