#pragma once
struct student {
  double grade_middle, grade_final, grade;
};
struct student * calculateGrades(struct student * arr, int size);
