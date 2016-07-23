#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num_personel 5
#define name_length 30
#define passwordLength 15


int password();

void searchName();

struct employee_info
{
    char personel[num_personel][name_length];
    int Salary[num_personel];
};
struct employee_info empInfo;
/* the compiler does not accept this
empInfo.Salary[0]=1000;
    empInfo.Salary[1]=1100;
    empInfo.Salary[2]=1200;
    empInfo.Salary[3]=1300;
    empInfo.Salary[4]=1400;
strcpy(empInfo.personel[0],"Mohamed");
strcpy(empInfo.personel[1],"Ahmed");
strcpy(empInfo.personel[2],"Maher");
strcpy(empInfo.personel[3],"Noha");
strcpy(empInfo.personel[4],"Hend");
*/
int main()
{
    /* so it must be written in a function */
    empInfo.Salary[0]=1000;
    empInfo.Salary[1]=1100;
    empInfo.Salary[2]=1200;
    empInfo.Salary[3]=1300;
    empInfo.Salary[4]=1400;
    strcpy(empInfo.personel[0],"Mohamed");
    strcpy(empInfo.personel[1],"Ahmed");
    strcpy(empInfo.personel[2],"Maher");
    strcpy(empInfo.personel[3],"Noha");
    strcpy(empInfo.personel[4],"Hend");

    int k=1;

    k=password();

    while (k!= 27)
    {
        searchName();
        k=27;
    }
    return 0;
}

int password()
{   int i=0,k=-1;
    char  pass[passwordLength]="okay";
    char passcorrect[passwordLength];
    do
    {
    printf("Enter the Password : ");
    scanf("%s",passcorrect);
    k=strcmp(pass,passcorrect);
    if (k==0) break;
    if (i<2) printf("\nWrong password try again\n\n");

    i++;
    }while(i<3);
    if (k!=0)
    {
        printf("\nSorry you didn't enter the correct passward");
        k=27;
    }
    return k;
}

void searchName()
{
    int i,k=-1,j=-1;
    char nameTake[name_length];
    char z=-1;
    while(z!=27)
    {
    system("cls");
    printf("Enter the employee name : ");
    scanf("%s",nameTake);
    for (i=0;i<num_personel;i++)
    {
        k=strcmpi(nameTake,empInfo.personel[i]);
        if (k==0)
        {
            j=i;   // the variable j will not change until the user enter a valid name
            break;
        }

    }
    if (j==-1)
    {
        printf("\n\n\tNot found ");
    }
    else
    {
        printf("\nThe salary of %s = %d LE",empInfo.personel[j],empInfo.Salary[j]);

    }
    k=-1;
    j=-1;
    printf("\n\nFor another employee press any key\npress ESC to end");
    z=getch();
    }

}
