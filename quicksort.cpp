#include<bits/stdc++.h>

using namespace std;

void swap1(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[],int l,int h){
    int pivot = a[l];

    int j=h,i=l;

    while(i<j){

        do { i++;} while (a[i]<=pivot);
        do {j--;} while (a[j]>pivot);
        if(i<j)
            swap1(&a[i],&a[j]);
    }swap1(&a[l],&a[j]);
return j;
}
void quicksort(int a[],int l,int h){

    if(l<h){
        int  j =partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

int main(){

    int arr[]={4,5,3,7,8,2,9};
    quicksort(arr,0,6);
    for (int i=0;i<7;i++)
        cout<<arr[i]<<" ";
}