#include <stdio.h>
#include <string.h>
void hotel();
struct hotel 
{
    char name[25];
    char Grade;
    char address[100];
    int no_rooms;
    float charge;
};

int main()
{
    hotel();
}

void hotel()
{
    int n;
    char list[100];
    printf("Enter number of hotel : ");
    scanf("%d",&n);
    struct hotel h[n];
    for(int i=0;i<n;i++)
    {
        printf("For hotle %d : \n\n",i+1);
        printf("Enter name of hotel : ");
        fflush(stdin);
        gets(h[i].name);
        printf("Enter gread of hotel : ");
        scanf("%c",&h[i].Grade);
        printf("Enter Adderess of hotel : ");
        fflush(stdin);
        gets(h[i].address);
        printf("Enter rate of the room of the hotel : ");
        fflush(stdin);
        scanf("%f",&h[i].charge);
        printf("Enter number of the room of the hotel : ");
        fflush(stdin);
        scanf("%d",&h[i].no_rooms);
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nDetail of the hotel : ");
        printf("\nName : %s",h[i].name);
        printf("\nGrade : %c",h[i].Grade);
        printf("\nAddress : %s",h[i].address);
        printf("\nRate of room : %f",h[i].charge);
    }
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(h[i].charge < h[j].charge)
            {
                strcpy(list,h[j].name);
                strcpy(h[j].name,h[i].name);
                strcpy(h[i].name,list);
            }
        }
    }
    printf("\nList of hotel by shorting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",h[i].name);
    }
}
