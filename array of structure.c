#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int marks1, marks2, marks3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].marks1,
              &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\nRoll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
        s[i].rollno, s[i].name,
        s[i].marks1, s[i].marks2, s[i].marks3,
        s[i].total, s[i].percentage);
    }

    return 0;
}
