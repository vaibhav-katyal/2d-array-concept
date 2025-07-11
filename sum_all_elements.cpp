#include<iostream>

using namespace std;

int main(){

    int row, col;
    cin >> row >> col;

    int arr[row][col];

    int sum = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum of elements: ";
    cout << sum;
    
    return 0;
}