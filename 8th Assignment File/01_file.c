#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fs, *fd;
    char ch;
    if (argc != 3)
    {
        printf("oh! something went worng.");
        exit(0);
    }
    fs = fopen(argv[1], "r");
    if (fs == NULL)
    {
        printf("Error to open the file.");
        exit(1);
    }
    fd = fopen(argv[2], "w");
    if (fs == NULL)
    {
        printf("Error to open the file.");
        fclose(fs);
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fd);
    }
    fclose(fs);
    fclose(fd);
    printf("file coppied successfully.");
    return 0;
}
