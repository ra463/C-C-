#include <stdio.h>

void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
int quick(int a[],int start ,int end){
    int pivot=a[end];
    int i=(start-1);
    for(int j=start;j<=end-1;j++){
        if(a[j]<pivot){
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    int t = a[i+1];
    a[i+1]=a[end];
    a[end]=t;
    return(i+1);
}

void quicksort(int a[],int start,int end){
    if(start<end){
        int p=quick(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
    }
}
int main(){
    int a[] ={24,9,25,13,20,21};
    int n= sizeof(a)/sizeof(a[0]);
    printf("unsorted array - \n");
    print(a,n);
    quicksort(a,0,n-1);
    printf("sorted array - \n");
    print(a,n);
}