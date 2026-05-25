#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s input output\n", argv[0]);
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (!input)
    {
        printf("Error input file\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (!output)
    {
        printf("Error output file\n");
        fclose(input);
        return 1;
    }

    int count;
    fscanf(input, "%d", &count);

    Student *students = malloc(count * sizeof(Student));

    read_students(input, students, count);

    printf("Students:\n");
    print_students(students, count);

    sort_students(students, count);

    printf("\nSorted:\n");
    print_students(students, count);

    write_students(output, students, count);

    free(students);
    fclose(input);
    fclose(output);

    return 0;
}
