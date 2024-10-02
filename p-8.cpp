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

int countFrequncy(int arr[], int n){

    for(int i = 0; i<n; i++){
        int cnt = 0;
        bool flag = false;
    for(int j = 1; j<n; j++){
            if(arr[i] == arr[j]){
               flag = true;
               break;
            }
        }

        if(!flag){
            for(int j = 0; j<n; j++){
                
            }
        }
    }

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
    return 0;
}