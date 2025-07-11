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

            if(i == 0 || i == row-1 || j == 0 || j == col-1) sum += arr[i][j];
        }
    }

    cout << "Sum of boundary elements " << sum;
    
    return 0;
}