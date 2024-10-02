#include <iostream>
using namespace std;
void displayArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {                          // loop for show or display the array in reverse order
        cout << arr[i] << " "; // displaying each index value in the array
    }
    cout << endl; // starting a new line
}

void findTheMaxMin(int arr[], int n){

    int maxEl = arr[0];  //initializing max to the first element in the array 
    int minEl = arr[0]; //initializing min to the first element in the array 

    for(int i = 0; i<n; i++){ // traversing the whole array

        if(arr[i] > maxEl){  //cheek if current element is greater then maxEl

            maxEl = arr[i];  //update max
        }
        if(arr[i] < minEl){  // cheek if current element id smaller then minEl

            minEl = arr[i]; // update min
        }
    }

    cout<<"Max element in array: "<<maxEl<<endl;  //display the max element in array
    cout<<"Min element in array: "<<minEl<<endl;  //display the min element in array

}

int main()
{

    int n;    // initializing number of element in the array
    cin >> n; // taking user input for number of element in the array

    int arr[n]; // declaring an array with the user define size

    for (int i = 0; i < n; i++)
    { // Loop that go through the each index and sets a value from user

        cin >> arr[i]; // takeing input for each index value from the user
    }

    displayArray(arr, n); // display the array
    findTheMaxMin(arr, n); 

    return 0;
}