#include<iostream>
using namespace std;
void displayArray(int arr[], int n){

    for(int i = 0; i<n; i++){   // loop for show or display the array in reverse order
        cout<<arr[i]<<" ";   //displaying each index value in the array
    } 
    cout<<endl;  //starting a new line
}

int main(){

    int n; //initializing number of element in the array
    cin>>n;  //taking user input for number of element in the array

    int arr[n]; //declaring an array with the user define size

    for(int i = 0; i<n; i++){   //Loop that go through the each index and sets a value from user

        cin>>arr[i];  //takeing input for each index value from the user
    }

    displayArray(arr, n); //display the array

    int cpyArr[n]; //declaring an copy array

    for(int i = 0; i<n; i++){  //loop to copy value from the original array to new array
        cpyArr[i] = arr[i];   //copying value from original array to new array
    }

    cout<<"copy array : "<<endl;
    displayArray(cpyArr, n); // display the copy array 

    return 0;
}