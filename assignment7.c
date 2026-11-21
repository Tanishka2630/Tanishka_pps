#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, percentage;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3;
    }

    printf("\nRoll No\tName\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t%.2f\n",
        s[i].roll, s[i].name, s[i].m1, s[i].m2,
        s[i].m3, s[i].total, s[i].percentage);
    }

    return 0;
}
