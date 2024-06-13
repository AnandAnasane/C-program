#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50
#define MAX_LINE_LEN 100

typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    int age;
} Student;

void read_students(const char *filename, Student **students, int *count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Could not open file");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LEN];
    *count = 0;
    while (fgets(line, sizeof(line), file)) {
        (*count)++;
    }
    rewind(file);

    *students = (Student *)malloc(*count * sizeof(Student));
    if (!*students) {
        perror("Could not allocate memory");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%d, %[^,], %d", &(*students)[i].id, (*students)[i].name, &(*students)[i].age);
        i++;
    }

    fclose(file);
}

void write_students(const char *filename, Student *students, int count) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Could not open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "ID: %d, Name: %s, Age: %d \n", students[i].id, students[i].name, students[i].age);
    }

    fclose(file);
}

int main() {
    const char *input_filename = "students1.txt";
    const char *output_filename = "output1.txt";
    Student *students = NULL;
    int student_count = 0;

    read_students(input_filename, &students, &student_count);
    write_students(output_filename, students, student_count);

    free(students);

    return 0;
}



// students.txt
// 1, anand , 20
// 2, milind, 20
// 3, Rajesh, 20
// 4, Akshay, 20
