#include <stdio.h>

int main() {
    char buf[50];
    int count = 0;
    // Create a file file_io_data.txt
    FILE* fp = fopen("file_io_data.txt", "w");

    printf("Please enter student's info in each line\n"
           "Format: Name Major GPA (Ctrl + D terminate the prog.)\n");

    while (fgets(buf, 49, stdin) != NULL) {
        //printf("%s", buf);
        //fputs(buf, fp);

        count++;
        fprintf(fp, "%d %s", count, buf);
    }

    // you open the file, you close it
    fclose(fp);

    return 0;
}