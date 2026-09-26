//
// Created by Danny Lee on 2026/9/26.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

template <typename T>

void QuickSort3ways(T arr[],int n) {
   srand(time(NULL));
   __quicksort3ways(arr,0,n-1);
}

template <typename T>
void __quicksort3ways(T arr[],int l,int r) {
   if( r - l <= 15 ){
      insertionSort(arr,l,r);
   }

   //partition
   swap(arr[l],arr[rand()%(r-l+1)+l]);
   T v=arr[l];

   int lt=l;//arr[l+1...lt]<v
   int gt=r+1;//arr[gt...r]>v
   int i=l+1;//arr[lt+1..i)=v i正在考察的元素
   while (i < gt) {
      if (arr[i] < v) {
         swap(arr[i], arr[lt + 1]);
         lt ++;
         i ++;
      } else if (arr[i] > v) {
         swap(arr[i], arr[gt - 1]);
         gt --;
      } else { // arr[i] == v
         i ++;
      }
   }
   swap(arr[l], arr[lt]);

   __quickSort3Ways(arr, l, lt - 1);
   __quickSort3Ways(arr, gt, r);
}

template <typename T>
void quickSort3Ways(T arr[], int n) {
   srand(time(NULL));
   __quickSort3Ways(arr, 0, n - 1);

}
