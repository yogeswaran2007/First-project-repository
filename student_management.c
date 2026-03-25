#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    printf("Enter details of 3 students\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i+1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}