#include<iostream>
using namespace std;
int partition(int ar[],int start,int end){
    int pivot=ar[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(ar[i]<=pivot){
            count++;
        }
    }
    int pivotindex=start+count;
    int temp=ar[start];
    ar[start]=ar[pivotindex];
    ar[pivotindex]=temp;
    int i=start,j=end;
    while(i<pivotindex && j>pivotindex){
        while(ar[i]<=pivot){
            i++;
        }
        while(ar[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivotIndex=partition(arr,start,end);
    quicksort(arr,start,pivotIndex-1);
    quicksort(arr,pivotIndex+1,end);
}
void Quicksort(int ary[],int n){
    quicksort(ary,0,n-1);
}
int main(){
    int a[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    Quicksort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}