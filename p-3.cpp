#include<iostream>
using namespace std;

int main(){

    int n; //initializing number of element in the array
    cin>>n;  //taking user input for number of element in the array

    int arr[n]; //declaring an array with the user define size

    for(int i = 0; i<n; i++){   //Loop that go through the each index and sets a value from user

        cin>>arr[i];  //takeing input for each index value from the user
    }

    int sum = 0; //initializing sum to 0 to store the total sum of array
    int i = 0;  //initializing i to 0 for lopping through the array
    while(i < n){ //loop will continue still i is less then number of size(n)

        sum += arr[i]; //add the value at the current index to the sum
        i++;    //increment i to move the next element
    }
    cout<<"Total sum is: "<<sum; //print or display the total sum

    cout<<endl;  //starting a new line
    return 0;
}