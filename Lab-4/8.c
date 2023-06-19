#include<stdio.h>
struct family
{
    char name[100],occupation[100],degree[100];
    int age,salary;

};
int main()
{
    struct family members[100];
    int n,i;
    scanf("%d", &n);
    getchar();
    for (i=0;i<n;i++)
    {
        printf("Name: ");
        fgets(members[i].name,100,stdin);
        printf("Age: ");
        scanf("%d", &members[i].age);
        getchar();
        printf("Last Degree: ");
        fgets(members[i].degree,100,stdin);
        printf("Occupation: ");
        fgets(members[i].occupation,100,stdin);
        printf("Salary: ");
        scanf("%d", &members[i].salary);
        getchar();
    }
    printf("\n\n");
    for (i=0;i<n;i++)
    {
        printf("Name: %s\n",members[i].name);
        printf("Age: %d\n",members[i].age);
        printf("Last Degree: %s\n",members[i].degree);
        printf("Occupation: %s\n",members[i].occupation);
        printf("salary: %d\n",members[i].salary);
    }
    return 0;
}
