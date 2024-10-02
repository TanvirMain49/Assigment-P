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

void oddEvenArray(int arr[], int n){

    int oddArr[n];  //initializing array that store odd number element in the array
    int oddCnt = 0; //oddCnt to keep track of index number in oddArray 

    int evenArr[n];  //initializing array that store even number element in the array
    int evenCnt = 0; //evenCnt to keep track of index number in EvenArray

    for(int i = 0; i<n; i++){  //loop that goes through each array

        if(arr[i] % 2 == 0){   //cheek if the element is even or not
            evenArr[evenCnt++] = arr[i];  //add even number element  to even Array and increment even count
        }
        else{
            oddArr[oddCnt++] = arr[i];  //add odd number element to odd array and increment odd count;
        }
    }

    cout<<"Even array : "<<endl;
    displayArray(evenArr, evenCnt); //display the even array

    cout<<"Odd array: "<<endl;
    displayArray(oddArr, oddCnt);  //display the odd array

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

    oddEvenArray(arr, n); //call the function oddEvenArray

    return 0;
}