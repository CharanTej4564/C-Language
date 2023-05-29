#include <stdio.h> //pre processor directives
#include <stdlib.h>
#define HISNAME "Raju"
#define HERNAME "Rani"
#include "CoolTest.h"


int main(){

    printf ("%s is a good boy\n", "Raju");
    printf ("%s is a good girl\n", "Rani");
    //comment
    /*multi line comments
     multi lines       */
     printf("\n%s is %d years old\n", "raju", 25);
     printf("%s is %d years old\n", "rani", 21);

     //decimal numbers we use %f

    printf("\n%f is a decimal number\n ", 2.123456789); // the decimal number will calculate only 6 numbers

    printf("%.3f is 3 digit decimal number \n", 2.123456); // it will calculate only 3 digits because we add .3 between %f

    int age1;
    int age2;
    int currentYear;
    int birthYear1;
    int birthYear2;
     currentYear=2023;
     birthYear1=1998;
     birthYear2 = 2002;
     age1=currentYear - birthYear1;
     age2=currentYear - birthYear2;

     printf("\nRaju is %d years old\n", age1);
     printf("rani is %d years old\n", age2);

     //String Terminator

     char texT[17] = "Raju like Fruits\0"; //there will be definately \0 after sentece or word or string is termed as String Terminator
     printf("\n%s\n", texT);


// name replacing

     char namE []= "Ravi";
     printf ("\n%s is a student\n", namE);

            /*inside[] we have put a number that we replacing
            for example: we are replacing v to n
             v is in place 2
             beacuse the first leter "R is 0" "a is 1" "v is 2" "i is 3"
             so , we have to calcute by this method*/


         namE [2] = 'n'; //repalcing letter should be single qouted

         printf("%s is a doctor\n", namE);

         // complete string change

         char fooD[] = "IceCream";
         printf("\nRaju want to eat %s\n", fooD);

         strcpy( fooD , "Cake" );
         printf("Rani want to eat %s\n", fooD);

         // String or word changing

         char *verB[] = {"play" , "eat" , "work" , "dance" , "sleep" , "study" , "read" };
         //in this case "play is o", "eat is 1", "work is 2", "dance is 3", "sleep is 4", "study is 5", "read is 6"

         printf("\nRaju like to %s\n", verB[2]);
         // here we are changing "work" means 2 into "learn" so, we have put 2 inside the square brackets[]
         verB [2] ="learn";

         printf ("Ravi like to %s\n", verB [2]);


         //pre processor directive

         printf ("\nHis name is %s\n", HISNAME);
         printf("Her name is %s\n", HERNAME);

         // using created pre processer directive or header file
#include "CoolTest.h"

        int Age2x = 2;
        int Age3x = 3;
        int Result1;
        int Result2;
        Result1 =HERAGE * Age2x;
        Result2 =HISAGE * Age3x;

        printf("\nHis name is %s and he is %d years old\n", HISNAME, Result2);
        printf("Her name is %s and she is %d years old\n", HERNAME, Result1);

// user interfacing

/*char persoN1[30];
char joB[30];
char placE[30];
int olD;
int siblings;


printf("\nWhat is your Name?\n");
scanf("%s", persoN1);

printf("\nWho are you?\n");
scanf("%s", joB);

printf(" \nHow old are you?\n");
scanf("%d", &olD); //using "&" is Mandatory while sacning a number

printf("\nHow many siblings do you have?\n");
scanf("%d", &siblings);

printf("\nMy name is %s\n I am a %s\n Iam %d years old\n And I have %d siblings\n", persoN1, joB, olD, siblings);*/


// introduction of mathematics

float a = 3;
float b = 4;
float c = a + b;
float d = a - b;
float e = a * b;
float f = a / b;

printf("\nthe sum of 4 and 3 is %.2f\n", c);
printf("the difference between 4 and 3 is %.2f\n", d);
printf("the product of 4 and 3 is %.2f\n", e);
printf("the repeated substraction of 4 and 3 is %.2f\n", f);


// finding average


        /*float Telugu, Hindi, English, Maths, gScience, SocialS, totalMO,maxMarks, marksPercentage;

        printf("Enter the marks obtained in Telugu:\n");
        scanf("%f", &Telugu); // &(and) is mandatory

        printf("Enter the marks obtained in Hindi:\n");
        scanf("%f", &Hindi); // &(and) is mandatory

        printf("Enter the marks obtained in English:\n");
        scanf("%f", &English); // &(and) is mandatory

        printf("Enter the marks obtained in Maths:\n");
        scanf("%f", &Maths); // &(and) is mandatory

        printf("Enter the marks obtained in gScience:\n");
        scanf("%f", &gScience); // &(and) is mandatory

        printf("Enter the marks obtained in SocialS:\n");
        scanf("%f", &SocialS); // &(and) is mandatory

        totalMO = (Telugu + Hindi + English + Maths + gScience + SocialS);
        maxMarks = 600;
        marksPercentage = (totalMO / maxMarks) * 100;

        printf("TotalMarks = %f\n Marks% = %.2f", totalMO, marksPercentage);

        if (marksPercentage >= 90){
            (printf("\nGrade A"));

        } else if (marksPercentage >= 80){
                   (printf("\nGrade B"));
        } else if (marksPercentage >= 70){
                   (printf("\nGrade C"));
                       }
*/

        //finding copound interest

        /*float Price , Rateofinterest , Time , CI;

        printf("\nWhat is the amount of Loan?\n");
        scanf("%f", &Price);

        printf("What is the Interest of Loan?\n");
        scanf("%f", &Rateofinterest);

        printf("What is the Time of Loan?\n");
        scanf("%f", &Time);

        CI = (Price*((Rateofinterest/100)+1)*((Rateofinterest/100)+1));
        //CI = (Price*(1 + Rateofinterest)*Time - Price);
        //CI = (Price*(1 + Rateofinterest/100*Time));

        printf("\nYour Compound Interest is %.2f\n", CI);*/
















    return 0;
}
