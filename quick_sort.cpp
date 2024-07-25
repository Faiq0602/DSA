#include <iostream>
using namespace std;

void swap (int &a , int &b){ // Swap function to swap the elements
    int temp = a;
    a = b;
    b = temp;
}

int partition (int arr[], int low , int high){ // Partitioning to arrange the elements accordingly
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low ; j < high; ++j){
        if (arr[j] <= pivot){
            ++i;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i + 1] , arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low , int high){ // Recursively partitoning and arranging elements to get a sorted array
    if(low < high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi + 1 , high);
    }
}
int main (){
int arr[] = {10 , 7 , 8 , 9 , 1 , 5};
int n = sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
cout<<"Sorted Array:";
for(int i = 0; i < n; i++){
    cout<<arr[i] << " ";
}

    return 0;
}


// Average case complexity : O(nlogn)
// Worst case complexity (On^2)
