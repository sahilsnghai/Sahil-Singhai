#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <dos.h>

struct contact
{
    long ph;
    char name[20], address[30], email[20];

} list;
char name[20], query[20];
FILE *fp, *ft;
int i, n, ch, l, found;

// void new_contact(){

//     printf("Enter the name of contact");
//     scanf("%s",&list.name);
//     printf("Enter the Phone no");
//     scanf("%d",&list.ph);
//     printf("Enter the address of contact");
//     scanf("%s",&list.address);
//     printf("Enter the email of contact");
//     scanf("%s",&list.email);
// }
int main()
{
start:
    // system("cls");
    printf("*****welcome to Contact Management system*****");
    printf("MAIN MENU\n\t\t[1]Add new contact\n\t\t[2]search for contact\n\t\t[3]list of all contact\n\t\t[4]edit a contact\n\t\t[5]delete a contact\n\t\t[0]exit");
    printf("\n\nEnter you choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
     case 0:
        printf("\n\t\tYou wanna exit, get lost");
        break;
     case 1:
        // system("cls");
        fp = fopen("contact.dll", "a");
        for (;;)
        {
            fflush(stdin);
            printf("To exit enter '0' in the name input\nname (use identical):");
            scanf("%s", &list.name);
            if (stricmp(list.name, "") == 0 || stricmp(list.name,"0") == 0)
            break;
            fflush(stdin);
            printf("phone :");
            scanf("%ld", &list.ph);
            fflush(stdin);
            printf("address:");
            scanf("%s", &list.address);
            fflush(stdin);
            printf("email address:");
            gets(list.email);
            printf("\n");
            fwrite(&list, sizeof(list), 1, fp);
        }
        fclose(fp);
        break;
        case 2:
        // system("cls");
        do
        {
            // found = 0;
            printf("\n\t\t----contact serach----\n\t\tname of contach to search: ");
            fflush(stdin);
            scanf("%[^\n]", &query);
            l = strlen(query);
            fp = fopen("contact.dll", "r");
            // system("cls");
            printf("\n\n...search result for '%s' \n--\n", query);
            while (fread(&list, sizeof(list), 1, fp) == 1)
            {
                for (i = 0; i <= l; i++)
                    
                    name[i] = list.name[i];
                    name[l] = '\0';
             if (stricmp(name, query) == 0)
               {
                   printf("\n..Name\t: %s\n..Phone\t: %ld\n..Address\t: %s\n..Email\t: %s\n", list.name, list.ph, list.address, list.email);
                  found++;
                  if (found % 4 == 0)                   
                  {
                     printf(":Press any key to continue...");
                      getch();
                  } 
                }
            }
             
            if(found==0)
              printf("no match found!");
            else printf("\n %d maatch founf!",found);
             fclose(fp);
             printf("try again\n\n\t[1]yes\n\n\t[0]no\n\t\t entre choice:");
             scanf("%d",&ch);
        }while(ch==1);
        break;   
     
     case 3:
        // system("cls");
        printf("\n\t\t-----list of contact-----\n\t\t");
        for (i = 97; i <= 122; i = i + 1)
            
        {
            fp = fopen("contact.dll", "r");
            fflush(stdin);
            while (fread(&list, sizeof(list), 1, fp) == 1)
            {
                printf("\nname\t: %s\nphone\t: %ld\nAddress\t: %s\nEmail\t: %s\n", list.name, list.ph, list.address, list.email);
                found++;
            }

            if (found != 0)
            {
                printf("---------------------------------------------");
                getch();
            }
            fclose(fp);
        }
        break;

     
    case 4:
       
        // system("cls");
        fp=fopen("contact.dll","r");
        ft=fopen("temp.dat","w");
        fflush(stdin);
        printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");
        scanf("%[^\n]",name);
        while(fread(&list,sizeof(list),1,fp)==1)

        {

            if(stricmp(name,list.name)!=0)
                fwrite(&list,sizeof(list),1,ft);

        }
        fflush(stdin);
        printf("\n\n..::Editing '%s'\n\n",name);
        printf("..::Name(Use identical):");
        scanf("%[^\n]",&list.name);
        fflush(stdin);
        printf("..::Phone:");
        scanf("%ld",&list.ph);
        fflush(stdin);
        printf("..::address:");
        scanf("%[^\n]",&list.address);
        fflush(stdin);
        printf("..::email address:");
        gets(list.email); 
        printf("\n");
        fwrite(&list,sizeof(list),1,ft);
        fclose(fp);
        fclose(ft);
        remove("contact.dll");
        rename("temp.dat","contact.dll");
        break;
     case 5:
    //  system("cls");
     fflush(stdin);
     printf("\n\nEnter the name of contact to delete..\n\n");
     scanf("%[^\n]",&name);
     fp=fopen("contact.dll","r");
     ft=fopen("temp.dat","w");
     while(fread(&list,sizeof(list),1,fp)!=0)
       {
         if(stricmp(name,list.name)!=0)
         fwrite(&list,sizeof(list),1,ft);
        }
     fclose(fp);
     fclose(ft);
     rename("temp.dat","contact.dll");
     remove("temp.dat");
     break;
     
     default:
       printf("invalid choice");
       break;


    }
      printf("\n\n\nEnter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        goto start;
    case 0:
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;

}
     
