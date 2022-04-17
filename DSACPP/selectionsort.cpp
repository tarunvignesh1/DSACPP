#include <bits/stdc++.h>

using namespace std;

//selection sort

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[],int l){
    int ar[6];

    for(int i=0;i<l-1;i++){
        int min=i;
        for(int j=i+1;j<l;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
    swap(&arr[min],&arr[i]);
    }
}

int main(){

    int arr1[] = {1,4,6,2,8,3};

    selectionsort(arr1,6);
    for( int i=0;i<6;i++)
        cout<<arr1[i]<<" ";
    return 0;
    
}