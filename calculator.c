 #include <stdio.h>
int main()
{
    float a, b, c;
    char ch;

    printf("\nEnter your first number:\n");
    scanf("%f", &a);
    printf("Enter your second number:\n");
    scanf("%f", &b);
    printf("Enter any operation you want to perform: ");
    scanf(" %c", &ch);
    
    if (ch == '+')
    {   c=a+b;
        printf(" Anser is %f+%f=%f" , a , b ,c);
    }           
    else if (ch == '-')
    {
        c=a-b;
         printf(" Anser is %f+%f=%f" , a , b ,c);
    }
    else if (ch == '*')
    {
        c=a*b;
         printf(" Anser is %f+%f=%f" , a , b ,c);
    }
    else if (ch == '/')
    {
        c=a/b;
         printf(" Anser is %f+%f=%f" , a , b ,c);
    }

    else
    {
        printf("can not match")
    }
    
    
    return 0;
    }
