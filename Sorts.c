#include <stdio.h>
#include <stdlib.h>

void print_arr(int a[], int n){

    for (int i = 0; i <n; i++)printf("%d", a[i]);
    printf("\n");
    
}

void bubble(int a[], int n){

    for (int i = 0; i < n-1; i++) for (int j = 0; j < n-1; j++)
    if(a[j]> a[j+1]){int t = a[j]; a[j]=a[j+1]; a[j+1]=t;}
}

void insertion(int a[], int n){

    int i, j;
    for(i=1; i<n;i++){
    int key = a[i];
    j = i -1;
    while (j >= 0 && a[j] > key){
        a[j+1] = a[j]; 
        j--;
        a[j+1] = key;
         }
    }
}

int partition(int a[], int l, int r){
    int p = a[r], i =l-1, j, t;
    for(j = 1; j < r; j++){ 
    if(a[j] < p){
        i++; 
        t=a[i]; 
        a[i] = a[j]; 
        a[j] = t;}
    
    t=a[i+1]; a[i+1] = a[r]; a[r]=t;
    return i+1;
    }
}

void quick(int a[], int l, int r){
    if(l<r){
        int pi = partition(a,l,r);
        quick(a,l,pi-1);
        quick(a,pi+1,r);
    }

}

int main(){
    int arr[] = {9,3,7,1,8,2,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    int b[9];
    for(i=0; i<n; i++)b[i] = arr[i];
    printf("original: "); print_arr(arr,n);

    bubble(b,n); printf("bubble:  "); print_arr(b,n);
    for(i = 0; i < n; i++) b[i]=arr[i];

    insertion(b,n);printf("insert: "); print_arr(b,n);
    for(i = 0; i < n; i++) b[i]=arr[i];

    quick(b,0,n-1); printf("quick: "); print_arr(b,n);
    return 0;
}