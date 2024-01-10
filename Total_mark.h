float mark(float r)
{
    float hsc, ssc;
    printf("Enter Your SSC marks = ");
    scanf("%f",&ssc);
    printf("Enter Your HSC marks = ");
    scanf("%f",&hsc);
    if(ssc<=5 && ssc>=1 && hsc<=5 && hsc>=1)
        r = ssc + hsc;
    else printf("\nYour Given Grade is Wrong!!!!! \n Try Again--\n\n");

    //start file section
    FILE *file;
    file = fopen("total_visitor.txt","a");
    if(file==NULL) printf("File doesn't not exist: ");
    else
    {
        fprintf(file,"SSC = %.2f\t HSC = %.2f",ssc,hsc);
        fputs("\n\n",file);
        fclose(file);
    }
    //End of file section

    return r;
}
