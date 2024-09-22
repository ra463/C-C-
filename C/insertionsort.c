#include <stdio.h>

void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void insertion(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp = a[i];
        j=i-1;
        while (j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
int main(){
    int a[] ={13,7,8,41,50,76};
    int n= sizeof(a)/sizeof(a[0]);
    printf("unsorted array - \n");
    print(a,n);
    insertion(a,n);
    printf("sorted array - \n");
    print(a,n);
}