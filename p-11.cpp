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

// inserting value in array
void inserting(int arr[], int n, int value, int ind){

    //newArray 
    int newArray[n+1];

    // Copy elements up to the index
    for(int i = 0; i<ind; i++){
        newArray[i] = arr[i];
    }

     // Insert the new value at the specified index
    newArray[ind] = value;

    for(int i = ind; i<n; i++){
        newArray[i+1] = arr[i];
    }

    // Copy the remaining elements
    cout << "After inserting, the new array is: ";
    displayArray(newArray, n + 1);

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

    int value;    //initializing value to add the element in the array
    cout<<"Enter the value: ";
    cin>>value; // taking from user

    int ind;  //initializing ind which index we want insert  
    cout<<"Enter the index number you want to insert: ";
    cin>>ind; //takeing element from user
    inserting(arr, n, value, ind); //call inserting function
   
   

    return 0;
}