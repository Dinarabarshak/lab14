#include "lib.h"

// Чтение студентов
void read_students(FILE *f, Student *arr, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        fscanf(f, "%s %d %f",
               (arr + i)->name,
               &(arr + i)->age,
               &(arr + i)->grade);
    }
}

// Вывод
void print_students(Student *arr, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("Name: %s, Age: %d, Grade: %.2f\n",
               (arr + i)->name,
               (arr + i)->age,
               (arr + i)->grade);
    }
}

// Запись в файл
void write_students(FILE *f, Student *arr, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        fprintf(f, "%s %d %.2f\n",
                (arr + i)->name,
                (arr + i)->age,
                (arr + i)->grade);
    }
}

// Сортировка
void sort_students(Student *arr, int count)
{
    int i, j;
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if ((arr + j)->grade > (arr + j + 1)->grade)
            {
                Student temp;
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
