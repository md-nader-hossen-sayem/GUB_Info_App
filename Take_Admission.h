
void TakeAdmission()
{

#define LEN 50


    struct Student
    {
        int no;
        char department[20];
        int ID;
        char name[20];
        int phoneNumber;
        char address[50];
    };

    void AddStudent(struct Student studentInfo[], int serial)
    {
        printf("\n\n");
        printf("Enter NO of Student: ");
        scanf("%d",&studentInfo[serial].no);
        getchar();
        printf("Enter Department Name : ");
        scanf("%s",&studentInfo[serial].department);
        printf("Enter ID : ");
        scanf("%d",&studentInfo[serial].ID);
        getchar();
        printf("Enter Student Name: ");
        gets(studentInfo[serial].name);
        printf("Enter Student Phone Number : ");
        scanf("%d",&studentInfo[serial].phoneNumber);
        getchar();
        printf("Enter Student Address : ");
        gets(studentInfo[serial].address);
    }

    void SearchStudent(struct Student studentInfo[], int serial)
    {
        int id;
        printf("Enter ID: ");
        scanf("%d",&id);



        int i=0;
        do
        {
            if(id == studentInfo[i].ID)
            {

                printf(" Serial No   : %d\n",studentInfo[i].no);
                printf(" Department  : %s\n",studentInfo[i].department);
                printf(" Department  : %d\n",studentInfo[i].ID);
                printf(" Name        : %s\n",studentInfo[i].name);
                printf(" Phone Number: %d\n",studentInfo[i].phoneNumber);
                printf(" Address     : %s\n",studentInfo[i].address);
            }
            else printf("Your id could not found!\n");
            i++;
        }
        while(i<serial);

    }


    void UpdateStudent(struct Student studentInfo[], int serial)
    {
        int Id;
        printf("Enter Your previous ID. :");
        scanf("%d",&Id);


        int i=0;
        do
        {
            if(Id == studentInfo[i].ID)
            {
                printf ("Put new ID: ");
                int I;
                scanf ("%d", &I);
                studentInfo[i].ID = I;
            }
            else printf("Your ID could not found!!!\n");
            i++;
        }while(i<serial);



    }


    void PrintStudent(struct Student studentInfo[], int serial)
    {
        int i=0;
        do
        {

            printf(" Serial No   : %d\n",studentInfo[i].no);
            printf(" Department  : %s\n",studentInfo[i].department);
            printf(" Department  : %d\n",studentInfo[i].ID);
            printf(" Name        : %s\n",studentInfo[i].name);
            printf(" Phone Number: %d\n",studentInfo[i].phoneNumber);
            printf(" Address     : %s\n",studentInfo[i].address);
            i++;
        }
        while(i<serial);

    }




    struct Student studentInfo[LEN];
    int choice;

    printf(" 1. (AddStudent) \n 2. (SearchStudent) \n 3. (Update) \n 4. (Print_All) \n 5. (Exit)  \n\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    int serial = 0;
    switch(choice)
    {
    case 1:
    {
        AddStudent(studentInfo, serial);
        serial++;
        break;
    }

    case 2:
    {
        SearchStudent(studentInfo, serial);
        break;
    }
    case 3:
    {
        UpdateStudent(studentInfo, serial);
        break;
    }
    case 4:
    {
        PrintStudent(studentInfo, serial);
        break;
    }
    case 5:
    {
        break;
    }
    default:
    {
        printf("Your choice is wrong: ");
        break;
    }
    }
}

