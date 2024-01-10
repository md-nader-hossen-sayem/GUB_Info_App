//This project is about for a new student who want to know about green university of Bangladesh
#include<stdio.h>
#include"Read_line.h"
#include"Total_mark.h"
#include"Room_details.h"
#include"Take_Admission.h"
#define LEN 50
#define SIZE 100
//#define LENGTH 50




// Here Start Main Function of this program
int main()
{

    printf("\n\t\t\t------------------------------->>>>GUB info APP<<<<--------------------------\t\t\n\n");

    // here print my name
    printf("\t\t\t\t   ----------------------------------------------------- \n");
    printf("\t\t\t\t   |     *         *      *    *   ****   *       *    | \n");
    printf("\t\t\t\t   |   *         *   *    *    *   *      * *   * *    | \n");
    printf("\t\t\t\t   |   *        *     *    *  *    *      *   *   *    | \n");
    printf("\t\t\t\t   |     *     *       *    **     ****   *       *    | \n");
    printf("\t\t\t\t   |      *   **********     *     *      *       *    | \n");
    printf("\t\t\t\t   |      *   *        *     *     *      *       *    | \n");
    printf("\t\t\t\t   |    *     *        *     *     ****   *       *    | \n");
    printf("\t\t\t\t   ----------------------------------------------------- \n");

    //take input and display welcome
    char name[LEN+1];
    Read_Line(name, LEN);
    printf("\n\t\t************************Welcome to %s*************************\n",name);

    //this while loop help for again again run code
    while(1)
    {
        //give a choice which user want
        int choice;
        printf("\n\n~~What do you want to know about?----\n");
        printf("  1. Admission Information\n ");
        printf(" 2. Take Admission \n ");
        printf(" 3. Faculty Members \n ");
        printf(" 4. Classroom, Lab & Others \n ");
        printf(" 5. Clubs \n ");
        printf(" 6. Exit \n ");

        printf("\n Enter Your choice: ");
        scanf("%d",&choice);


        //start switch condition
        switch (choice)
        {

        //this case made for give admission informasion
        case 1:
        {



            printf("\n Here are all DEPARTMENT---\n");
            printf(" 1. EEE \n");
            printf(" 2. CSE \n");
            printf(" 3. Textile Engineering \n");
            int dept;
            printf("\nEnter Your Department Number: ");
            scanf("%d",&dept);

            //testing for EEE department
            if(dept==1)
            {
                printf("\n\t------------------welcome To You EEE Department-----------------\n");


                float r;
                float result = mark(r);
                printf("total mark: %.2f\n",result);

                //When result will be 4<=result<=10 then its work
                if(result >= 4 && result <= 10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                        printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                        scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--");
                        printf("\nYou got '50' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 301500 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else if(result == 10 && allSubject == 0)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--");
                        printf("\nYou got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 382500 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");

                    }
                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--");
                        printf("\nYou got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 423000 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give admission test--");
                        printf("\nYou got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 463500 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give admission test--");
                        printf("\nYou got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 504000 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }

                }
                else
                {
                    printf("\nYou are not eligible !");
                    printf("\n--------------------------------");
                }



            }

            //testing for CSE department
            else if(dept==2)
            {
                printf("\n\t-----------------------welcome To You CSE Department-----------------------\n");
                float r;
                float result = mark(r);
                printf("total mark: %.2f\n",result);

                if(result >= 4 && result <=10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                        printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                        scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1 )
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '50' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 370350 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");

                    }
                    else if(result == 10 && allSubject == 0)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 475650 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 528300 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give Admission test--\n");
                        printf("You got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 580950 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }
                    else
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give Admission test--\n");
                        printf("You got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 633600 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
                    }

                }
                else
                {
                    printf("\nYou are not eligible !");
                    printf("\n -------------------------");
                }



            }


            //testing for Textile Engineering
            else if(dept==3)
            {
                printf("\n\t-----------------welcome To You Textile Engineering Department------------------\n");
                float r;
                float result = mark(r);
                printf("total mark: %.2f\n",result);

                if(result >= 4 && result <=10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                        printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                        scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1  )
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '50' percent weaver--- \n");
                        printf("Total Credits = 161 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 292575 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                    }

                    else if(result == 10 && allSubject == 0)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 368565 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                    }

                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You will be able to direct Admission--\n");
                        printf("You got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 406560 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                    }

                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give Admission test--\n");
                        printf("You got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 444555 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                    }

                    else
                    {
                        printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                        printf("You have to give Admission test--\n");
                        printf("You got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 482550 \n");
                        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                    }

                }
                else
                {
                    printf("\nYou are not eligible !");
                    printf("\n--------------------------------------");
                }


            }
            else
            {
                printf("Sorry! Your choice is invalid. Try again.... ");
            }
            break;
        }

        //this case made for taking admission
        case 2:
        {
            TakeAdmission();
            break;

        }


        //this case made for Faculty Members
        case 3:
        {
            printf("\nSelect one from (1~3)-- \n");
            printf(" 1. EEE\n");
            printf(" 2. CSE\n");
            printf(" 3. Textile Engineering\n");

            int ch;
            printf("\nEnter Your Department Number: ");
            scanf("%d",&ch);

            if(ch == 1)
            {
                printf("\n\t------------Department of EEE ----------------\n");
                printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("Total Faculty Members = '56' \n\n");
                printf("Male Faculty Members = '41' \n\n");
                printf("Women Faculty Members = '15' \n");
                printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            }
            else if(ch == 2)
            {
                printf("\n\t------------Department of CSE ----------------\n");
                printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("Total Faculty Members = '74' \n\n");
                printf("Male Faculty Members = '41' \n\n");
                printf("Women Faculty Members = '33' \n");
                printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            }
            else if(ch == 3)
            {
                printf("\n\t------------Department of Textile Engineering ----------------\n");
                printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("Total Faculty Members = '27' \n\n");
                printf("Male Faculty Members = '22' \n\n");
                printf("Women Faculty Members = '5' \n");
                printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            }
            else
            {
                printf("\nSorry ! Your choice is wrong. try again...\n");
            }
            break;

        }

        //this case made for class room , lab and others
        case 4:
        {
            //here i used function
            Room_details();
            break;
        }

        //this case made for about clubs
        case 5:
        {
            printf("------------Welcome to Green University Clubs------------\n");

            printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|");
            printf("\n\n\t~~~Total Clubs is 16--- \n\n");
            printf("* Blood Club         \t * Cultural Club    \t * Debating Club        \t * ECO-Warrior Club \n\n");
            printf("* Green Theater Club \t * Photography Club \t * Reading Society Club \t * Sports Club \n\n");
            printf("* Business Club      \t * Cine Club        \t * Computer Club        \t * EEE Club \n\n");
            printf("* English Club       \t * Law Club         \t * Social Bonding Club  \t * Textile Club \n\n");
            printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-|");
            break;
        }

        case 6:
        {
            printf("\n You have successfully exited this program--\n\n");
            return 0;
        }

        default:
        {
            printf("\n Error!! Your Choice is wrong. Try Again");
            break;
        }


        }
    }
    return 0;
}
