#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%99s", str1);

    printf("\n1. Length of string");
    printf("\n2. Copy string");
    printf("\n3. Concatenate strings");
    printf("\n4. Compare strings");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied string = %s", str2);
            break;

        case 3:
            printf("Enter second string: ");
            scanf("%99s", str2);
            strcat(str1, str2);
            printf("Concatenated string = %s", str1);
            break;

        case 4:
            printf("Enter second string: ");
            scanf("%99s", str2);

            if(strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
