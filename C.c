/* This is Print program * To Run this command from terminal type at Dekstop$ gcc -o a.out C.c&&./a.out    ; Check out P.py for Python equivalent  */

#include <stdio.h>
#define Step 20
#define Lower 0
#define Upper 20
#define Upper1 30

main()
{
   printf("Hello, Goody Morning\n"); /* Print comment */
   char elect;
   printf("Add your choice:\n Z-Count Line/tabs/blanks\n Y-Unit Converter\n X-Line/words/charcaters counting\n");
   elect=getchar();

   if(elect=='X'||elect=='x')
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
        }
        else if (state=='0')
        {
         state=1;
         nw=nw+1;
        }
       
    }
    printf("\nLines=%d,Words=%d,Characters=%d\n",nl,nw,nc);
    }    

    if(elect=='Z'||elect=='z')
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
    }
   if(elect=='Y'||elect=='y')
    {
        printf("    F       C       C       F\n")    ;
	float c=0,f=0,i=0;
        int x1=0,y1,z1,l1=0,s1=0,t1=0;
        int p;
        for (i=0;i<=Upper;i++)                /* For Loop*/
           {       
           printf ("%5.0f %10.3f",f,(5*(f-32))/9);
           printf ("%5.0f %10.3f\n",c,(9*c+32)/5);
            f=f+Step,c=c+Step; 
           }

        f=0;
       
       while (f<=Upper*20)                /* While Loop*/

       {
            c=(5*(f-32))/9;
            printf ("%5.0f %10.3f\n",f,c);
            f=f+(Step);
        }
    }

 
    else
    {
        int a,b,s ; 
        a=b=100 ;
        s=a+b ; /* Sum */
        printf ("s= %d\n",s);    	
        float x, y, z=10;
        x=z;    /* Float*/
        printf ("x=%3.2f,x=%5.2f \n x=%.5f \n",x,x,x);
        z=a+x ; /* Sum */
        printf ("c= %.3f\n",z); 
    }

	return 0;  /* Sample comment */
}
