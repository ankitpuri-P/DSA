#include<iostream>
using namespace std;
void merge(int arr_1[],int siz1,int arr_2[],int siz2,int output[]){
    int i=0,j=0,k=0;
    while(i<siz1 && j<siz2){
        if(arr_1[i]<arr_2[j]){
            output[k]=arr_1[i];
            i=i+1;
        }
        else{
            output[k]=arr_2[j];
            j=j+1;
        }
        k=k+1;
    }
        while(i<siz1){
            output[k]=arr_1[i];
            i=i+1;
            k=k+1;
        }
        while(j<siz2){
            output[k]=arr_1[j];
            j=j+1;
            k=k+1;
        }
}
void merge_sort(int ar[],int size){
    if(size<=1){
        return;
    }
    int mid=size/2;
    int arr1[500],arr2[500];
    int size1=mid;
    int size2=size-mid;
    for(int i=0;i<mid;i++){
        arr1[i]=ar[i];
    }
    int k=0;
    for(int i=mid+1;i<size;i++){
        arr2[k]=ar[i];
        k=k+1;
    }
    merge_sort(arr1,size1);
    merge_sort(arr2,size2);
    merge(arr1,size1,arr2,size2,ar);
}
int main(){
    int input[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>input[i];
    }
    merge_sort(input,size);
    for(int i=0;i<size;i++){
        cout<<input[i]<<'\t';
    }
    return 0;
}