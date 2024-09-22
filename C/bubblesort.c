#include <stdio.h>

void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void bubble(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int i,j,temp;
    int a[]={10,65,89,4,56,78};
    int n= sizeof(a)/sizeof(a[0]);
    printf("unsorted array - \n");
    print(a,n);
    bubble(a,n);
    printf("\n sorted array - \n");
    print(a,n);
    return 0;
}