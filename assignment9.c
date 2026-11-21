#include <stdio.h>

int main()
{
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");

    if (source == NULL)
    {
        printf("Unable to open source file");
        return 1;
    }

    target = fopen("destination.txt", "w");

    if (target == NULL)
    {
        printf("Unable to create destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully");

    fclose(source);
    fclose(target);

    return 0;
}
