#include <stdio.h>
#include "grade.h"

const double MIDDLE_GRADE = 0.3;
const double FINAL_GRADE = 0.7;

struct student * calculateGrades(struct student * arr, int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    arr[i].grade = MIDDLE_GRADE * arr[i].grade_middle + FINAL_GRADE * arr[i].grade_final;
  }
  return arr;
}

void printArray(struct student * arr, int size) {
  size_t i;
  for (i = 0; i < size; i++) {
    printf("%f, ", arr[i].grade);
  }
}

int main() {
  struct student arr[] = {{90, 45, 0}, {100, 90, 0}, {94, 78, 0}, {100, 95, 0}};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(calculateGrades(arr, size), size);

}
