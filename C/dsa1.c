// Write a program to perform Bubble Sort in an Array.
// #include<stdio.h>    
//  void print(int a[], int n)   
//     {  
//     int i;  
//     for(i = 0; i < n; i++)    
//     {    
//         printf("%d ",a[i]);    
//     }        
//     }  
//  void bbl(int a[], int n)   
//  {  
//    int i, j, temp;  
//    for(i = 0; i < n; i++)    
//     {    
//       for(j = i+1; j < n; j++)    
//         {    
//             if(a[j] < a[i])    
//             {    
//                 temp = a[i];    
//                 a[i] = a[j];    
//                 a[j] = temp;     
//             }     
//         }     
//     }     
//  }  
// void main ()    
// {    
//     int i, j,temp;     
//     int a[5] = { 10, 35, 32, 13, 26};     
//     int n = sizeof(a)/sizeof(a[0]);   
//     printf("Unsorted array elements - \n");  
//     print(a, n);  
//     bbl(a, n);  
//     printf("\nSorted array elements - \n");    
//     print(a, n);  
// }    




// Write a program to perform Selection Sort in an Array.
// #include <stdio.h>  
  
// void slc(int arr[], int n)  
// {  
//     int i, j, small;  
      
//     for (i = 0; i < n-1; i++)      
//     {  
//         small = i;   
          
//         for (j = i+1; j < n; j++)  
//         if (arr[j] < arr[small])  
//             small = j;  
  
//     int temp = arr[small];  
//     arr[small] = arr[i];  
//     arr[i] = temp;  
//     }  
// }  
  
// void printArr(int a[], int n)   
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
// }  
  
// int main()  
// {  
//     int a[] = { 12, 31, 25, 8, 32, 17 };  
//     int n = sizeof(a) / sizeof(a[0]);  
//     printf("Unsorted array elements - \n");  
//     printArr(a, n);  
//     slc(a, n);  
//     printf("\nSorted array elements - \n");    
//     printArr(a, n);  
//     return 0;  
// }    




//Write a program to perform Insertion Sort in an Array.
// #include <stdio.h>  
  
// void insert(int a[], int n)  
// {  
//     int i, j, temp;  
//     for (i = 1; i < n; i++) {  
//         temp = a[i];  
//         j = i - 1;  
  
//         while(j>=0 && temp <= a[j])   
//         {    
//             a[j+1] = a[j];     
//             j = j-1;    
//         }    
//         a[j+1] = temp;    
//     }  
// }  
  
// void printArr(int a[], int n)   
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
// }  
  
// int main()  
// {  
//     int a[] = { 12, 31, 25, 8, 32, 17 };  
//     int n = sizeof(a) / sizeof(a[0]);  
//     printf("Unsorted array elements - \n");  
//     printArr(a, n);  
//     insert(a, n);  
//     printf("\nSorted array elements- \n");    
//     printArr(a, n);  
  
//     return 0;  
// }    



// Write a program to perform Merge Sort in an Array.
// #include <stdio.h>  
    
// void merge(int a[], int beg, int mid, int end)    
// {    
//     int i, j, k;  
//     int n1 = mid - beg + 1;    
//     int n2 = end - mid;    
      
//     int LeftArray[n1], RightArray[n2];   
      
     
//     for (int i = 0; i < n1; i++)    
//     LeftArray[i] = a[beg + i];    
//     for (int j = 0; j < n2; j++)    
//     RightArray[j] = a[mid + 1 + j];    
      
//     i = 0;  
//     j = 0;    
//     k = beg;    
      
//     while (i < n1 && j < n2)    
//     {    
//         if(LeftArray[i] <= RightArray[j])    
//         {    
//             a[k] = LeftArray[i];    
//             i++;    
//         }    
//         else    
//         {    
//             a[k] = RightArray[j];    
//             j++;    
//         }    
//         k++;    
//     }    
//     while (i<n1)    
//     {    
//         a[k] = LeftArray[i];    
//         i++;    
//         k++;    
//     }    
      
//     while (j<n2)    
//     {    
//         a[k] = RightArray[j];    
//         j++;    
//         k++;    
//     }    
// }    
  
// void mergeSort(int a[], int beg, int end)  
// {  
//     if (beg < end)   
//     {  
//         int mid = (beg + end) / 2;  
//         mergeSort(a, beg, mid);  
//         mergeSort(a, mid + 1, end);  
//         merge(a, beg, mid, end);  
//     }  
// }  
  

// void printArray(int a[], int n)  
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
//     printf("\n");  
// }  
  
// int main()  
// {  
//     int a[] = { 12, 31, 25, 8, 32, 17, 40, 42 };  
//     int n = sizeof(a) / sizeof(a[0]);  
//     printf("Unsorted array elements - \n");  
//     printArray(a, n);  
//     mergeSort(a, 0, n - 1);  
//     printf("Sorted array elements - \n");  
//     printArray(a, n);  
//     return 0;  
// }  


// Write a program to perform Quick Sort in an Array.
// #include <stdio.h>  
// int partition (int a[], int start, int end)  
// {  
//     int pivot = a[end]; // pivot element  
//     int i = (start - 1);  
  
//     for (int j = start; j <= end - 1; j++)  
//     {  
        
//         if (a[j] < pivot)  
//         {  
//             i++;  
//             int t = a[i];  
//             a[i] = a[j];  
//             a[j] = t;  
//         }  
//     }  
//     int t = a[i+1];  
//     a[i+1] = a[end];  
//     a[end] = t;  
//     return (i + 1);  
// }  
  

// void quick(int a[], int start, int end) 
// {  
//     if (start < end)  
//     {  
//         int p = partition(a, start, end); 
//         quick(a, start, p - 1);  
//         quick(a, p + 1, end);  
//     }  
// }  
  
  
// void printArr(int a[], int n)  
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
// }  
// int main()  
// {  
//     int a[] = { 24, 9, 29, 14, 19, 27 };  
//     int n = sizeof(a) / sizeof(a[0]);  
//     printf("Unsorted array elemets - \n");  
//     printArr(a, n);  
//     quick(a, 0, n - 1);  
//     printf("\nSorted array elements  - \n");    
//     printArr(a, n);  
      
//     return 0;  
// }  



// Write a program to perform Shell Sort in an Array.
// #include <stdio.h>      
// int shell(int a[], int n)  
// {    
//     for (int interval = n/2; interval > 0; interval /= 2)  
//     {  
//         for (int i = interval; i < n; i += 1)  
//         {  
            
//             int temp = a[i];  
//             int j;        
//             for (j = i; j >= interval && a[j - interval] > temp; j -= interval)  
//                 a[j] = a[j - interval];  
              
            
//             a[j] = temp;  
//         }  
//     }  
//     return 0;  
// }  
// void printArr(int a[], int n)  
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
// }    
// int main()  
// {  
//     int a[] = { 33, 31, 40, 8, 12, 17, 25, 42 };  
//     int n = sizeof(a) / sizeof(a[0]);  
//     printf("Unsorted array elements - \n");  
//     printArr(a, n);  
//     shell(a, n);  
//     printf("\nSorted array elements - \n");    
//     printArr(a, n);  
//     return 0;  
// }  