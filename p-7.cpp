#include<iostream>
using namespace std;
void displayArray(int arr[], int n){

    for(int i = 0; i<n; i++){   // loop for show or display the array in reverse order
        cout<<arr[i]<<" ";   //displaying each index value in the array
    } 
    cout<<endl;  //starting a new line
}

void sort(int arr[], int size){


    for(int i = 1; i<size; i++){

        for(int j = 0; j<size-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    displayArray(arr, size);
}

int main(){

    int n; //initializing number of element in the array
    cout<<"First array size: ";
    cin>>n;  //taking user input for number of element in the array

    int m;
    cout<<"Second array size: ";
    cin>>m;

    int arr1[n]; //declaring first array with the user define size

    int arr2[m]; //declaring second array with the user define size

    int mergeArray [n + m];  //declaring merge array. And the size is sum of 1st array size and 2nd array size

    for(int i = 0; i<n; i++){   //Loop that go through the first array each index and sets a value from user

        cin>>arr1[i];  //takeing input for each index value from the user
    }

    for(int i = 0; i<m; i++){   //Loop that go through the second array each index and sets a value from user

        cin>>arr2[i];  //takeing input for each index value from the user
    }

    cout<<"1st array: ";
    displayArray(arr1, n); //display the first array
    cout<<"2nd array: ";
    displayArray(arr2, m); //display the second array


    for(int i = 0; i<n; i++){
        mergeArray[i] = arr1[i];
    }
    for(int i = 0; i<m; i++){
        mergeArray[n+i] = arr2[i];
    }

    displayArray(mergeArray, m+n);

    sort(mergeArray, m+n);

    return 0;
}