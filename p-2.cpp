#include<iostream>
using namespace std;

int main(){

    int n; //initializing number of element in the array
    cin>>n;  //taking user input for number of element in the array

    int arr[n]; //declaring an array with the user define size

    for(int i = 0; i<n; i++){   //Loop that go through the each index and sets a value from user

        cin>>arr[i];  //takeing input for each index value from the user
    }

    for(int i = n - 1; i>=0; i--){   // loop for show or display the array in reverse order

        cout<<arr[i]<<" ";   //displaying each index value in the array

    } 
    cout<<endl;  //starting a new line
    return 0;
}