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

//deleting a value from array
void deleting(int arr[], int n, int idx){
    int newArray [n - 1]; //create a new array with one less element

    for(int i = 0; i<idx; i++){  
        newArray[i] = arr[i]; //copy element from the original array up to the index
    }

    //shifting element after deleting
    for(int i = idx; i<n-1; i++){
        newArray[i] = arr[i + 1];  //skip the element that is delete and shift rest element  
    }

    cout << "After inserting, the new array is: ";
    displayArray(newArray, n - 1);  //display the new array;

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

    int ind;  //initializing ind which index we want delate  
    cout<<"Enter the index number you want to delete: ";
    cin>>ind; //takeing element from user
    deleting(arr, n, ind); //call deleting function
   
   

    return 0;
}