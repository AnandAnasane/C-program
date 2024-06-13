// WAP to check the grades of students

# include <stdio.h>
#define LINE printf("\n -------------------------- \n");

int main()
{
    int marks;

    printf("Enter the marks of the students: ");
    scanf("%d", &marks);
    
    LINE

    if(marks > 90 && marks <= 100)
    {
        LINE
        printf("Passed with Grade A...!");
        LINE
    }
    else if(marks < 90 && marks > 80)
    {
        LINE
        printf("Passed with Grade B...!");
        LINE
    }
    else if (marks < 80 && marks > 70)
    {
        LINE
        printf("Passed with Grade C...!");
        LINE
    }
    else if(marks < 70 && marks > 60)
    {
        LINE
        printf("passed with Grade D...!");
        LINE
    }
    else if (marks < 60 && marks > 50)
    {
        LINE
        printf("Passed with Grade E...!");
        LINE
    }
    else if (marks >= 50 && marks < 60)
    {
        LINE
        printf("Passed");
        LINE
    }
    else if (marks < 35 && marks < 50)
    {
        LINE
        printf("Fail.....!");
        LINE
    }
    else 
    {
        LINE
        printf("Invalid Marks.....!");
        LINE
    }

    return 0;
}