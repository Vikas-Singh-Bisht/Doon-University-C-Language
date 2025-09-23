/*IF ELSE AND SWITCH



1 Check wether a number is positive,negative
#include<stdio.h>
int main(){
int a=4;
if (a>0)
printf("Num is positve");
else if (a==0)
printf("Num is zero");
else
printf("Num is Negative");
return 0;
}*/



/*
2 Check weather a number is even or odd 
#include<stdio.h>
int main(){
    int a =5;
    if (a%2==0)
    printf("num is even");
    else printf("num is odd");
return 0;
}



/* 3 find the largest of two nums
#include<stdio.h>
int main(){
int a=4,b=6;
if (a<=b)
    printf("Num b is the largest");
else printf("Num a is the largest");
return 0;
}*/





/*4 Find the largest of three nums
#include<stdio.h>
int main(){
int a=4,b=3,c=8;
if (a>b&&a>c)
    printf("a is greatest");
else if (a<b&&b>c)
    printf("b is greatest");
else
printf("c is greatest");
return 0;
}*/

/*5 Check weather a character is a vowel or not 
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enter a character :");
   
    scanf("%c",&ch);
    ch=tolower(ch);
    if (ch == 'a'||ch == 'e'||ch=='i'||ch=='o'||ch=='u'||ch=='s')
    printf("The given input is an vowel");
    else if (!isalpha(ch)) 

    printf("ivalid input");
    else printf("not a vowel");
    return 0;

}
*/


/* 6 Check weather a year is leap year or not 
#include<stdio.h>
int main (){
    int yr;
    printf("Enter the year : ");
    scanf("%d",&yr);
    if (yr%4==0)
    printf("Leap year");
    else printf("not a leap year");
return 0;
}




/* 7. Chechk weather an character is an alphabet or not 
#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("enter a character");
scanf("%c",&ch);
if (isalpha(ch))
printf("Character is alphabet");
else printf("not an alphabet");
return 0;
}
*/




/* 8. Check weather a character is uppercase ,lowercase,digit ,or special symbol
#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("enter a character");
scanf("%c",&ch);
if (isalpha(ch))
{printf("Alphabet");
    if (islower(ch))
     printf("Lowercase");
    else printf("Uppercase");
}
else if (isdigit(ch))
    printf("Character is digit");
else printf("Character is an special character");
return 0;
}*/





/*  9 . Find absolute value of a number */
#include<stdio.h>
int main (){
    float a;
    printf("Enter a real number : ");
    scanf("%f",&a);
    
    if (a>=0)
    printf("The absolute vakue is %f",a);
    if (a<=0)
    {a= a*(-1);
    printf("the absolute value is %f",a);}
return 0; 
    }