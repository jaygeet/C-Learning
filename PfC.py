#~/Desktop $ python3 ./PfC.py     ; Checkout C.c for C equivalent 
#C-->P

#Queries
#1) Pending while loop uncomment it
#4) How to get it work  elif(p[p1]==32):   s1=s1+1; to sense space by integer 32 instead of ' '
#5) How to get more inputs insteaed of single line; a whole paragraph? input() function can take one line only at a time. there is no #provision for next line input in the same variable.

#-------------SUBROUTINES----------------------

# Misc.
def misc():
    a=b=100;
    s=a+b ; # Sum */
    print(s);
       
    z=10.2;
    x=z+s;    # Float*/
    print(x,z);
    z=a+x ; # Sum */
    print(z); 
    f=20;c=20;

#############################
#Unit Converter

def F2C(f):
    c=(5*(f-32))/9;
    return c;
def C2F(c):
    f=(9*c+32)/5;
    return f;
def UnitConverter():
    print("    F       C       C       F\n")
    c=0;f=0
    for i in range (0,101,20):  #For Loop
         print("{0: ^5}  {1:0.2f}  {2: ^5} {3:0.1f}".format(f,F2C(f),c,C2F(c)));   
         f=f+20;c=c+20; 
    f=0;
    while (f<=100):            #    /* While Loop*
            c=(5*(f-32))/9;
            print ("{0:}    {1:0.3f}".format(f,c));
            f=f+20;
#############################
# COUNT LINES, TABS, BLANKS ETC. #Z */
def LTB():
    c=f=i=0;
    x1=y1=z1=l1=s1=t1=p1=0;      
    p=input("Enter any char:")  #DUMMY LINE IN THIS SPECIFIC PROGRAM/APPLICATION.
    print(p);                       # /* write on screen */
    i1=len(p)
    while (p1<i1):  #        /* Read text from keyboard and*/
           if(p[p1]=='\n'):                       #  /* Count no. of lines, tabs, blanks */
              l1=l1+1
           elif(p[p1]=='\t'):                     # /* Count no. of lines, tabs, blanks */
              t1=t1+1;
              print("\b");
           elif(p[p1]==' '):                        # /* Count no. of lines, tabs, blanks */
              s1=s1+1;
           p1=p1+1
    
    print("Number of lines are :{} tabs are {} blanks are {} and total string character is {}\n".format(l1,t1,s1,i1))       
#############################
#/* Arrya#W */
def Array():
   for i in range(0,26,1):
            Digits[i]=0;Alphabets[i]=0
   c=input("Demo:")
   while (c!='D'):
    c=input("Enter character:")
    c1=int(c)
    if(c1>='0'& c1<='9'):
            Digits[c-'0']=Digits[c-'0']+1
    else:
       NonSpace=NonSpace+1
    print("\nSpaces={}; Tabs={}, NewLines={},Non-Spaces/Tab/NL={};\n".format(Space,Tab,NL,NonSpace));
'''    else if(c>='A'&&c<='Z'|| c>='a'&&c<='z')  
            {Alphabets[c-'A'||c-'a']=Alphabets[c-'A']+1;}
    else if (c==' ')
            { Space=Space+1; }
    else if (c=='\n')
            { NL=NL+1; }
    else if (c=='\t')
            { Tab=Tab+1; }
''' 
    

'''   
   for (i=0;i<26;i++)
   {   
        char p;
        p=A2ZARRAY(i+1,1); // pass on argument "1"/"2" for first/seceond ABCD letter i.e. A2ZARRAY (xx,1/2)
    if (i<10)         
         print("Digits[%d]=%d\t Alphabets[%c]=%d\n",i,Digits[i],p,Alphabets[i]);
    else     
         print("Alphabets[%c]=%d\t",p,Alphabets[i]);
        
   } 

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

'''

#---------------Main Code----------------------

print("Good Morning") # Print comment */
print("Add your choice:\n Z-Count Line/tabs/blanks\n Y-Unit Converter\n X-Line/words/charcaters counting\n W-Array\n V-Find Longest Line\n");
elect=input()

if(elect=='V'or elect=='v'):
      
 #        char r[40];
 #       int k=20,i,j,y;
 #       i=geline(r,k);
 #       printf ("\nLine length is:%d\n",i);
 #       printf("\nLine=%s",r);
             print("test1"); 
             print("test2"); 
elif(elect=='W'or elect=='w'):
        Array();
elif(elect=='X'or elect=='x'):
        LWC();
elif(elect=='Y'or elect=='y'):
       UnitConverter();  
elif(elect=='Z'or elect=='z'):
        LTB();
  
   
else:
      misc();

print("\tGood Night\n"); 

