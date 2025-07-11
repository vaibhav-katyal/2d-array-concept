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
        }
    }

    int max_sum = 0;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << "Max sum: " << max_sum;
    
    return 0;
}