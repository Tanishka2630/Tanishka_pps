#include <stdio.h>
#include <time.h>

int main()
{
    int year, month;
    struct tm date;
    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    printf("\nCalendar for the year %d\n", year);

    for (month = 0; month < 12; month++)
    {
        date.tm_year = year - 1900;
        date.tm_mon = month;
        date.tm_mday = 1;
        date.tm_hour = 12;
        date.tm_min = 0;
        date.tm_sec = 0;
        date.tm_isdst = -1;

        mktime(&date);

        printf("\n\n       %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (int i = 0; i < date.tm_wday; i++)
            printf("    ");

        int days = 31;

        if (month == 3 || month == 5 || month == 8 || month == 10)
            days = 30;
        else if (month == 1)
        {
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
        }

        for (int day = 1; day <= days; day++)
        {
            printf("%3d ", day);

            if ((date.tm_wday + day) % 7 == 0)
                printf("\n");
        }
    }

    return 0;
}
