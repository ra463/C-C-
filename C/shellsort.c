#include <stdio.h>

void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void shell(int a[],int n){
    for(int i=n/2;i>0;i /= 2){
        for(int j=i;j<n;j += 1){
            int temp=a[j];
            int k;
            for(k=j;k>=i && a[k-i]>temp;k -= i){
                a[k]=a[k-i];
            }
            a[k]=temp;
        }
    }
}
int main(){
    int a[] ={95,6,81,77,3,21,45};
    int n= sizeof(a)/sizeof(a[0]);
    printf("unsorted array - \n");
    print(a,n);
    shell(a,n);
    printf("sorted array - \n");
    print(a,n);
}