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
    /*
    Sir, I have understand the concept of unique elements but I do not know how to implement it in code for example, if I have an array {1, 2, 2, 2, 3, 4} my unique elements would be {1, 3, 4} the problem I face is how to detect those unique elements and also how to reduce the size of the array or remove those 2 element. 
    */

    return 0;
}