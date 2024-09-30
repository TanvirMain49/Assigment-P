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

    int cnt = 0; //initializing cnt to keep the track of the number of the elements

    for(int i = 0; i<n; i++){ //outer loop to iterate through  each element of the array
        for(int j = i+1; j<n; j++){ //inner loop to compare 
            if(arr[j] == arr[i]){ //cheek if the current element is equal to the following element
                cnt++; //increment the cout for each duplicate element found
            }
        }
    }

    cout<<"The number of duplicate: "<<cnt;  //display the count
    return 0;
}