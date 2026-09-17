#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    char buf[50];
    int count;

    // Additional example of using sscanf to parse the data read from the file
    int number;
    char name[30];
    char major[10];
    float gpa;
    float sum = 0;
    int check;

    FILE* fp = fopen("file_io_data.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error opening file: %d %s\n", 
                         errno, strerror(errno));
        return 1;
    }

    while (fgets(buf, 49, fp) != NULL) {
        count++;

        // Additional example of using sscanf to parse the data read from the file
        check = sscanf(buf, "%d %s %s %f", &number, name, major, &gpa);
        if (check != 4) {
            fprintf(stderr, "Erros on reading lines");
            return 1;
        } else {
            sum = sum + gpa;
        }
    }

    printf("There are %d of studnets in the dataset\n", count);
    // Additional example of using sscanf to parse the data read from the file
    printf("The average gpa is %.2f\n", sum / count);

    fclose(fp);
    return 0;
}