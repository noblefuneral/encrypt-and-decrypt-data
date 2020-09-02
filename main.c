/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void check(char str4[100]);
int main()
{
   int i, x,z,r;
   char str1[100];
   char str2[100];
   char str3[100];
   char str4[100];
   char str5[100];

   printf("\nPlease enter a phone number:\t");
   gets(str1);
    printf("\nPlease enter a bank account:\t");
   gets(str2);
    printf("\nPlease enter email id:\t");
   gets(str3);
   printf("Enter your password that should satisfy the following criteria\n1.password should contain atleast one capital letter\n2. should have one digit from(o-9)\n3. atleast one special charecter($,*,#,&)\n4. length should be atleast 6\n");
    printf("\nPlease enter a password:\t");
   gets(str4);
   
   void check(char str4[100])
{
    char c;
    int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(str4);
    if(len<6)
    flag1=1;
    else
    {
        for(i=0;i<len;i++)
        if((str4[i]>=48&&str4[i]<=58))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;

        for(i=0;i<len;i++)
        if((str4[i]>=65&&str4[i]<=90))
        {
            flag3=0;

            break;
        }
        else
        flag3=1;

        for(i=0;i<len;i++)
        if(str4[i]=='#'||str4[i]=='$'||str4[i]=='*'||str4[i]=='&')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;


    }
    
    if(flag1==1||flag2==1||flag3==1||flag4==1)
    {
        printf("\nWrong password\n");
         printf("\nPlease enter a password:\t");
   gets(str4);
    }
    else
    printf("your password is successfully created\n");
}
   
   
   printf("your data has been encrypted\t");

   {  for(i = 0; (i < 100 && str1[i] != '\0'); i++)
     str1[i] = str1[i] + 3;
     printf("\nEncrypted phone number is: %s\n", str1);
   }
   {  for(i = 0; (i < 100 && str2[i] != '\0'); i++)
     str2[i] = str2[i] + 3;
     printf("\nEncrypted bank account is: %s\n", str2);
   }
   {  for(i = 0; (i < 100 && str3[i] != '\0'); i++)
     str3[i] = str3[i] + 3; 
     printf("\nEncrypted email id is: %s\n", str3);
   }
   
    printf("enter password to decrypt\n ");
    gets(str5);
    r = strcmp(str4, str5);
if(r==0)
{
  {
     for(i = 0; (i < 100 && str1[i] != '\0'); i++)
     str1[i] = str1[i] - 3;
     printf("\nDecrypted phone number is: %s\n", str1);
     
 }
 
 {
     for(i = 0; (i < 100 && str2[i] != '\0'); i++)
     str2[i] = str2[i] - 3;
     printf("\nDecrypted bank account is: %s\n", str2);
     
 }
 
 {
     for(i = 0; (i < 100 && str3[i] != '\0'); i++)
     str3[i] = str3[i] - 3;
     printf("\nDecrypted email id is: %s\n", str3);
     
 }
}
else
printf("wrong password");
}



