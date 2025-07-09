#include<stdio.h>
#include<stdlib.h>
int x=0,y,xy,z,ch,i=0,p;
//int s1;
int acno=7530600;
//struct acc s1;
struct acc
    {   int acc_no;
        char name[35];
        long long int adhr;
        int long long mob;
        char pan[15];
        char fname[30];
        char mname[30];
        char adrs[60];
        char branch[20];
        float bal;
    };

struct acc s[1000];
void display(struct acc s8);
void ctact(struct acc s6);
void alrdyact(struct acc s7);
void swit(struct acc s5);
void depo();
void withd();
void cbal();
void info(struct acc s3);
void test();
void info2();
void input(struct acc s1);

void test()
{
    int xx=0; 
    // Initialize i
//struct acc* s = (struct acc*)malloc(i * sizeof(struct acc)); // Dynamic allocation

printf("                         ----------- LOG In------------\n");
printf("               Enter your Account  number:");
scanf("%d",&xx);
//struct acc *s = (struct acc *)malloc(i * sizeof(struct acc));
for(int j=0;j<i;j++) 
  {
     if (xx==s[j].acc_no) 
    {
        xy=j;
        display(s[xy]);
    } 
      
  }
  info2();
     
}
void depo()
{
    float da;
    printf("Enter the amount you wants to deposit (in Rupee):");
    scanf("%f",&da);
    struct acc s11;
    s[xy].bal=s[xy].bal+da;
    display(s[xy]);
    info2();

}
void withd()
{
    float da;
    printf("Enter the amount you wants to withdraw (in Rupee):");
    scanf("%f",&da);
    
    s[xy].bal=s[xy].bal-da;
    display(s[xy]);
    info2();

}
void info2()
{
    printf("**************** welcome to tranjection menu ****************\n");
    printf("                1. Deposit money \n");
    printf("                2. withdraw money\n");
    printf("                3. Exit \n");
    swit2();
}
void swit2()
{
    int t;
    printf("Enter your choice :");
    scanf("%d",&t);
    switch(t)
  {
    case 1:
    {
        depo();
        break;
    }
    case 2:
    {
        withd();
        break;
    }
    case 3:
    {
        info(s[i]);
        break;
    }
    default :
    {
        info2();
        break;
    }
  }

}
void input(struct acc s9)
{
    struct acc s1;

    s1.acc_no=acno;
    acno++;
    getchar();
    printf("         Enter Your Name :-> ");
    scanf("%[^\n]", s1.name);
    getchar();
    printf("Enter your father's name :-> ");
    scanf("%[^\n]", s1.fname);
    getchar();
    printf("Enter your mother's name :-> ");
    scanf("%[^\n]", s1.mname);
    getchar();
    printf("  Enter your contact No. :-> ");
    scanf("%lld",&s1.mob);
    printf("  Enter your Aadhar No. :-> ");
    scanf("%llu",&s1.adhr);
    getchar(); 
    printf("  Enter your PAN No. :-> ");
    scanf("%[^\n]",s1.pan);
    getchar();
    printf("  Enter your address :-> ");
    scanf("%[^\n]",s1.adrs);
    getchar();
    printf("\n    *********---------------  your account is created scuessfully   ---------------*********\n");
    s1.bal=0;
    s[i]=s1;
    printf("::::::::::::::::::::::::::::   Your Account Number is %d  ::::::::::::::::::::::::::::  \n",s[i].acc_no);
    i++;
    info(s1);

}

void info(struct acc s3)
{   
    printf("                              ~<<  WELCOME TO MS BANK OF INDIA >>~               \n");
    printf("                                   1.  Create New Account....       \n");
    printf("                                   2.  Already has account....      \n");
    printf("                                   3.  Exit....                     \n\n");
    printf("                                   Enter your choise :- ");
    scanf("%d",&ch);  
    swit(s3);
}
void alrdyact(struct acc s7)
{   
    //display(s7); 
    //printf("%d",s7);
    test(); 
}

void swit(struct acc s5)
{
    
    switch(ch)
    {
        case 1:
        {
            ctact(s5);
            break;
        }
        case 2:
        {
            alrdyact(s5);
            break;
        }
        case 3:
        {
            printf("                   ~~ Thanks for connecting with MS BANK OF INDIA  ~~");  
            break;
        }
        default:
        {
            printf("                                   Wrong choise!!  enter a valid choise\n\n");
            info(s5);
            break;
        }

    }
}
void display(struct acc s8)
{
    //struct acc s1;
    printf("+----------------------------------------+-------------------------------------------------+\n");
    printf("|                            account No  | %d                                              \n",s8.acc_no);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    
    printf("|                                  Name  | %s                                              \n", s8.name);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    //getchar();
    printf("|                         father's name  | %s                                              \n", s8.fname);
    printf("+----------------------------------------+-------------------------------------------------+\n");
   //getchar();
    printf("|                         mother's name  | %s                                              \n", s8.mname);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    //getchar();
    printf("|                           contact No.  | %lld                                             \n",s8.mob);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    printf("|                            Aadhar No.  | %lld                                              \n",s8.adhr);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    printf("|                               PAN No.  | %s                                              \n",s8.pan);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    printf("|                                Adress  | %s                                               \n",s8.adrs);
    printf("+----------------------------------------+-------------------------------------------------+\n");
    printf("|                       Current Balance  | %f                                              \n",s8.bal);
    printf("+----------------------------------------+-------------------------------------------------+\n\n\n");
    
}
void ctact(struct acc s6)
{
    input(s6);
}
void main()
{ 
    printf("%d",i);
    info(s[i]);
}
