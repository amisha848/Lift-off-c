#include<stdio.h>
int main()
{
    char name[20], branch[30], hobby[50];
    printf("Enter your name: \n");
    gets(name);

    printf("Enter your branch: \n");
    gets(branch);

    printf("Enter your hobbies: \n");
    gets(hobby);

    int regd;
    printf("Enter your registration number: \n");
    scanf("%d", &regd);

    printf("Name:%s\nRegd:%d\nBranch:%s\nHobby:%s\n",name ,regd ,branch, hobby);
    return 0;
}
