//find a maximum and minimum value of array...take input from user
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    int n = 5; 

    cout << "Enter 5 elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        if(arr[i] < minVal){
            minVal = arr[i]; 
        }
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}