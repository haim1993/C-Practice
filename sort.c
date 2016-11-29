#include <stdio.h>

void swap(int * pa, int * pb) {
  int temp = * pa;
  * pa = * pb;
  * pb = temp;
}

int * sort(int * arr, int n) {
  int i = 0, j;
  while (i != n) {
    for (j = 0; j + 1 < n; j++) {
      if (arr[j] > arr[j + 1])
        swap(& arr[j], & arr[j + 1]);
    }
    n--;
  }
  return arr;
}

int main() {
  int i, n = 5;
  int arr[] = {5,4,3,2,1};
  int * ar = sort(arr, n);
  for (i = 0; i < n; i++) { printf("%d,", ar[i]); }
  printf("\n");
  return 0;
}
