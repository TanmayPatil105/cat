#include <stdio.h>
#include <stdlib.h>

void help()
{
    printf("Invalid command used\n\n");
    printf("Use the following format : \n");
    printf("./cat [file-address]\n\n");
    return;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Please give file name as an argument : ");
        exit(-1);
    }

    for (int i = 1; i < argc; i++)
    {
        FILE *fptr;
        fptr = fopen(argv[i], "r");
        if (!fptr)
        {
            printf("ERROR! File Not Found.");
        }
        char ch;
        while ((ch = fgetc(fptr)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(fptr);
    }

    return 0;
}
