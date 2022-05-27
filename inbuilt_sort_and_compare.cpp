
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main() {

    int arr[] = {10, 9, 8, 6, 5,4,3,2,1,16,11,8};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr + n);//sorts array, acscending order

    //sort(arr, arr+n, greater<int>()); //sorts in reverse order
    //sort(arr, arr + n, compare); //compare is not a function call, this will also reverse the array using comparators, passing function as parameter to another function 
    //reverse(arr, arr + n); //reverses sorted array

    //print output
    for(int x : arr){
        cout << x << ","; 
    }

	return 0;
}
