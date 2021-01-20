/*
Problem description:
A left rotation operation on an array of size n shifts each of the array's elements 1 unit to the left.
Given an integer, d, rotate the array that many steps left and return the result.

Input
5 4
1 2 3 4 5

Output
5 1 2 3 4

*/

//Left Rotate an array

#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << "Enter the size of the array and number of left rotations to be done :";
    int N, D;
    cin >> N >> D;
    int arr[N];

    //Input array
    cout << "\nEnter the input elements in the array:";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    //D number of left rotations
    while(D--){
        int temp = arr[0];
        for(int j = 0; j < N-1; j++){
            arr[j] = arr[j+1];
        }
        arr[N-1] = temp;
    }

    //Output array
    cout << "\nOutput array is:";
    for(int k = 0; k < N; k++){
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
