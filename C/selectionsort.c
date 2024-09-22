#include <stdio.h>

void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

void selection(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        temp=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[temp])
            {
                temp=j;
                int k= a[temp];
                a[temp]= a[i];
                a[i]=k;
            }
        }
    }
}
int main(){
    int a[] ={12,5,47,60,76};
    int n= sizeof(a)/sizeof(a[0]);
    printf("unsorted array - \n");
    print(a,n);
    selection(a,n);
    printf("sorted array - \n");
    print(a,n);
}