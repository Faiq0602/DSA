#include <iostream>
using namespace std;

int binarySearch(int arr[], int low , int high , int target){
    while (low <=  high){
        int mid = low + (high - low) / 2; // Finding mid 

        if (arr[mid] == target){ // If the middle element is the target
            return mid;
        }
        else if ( arr[mid] < target){ //If the middle elements value is less than target
            low = mid + 1;
        }
        else {
            high = mid - 1; //If the middle elements value is greater than target
        }
    }
    return -1; // No element found
}

int main(){
    int arr[] = {2,3,4,10,40}; //Declaring an array (The input can be dynamic if needed)
    int n = sizeof(arr)/sizeof(arr[0]); // Finding the size of the array
    int target = 10; // The element to find
    int result = binarySearch(arr,0,n-1,target);

    if (result != -1){
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
    return 0;
}
