#include <stdio.h>

int main(void) {
    int arr[10]={1,8,7,9,7,4,3,5,11,0};
    for (int i=0;i<9;i++) {
        for (int k=0;k<10-1-i;k++) {
            if (arr[k]>arr[k+1]) {
                int t=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=t;
            }

        }
    }
    for (int i=0;i<10;i++)
        printf("%d\n",arr[i]);

    return 0;
}