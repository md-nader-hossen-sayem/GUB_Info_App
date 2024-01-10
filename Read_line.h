char Read_Line (char name[], int n)
{
    printf("Enter Your Name: ");
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n')
        if(i < n)
            name[i++] = ch;
    name[i] = '\0';


    //start file section
    FILE *file;
    file = fopen("total_visitor.txt","a");
    if(file==NULL) printf("File doesn't not exist: ");
    else
    {
        fputs(name,file);
        fputs("\n",file);
        fclose(file);
    }
    //End of file section
}

