#ifndef LIB_H
#define LIB_H

#include <stdio.h>

typedef struct
{
    char name[50];
    int age;
    float grade;
} Student;

void read_students(FILE *f, Student *arr, int count);
void print_students(Student *arr, int count);
void write_students(FILE *f, Student *arr, int count);
void sort_students(Student *arr, int count);

#endif
