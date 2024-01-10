void Room_details()
{
    printf("\n \t---------------------------Welcome-------------------------\n\n");
    printf("You can choice any one----\n");
    printf("1. Class Room \n");
    printf("2. Lab \n");
    printf("3. Faculty Room \n");
    printf("4. Office & Accounts \n");
    printf("5. Prayer Room \n");
    printf("6. Library \n");
    printf("7. Others \n");

    int choice;
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);

    if(choice == 1)
    {

        printf("\n **Class Room----\n");
        printf("\t  Floor   \t   Room  \n");
        printf("\t----------\t---------\n");
        printf("\t  >6th    \t   601   \n\n");
        printf("\t  >6th    \t   602   \n\n");
        printf("\t  >6th    \t   603   \n\n");
        printf("\t  >6th    \t   605   \n\n");
        printf("\t  >6th    \t   606   \n\n");
        printf("\t  >2nd    \t   204   \n\n");

    }

    else if(choice == 2)
    {

        printf("\n **Lab-----\n");

        printf("\t          Lab Name               \t   Room  \n");
        printf("\t---------------------------------\t---------\n");
        printf("\t   >Physics Lab                  \t   407   \n\n");
        printf("\t   >Programming Lab              \t   501   \n\n");
        printf("\t   >Network Lab                  \t   502   \n\n");
        printf("\t   >Computer graphics & multimedia\t  503   \n\n");
        printf("\t   >Circuit Lab                  \t   607   \n\n");
        printf("\t   >Energy conversation Lab      \t   202   \n\n");
        printf("\t   >Electric Lab                 \t   203   \n\n");
    }

    else if(choice == 3)
    {

        printf("\n **Faculty Room----\n");
        printf("\t  Floor   \t   Room  \n");
        printf("\t----------\t---------\n");
        printf("\t  >3rd    \t   309   \n\n");
        printf("\t  >3rd    \t   311   \n\n");
        printf("\t  >4th    \t   404   \n\n");
        printf("\t  >4th    \t   403   \n\n");
        printf("\t  >5th    \t   506   \n\n");
        printf("\t  >5th    \t   510   \n\n");
        printf("\t  >6th    \t   608   \n\n");

    }

    else if(choice == 4)
    {

        printf("\n **Office & Accounts-----\n");

        printf("\t                 Office                      \t   Room  \n");
        printf("\t---------------------------------------------\t---------\n");
        printf("\t   >Office of the treasurer                  \t   305   \n\n");
        printf("\t   >CLCS & NAT test office                   \t   306   \n\n");
        printf("\t   >Apparel Manufacturing                    \t   304   \n\n");
        printf("\t   >Account & Finance                        \t   303   \n\n");
        printf("\t   >Controller of examination office         \t   307   \n\n");
        printf("\t   >IQAC office                              \t   308   \n\n");
        printf("\t   >Dean faculty of law                      \t   310   \n\n");
        printf("\t   >Syndicate room                           \t   409   \n\n");
        printf("\t   >Faculty of business study                \t   401   \n\n");
        printf("\t   >Office of the Pro-vice chancellor        \t   402   \n\n");
        printf("\t   >Dean faculty of arts & social science    \t   504   \n\n");
        printf("\t   >Distinguish professor                    \t   505   \n\n");
        printf("\t   >IT office                                \t   604   \n\n");
        printf("\t   >Dean faculty of science & Engineering    \t   608   \n\n");
        printf("\t   >Register room                            \t   205   \n\n");
        printf("\t   >Registrar office                         \t   206   \n\n");
        printf("\t   >Logistics offics                         \t   108   \n\n");
        printf("\t   >Admission offics                         \t   109   \n\n");

    }

    else if(choice == 5)
    {

        printf("\n **Prayer Room----\n");
        printf("\t     Floor        \t   Room  \n");
        printf("\t------------------\t---------\n");
        printf("\t  >5th(Female)    \t   507   \n\n");
        printf("\t  >5th(Male)      \t   508   \n\n");
    }

    else if(choice == 6)
    {

        printf("\n **Library----\n");
        printf("\t   Floor   \t   Room  \n");
        printf("\t-----------\t---------\n");
        printf("\t  >1st     \t  Library\n\n");
    }

    else if(choice == 7)
    {

        printf("\n **Others----\n");
        printf("\t      Name          \t   Room  \n");
        printf("\t--------------------\t---------\n");
        printf("\t  >Pantry           \t   509   \n\n");
        printf("\t  >Pantry           \t   408   \n\n");
        printf("\t  >Seminar Hall     \t   302   \n\n");
        printf("\t  >Server room      \t   301   \n\n");

    }

    else
    {
        printf("Sorry!! Insufficient Number.. Try Again--");
    }

}
