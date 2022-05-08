#include <stdio.h>
#include <stdlib.h>

int main(int num,char *file[]){
    FILE* fptr;
    fptr=fopen(file[1],"r");
    if(!fptr || num!=2){
        printf("ERROR");
    }
    char ch;
    while((ch=fgetc(fptr))!=EOF){
        printf("%c",ch);
    }
    fclose(fptr);
}

