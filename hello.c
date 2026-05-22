#include<stdio.h>
int main(){

    int students;
    printf("Enter the number of students: ");
    scanf("%d", &students);

    int arr[students][2]; // 2 columns: roll number and marks

    printf("\nEnter roll number and marks for each student:\n");

    for (int i = 0; i < students; i++)
    {
        printf("Student %d - Roll Number: ", i+1);
        scanf("%d", &arr[i][0]);
        printf("Student %d - Marks: ", i+1);
        scanf("%d", &arr[i][1]);
    }

    printf("\nRoll Number\tMarks\n");
    printf("------------------------\n");

    for (int i = 0; i < students; i++)
    {
        printf("%d\t\t%d\n", arr[i][0], arr[i][1]);
    }

    return 0;
}