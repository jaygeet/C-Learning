/* This is Print program * To Run this command from terminal type at THIS DIRECTORY $ gcc -o a.out C.c&&./a.out    ; Check out PfC.py for Python equivalent [ASCII IMP VALUES:space=32;'0'=48, A=65 Z=90; a=97 z=122;]*/
/*Queries
1) {Alphabets[c-'A']=Digits[c-'A']+1;} Not working
2) How to get rid of standard compiler warnings found everytime
3) DC0 isnot found in man ASCII table; while it is needed to construct alphabets from decimal in my system 
4)
*/


#include <stdio.h>
#define Step 20
#define Lower 0
#define Upper 100

int power(int, int);
void UnitConverter();float F2C (float);float C2F (float);void misc();void LWC();void Array();void LTB();char A2ZARRAY(int, int);
void FLL(); void copyline(char to[], char from[]);int geline(char [],int);

main()
{
   printf("\t Goody Morning\n"); /* Print comment */
   char elect,elect1;
   printf("Add your choice:\n Z-Count Line/tabs/blanks\n Y-Unit Converter\n X-Line/words/charcaters counting\n W-Array\n V-Find Longest Line\n");
   elect=getchar();



   if(elect=='V'||elect=='v')
      {
        char r[40];
        int k=20,i,j,y;
        i=geline(r,k);
        printf ("\nLine length is:%d\n",i);
        printf("\nLine=%s",r);
      }
   else if(elect=='W'||elect=='w')
        Array();
   else if(elect=='X'||elect=='x')
        LWC();
   else if(elect=='Y'||elect=='y')
       UnitConverter();  
   else if(elect=='Z'||elect=='z')
        LTB();
  
   
   else
      misc();

printf ("\tGood Night\n"); 
return 0;  /* Sample comment */

}


/*----------------------SUBROUTINES------------------------------*/

/* Find Longest Line */
/*void FLL()
{

return 0;
}
*/

int geline(char e[],int m)
{
char c;
int x=0;
printf("Start entering line:");
c=getchar();
 
for (x=0;c!=EOF;x++)
   {e[x]=c;c=getchar();}
//    while(c!=EOF)
//    {b[x]=c;    x=x+1;    c=getchar();    }

//b[x]='\0';

return x;

}

/*
int c=getchar();
int i;
for (i=0;i<lim-1 && c!=EOF && c!='n';++i)
    s[i]=c;
if (c=='n')
    { s[i]=c;
       ++i;
    }
s[i]='\0';
return i;

}

void copyline()
{

return 0;
}

/* Unit Converter#Y */

void UnitConverter()
{
  printf("    F       C       C       F\n")    ;
	    float c=0,f=0,i=0;
        int x1=0,y1,z1,l1=0,s1=0,t1=0;
        int p;
        for (i=0;i<=Upper;i=i+Step)                /* For Loop*/
           {       
           printf ("%5.0f %10.3f",f,F2C(f));
           printf ("%5.0f %10.3f\n",c,C2F(c));
            f=f+Step,c=c+Step; 
           }
       
        f=0;
        while (f<=Upper)                /* While Loop*/
        {
            c=(5*(f-32))/9;
            printf ("%5.0f %10.3f\n",f,c);
            f=f+(Step);
        }
   return 0;
}
float F2C(float f)
{ 
    float c;
    c=(5*(f-32))/9;
    return c;

}

float C2F(float c)
{
    float f;
    f=(9*c+32)/5;
    return f;
}
/* Misc#5 */
void misc()
{       int a,b,s ; 
        a=b=100 ;
        s=a+b ; /* Sum */
        printf ("s= %d\n",s);    	
        float x, y, z=10;
        x=z;    /* Float*/
        printf ("x=%3.2f,x=%5.2f \n x=%.5f \n",x,x,x);
        z=a+x ; /* Sum */
        printf ("c= %.3f\n",z); 

        int a1,b1;
        printf("Enter number <10:");
        b1=getchar();
        a1=b1-48;
        printf("2 raise to %d is:%d\n",a1,power(2,a1));
        return 0;
}

int power( int base, int n)
{
    int i, p=1;
    for (i=1; i<=n;i++)
        p=p*base;

    return p;

}


/* COUNT LINE WORD CHARACTERS #X */
void LWC()
{
int a,b,c,nl=0,nc=0,nw=0,state=0;    
    while((c=getchar())!=EOF)
    {  
       nc=nc+1; 
       if (c=='\n')
        {nl=nl+1;}
       if (c==' ' || c=='\n' || c=='\t')
        {
           state='0';
           nw=nw+1;
        }
        else if (state=='0')
        {
         state=1;
         nw=nw+1;
        }
    
    }
    printf("\nLines=%d,Words=%d,Characters=%d\n",nl,nw,nc);

    return 0;
}


/* Arrya#W */
void Array()
{
   int Digits[10],Alphabets[26],c,i ;
   int Space=0,NonSpace=0,Tab=0,NL=0;
   for (i=0;i<26;i++)
            {Digits[i]=0; Alphabets[i]=0;}
   while ((c=getchar())!=EOF)
    {
    
    if(c>='0'&&c<='9')  
            {Digits[c-'0']=Digits[c-'0']+1;}
    else if(c>='A'&&c<='Z'|| c>='a'&&c<='z')  
            {Alphabets[c-'A'||c-'a']=Alphabets[c-'A']+1;}
    else if (c==' ')
            { Space=Space+1; }
    else if (c=='\n')
            { NL=NL+1; }
    else if (c=='\t')
            { Tab=Tab+1; }
    else 
            { NonSpace=NonSpace+1;}
    }
   printf("\nSpaces=%d; Tabs=%d, NewLines=%d,Non-Spaces/Tab/NL=%d;\n",Space,Tab,NL,NonSpace);
   
   for (i=0;i<26;i++)
   {   
        char p;
        p=A2ZARRAY(i+1,1); // pass on argument "1"/"2" for first/seceond ABCD letter i.e. A2ZARRAY (xx,1/2)
    if (i<10)         
         printf("Digits[%d]=%d\t Alphabets[%c]=%d\n",i,Digits[i],p,Alphabets[i]);
    else     
         printf("Alphabets[%c]=%d\t",p,Alphabets[i]);
        
   } 
return 0;
}

/* COUNT LINES, TABS, BLANKS ETC. #Z */
void LTB()
    {
        float c=0,f=0,i=0;
        int x1=0,y1,z1,l1=0,s1=0,t1=0;
        int p;
        printf("Enter any character/word: ");
        
        while ((p=getchar())!=EOF)          /* Read text from keyboard and*/
            {
                putchar(p);                       /* write on screen */
    //          printf("Letter in Digits are:%d\n",p);
                if(p=='\n')                         /* Count no. of lines, tabs, blanks */
                    {++l1;}
                if(p=='\t')                         /* Count no. of lines, tabs, blanks */
                    {++t1;
                    printf("\b");
                    }
                if(p==32)                         /* Count no. of lines, tabs, blanks */
                    {++s1;}
                    
            }

        printf("Number of lines are :%d tabs are %d blanks are %d\n",l1,t1,s1);
        return 0;
    }

/* CONVERT DECIMAL INTO ALPHABETS */
char A2ZARRAY(int i, int j)
    {
        char c,d;
       
        if (j==1)
            {
              c=i+64;  
              return c;
            }
        else
            {              
               d=i+96; 
               return d;            
            }

    }



