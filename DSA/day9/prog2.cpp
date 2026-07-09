#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){//traversing of array
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){

    char str[26];
    char ch ='A';
    for(int i=0; i<26; i++){
        str[i] = ch++;

    }
    //print
    cout<<"A to Z:";
    for(char ele : str){
        cout<< ele <<" ";
    }
    cout<<endl;
    // int arr[5] = {[1]=2, [4]=3};//valid in c
    int n;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = find_max(arr, n);
    cout<<"Maximum: "<< max<<endl;
    return 0;
}