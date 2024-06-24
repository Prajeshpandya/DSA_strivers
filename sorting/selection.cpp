#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i = 0; i< n-2 ; i++){
        int mini = i;
        for(int j = i; j<= n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        // int temp = arr[mini];
        // arr[mini] = arr[i];
        // arr[i]= temp;
        swap(arr[mini],arr[i]);

    } //n-2 because when first(0) index is placed and we do it untill for the second last index that means n-2 
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)  cin >> arr[i];
    selection_sort(arr,n);

    for(auto ls:arr){
        cout<< ls;
    }

    return 0;
}