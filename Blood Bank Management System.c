#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int donor_count=6;
struct donor
{

    char name[30];
    char blood_group[30];
    char address[30];
    int date[6];

};
struct donor d[30];

int donor_initilize()
{

    strcpy(d[0].name,"Name");
    strcpy(d[0].address,"Address");
    strcpy(d[0].blood_group,"Blood group");
    strcpy(d[1].name,"Tamanna");
    strcpy(d[1].address,"Mymensingh");
    strcpy(d[1].blood_group,"B+");
    strcpy(d[2].name,"Nafisa");
    strcpy(d[2].address,"Dhaka");
    strcpy(d[2].blood_group,"O+");
    strcpy(d[3].name,"Tanha");
    strcpy(d[3].address,"Uttara");
    strcpy(d[3].blood_group,"B+");
    strcpy(d[4].name,"Tasfia");
    strcpy(d[4].address,"Dhaka");
    strcpy(d[4].blood_group,"A+");
    strcpy(d[5].name,"Maymuna");
    strcpy(d[5].address,"Noakhali");
    strcpy(d[5].blood_group,"AB-");

}


int donor()
{
    int a;
    system("cls");

    printf("press 1 to continue\n");
    scanf("%d",&a);
    if(a==1)
    {
        while(1)
        {
            printf("1.Search member list\n");
            printf("2.Donor Registration\n");
            printf("3.Modify your biodata\n");
            scanf("%d",&a);
            if(a==1)
            {

                int i;
                char b[30];
                printf("Search if your profile already exists\n");
                scanf("%s",b);
                for(i=0; i<donor_count; i++)
                {

                    if(strcmp(b,d[i].name)==0)
                    {

                        printf("%-10d          %-10s                  %-10s                  %-10s \n",i,d[i].name,d[i].address,d[i].blood_group);



                    }
                }
            }

            else if(a==2)
            {
                printf("Registration: \n");

                printf("Enter name:\n");
                scanf("%s",&d[donor_count].name);
                printf("Enter Address:\n");
                scanf("%s",&d[donor_count].address);
                printf("Enter Bloodgroup\n");
                scanf("%s",&d[donor_count].blood_group);
                printf("Last date:\n");
                scanf("%d",&d[donor_count].date);
                donor_count++;
                printf("You are registered!\n ");


            }
            else if(a==3)
        {
            int i,b;
            printf("Modify members?\n");
            for(i=0; i<donor_count; i++)
            {



                printf("%-10s                  %-10s                  %-10s \n",d[i].name,d[i].address,d[i].blood_group);
            }
            printf("Whom do u want to modify?\n");
            scanf("%d",&b);
            printf("1. Name?\n");
            printf("2. Address\n");
            printf("3. Blood group\n");
            scanf("%d",&a);
            if(a==1)
            {
                scanf("%s",&d[b-1].name);
            }
            else if(a==2)
            {
                scanf("%s",&d[b-1].address);
            }
            else if(a==3)
            {
                scanf("%s",&d[b-1].blood_group);
            }
        }

        }
    }

}

int reciever()
{
    int a;
    system("cls");
    printf("donor list:\n");
    printf("1.Show member list\n");
    printf("2.Choose donor:\n");
    scanf("%d",&a);
    if(a==1)
    {
        int i;
        printf("Member list\n\n");
        printf("_____________________________________________\n");
        printf("| name       | Address        | Blood group  |\n");
        printf("_____________________________________________\n");
        for(i=0; i<donor_count; i++)
        {



            printf("%-10s                  %-10s                  %-10s \n",d[i].name,d[i].address,d[i].blood_group);
        }

    }
    else if(a==2)
    {
        int i;
        char b[30];
        printf("Input the blood group you need:\n");
        scanf("%s",b);
        for(i=0; i<donor_count; i++)
        {

            if(strcmp(b,d[i].blood_group)==0)
            {

                printf("%-10d                  %-10s                  %-10s                  %-10s \n",i,d[i].name,d[i].address,d[i].blood_group);


            }
        }
        printf("Choose your donor:\n");
        scanf("%s",&a);
        printf("Go to admin or contact with the number - 01*******");

    }
}

int admin_login()
{
    int a, address;
    char name[100];
    char pass[100];
    system("cls");
    printf("Enter User name:\n");
    scanf("%s",&name);
    printf("Enter password:\n");
    scanf("%s",&pass);
    if(!strcmp(name,"n"))
    {
        if(!strcmp(pass,"1"))
        {
            printf("Login successful!\n");
            admin_menu();
        }
    }
    else
    {
        printf("Try again\n");
    }
}
int admin_menu()
{
    int a,name, address;
    while(1)
    {
        printf("1.Show member list\n");
        printf("2.Add members\n");
        printf("3.Search members by blood group\n");
        printf("4.Modify member list\n");
        scanf("%d",&a);
        if(a==1)
        {
            int i;
            printf("Member list\n\n");
            printf("_____________________________________________\n");
            printf("| name       | Address        | Blood group  |\n");
            printf("_____________________________________________\n");
            for(i=0; i<donor_count; i++)
            {



                printf("%-10s                  %-10s                  %-10s \n",d[i].name,d[i].address,d[i].blood_group);
            }

        }
        else if(a==2)
        {
            printf("Add members?\n");

            printf("Enter name:\n");
            scanf("%s",&d[donor_count].name);
            printf("Enter Address:\n");
            scanf("%s",&d[donor_count].address);
            printf("Enter Bloodgroup\n");
            scanf("%s",&d[donor_count].blood_group);
            donor_count++;

        }
        else if(a==3)
        {
            int i;
            char b[30];
            printf("Search members by blood group\n");
            scanf("%s",b);
            for(i=0; i<donor_count; i++)
            {

                if(strcmp(b,d[i].blood_group)==0)
                {

                    printf("%-10d                  %-10s                  %-10s                  %-10s \n",i,d[i].name,d[i].address,d[i].blood_group);


                }
            }
        }
        else if(a==4)
        {
            int i,b;
            printf("Modify members?\n");
            for(i=0; i<donor_count; i++)
            {



                printf("%-10s                  %-10s                  %-10s \n",d[i].name,d[i].address,d[i].blood_group);
            }
            printf("Whom do u want to modify?\n");
            scanf("%d",&b);
            printf("1. Name?\n");
            printf("2. Address\n");
            printf("3. Blood group\n");
            scanf("%d",&a);
            if(a==1)
            {
                scanf("%s",&d[b-1].name);
            }
            else if(a==2)
            {
                scanf("%s",&d[b-1].address);
            }
            else if(a==3)
            {
                scanf("%s",&d[b-1].blood_group);
            }
        }
    }
}
int main()
{
    int a;
    donor_initilize();
    printf("Welcome to Blood bank management :\n");

    printf("1. As a donor?\n");
    printf("2. As a receiver\n");
    printf("3. Admin login\n");

    scanf("%d",&a);

    if(a==1)
    {
        donor();
    }
    else if(a==2)
    {
        reciever();
    }
    else if(a==3)
    {
        admin_login();
    }

}
