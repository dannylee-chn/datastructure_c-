//
// Created by Danny Lee on 2026/9/22.
//
#include <iostream>
#include"student.h"

using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex=i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex=j;
            swap(arr[j], arr[minIndex]);
        }
    }
}
int main() {
    int a[10]={120,2,3,30,5,6,7,81,9,0};
    selectionSort(a,10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    Student d[4]={{"D",90},{"A",45},{"B",80},{"C",60}};
    selectionSort(d,4);
    for (int i = 0; i < 10; i++) {
        cout << d[i] << " ";
    }
    cout<<endl;

    return 0;
}

