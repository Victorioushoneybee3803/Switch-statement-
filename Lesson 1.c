#include <stdio.h>

#include <stdlib.h>





//Switch statement is like "if and else" but better or little complicated//

int main()

{

    int operator;

    printf("^-^Welcome To Simple Calculator^-^\n");

    printf("Choose Which Mode you want to use +_+:\n");

    printf("[1] Addition (+)\n");

    printf("[2] Subtraction (-)\n");

    printf("[3] Multiplication (x)\n");

    printf("[4] Division\n");

    printf("Type Here:");

    //Here you can see the operator in this part//

    //            !here!            //

    scanf("%d", &operator);

    //to show that you choose either 1 or 4 in your calculator you need to put it on the switch//

    printf("\n");



    int num1, num2;

    printf("Enter First Number:");

    scanf("%d", &num1);

    printf("Enter Second Number:");

    scanf("%d", &num2);



    int result;

    //here this is the switch where magic or hell happens//

    //as you can see the operator is here, but why?/

    //well because this area is what we other called the calling just like if and else//

    switch (operator)

    //as we put a number of what operator we will use either 1 or 4//

    {

    //here for example in case 1//

    //this case will automatically use if you choose one in the operator//

    //so case 1 is addition which it will program the formula of addition//

    case (1):

        //as Number 1 +  Number 2//

        result= num1+num2;

        //after that you need to put the result in the next line so it can show the answer//

        //which its in this line//

        printf("Answer: %d", result);//why no & sign?//

        //i don't know, there will be an error//

        //try putting & sign you'll see XD//



        //this part is what we call a break//

        //break helps your program to not join the other cases on your output//

        //try deleting some break and you'll see//

        break;

    case (2):

        result= num1-num2;

        printf("Answer: %d", result);

        break;

    case (3):

        result= num1*num2;

        printf("Answer: %d", result);

        break;

    case (4):

        result= num1/num2;

        printf("Answer: %d", result);

        break;

    //Default is a optional here int switch statement//

    //you can use default if you want to say something that do not exist in your program//

    //run the program and try it, either choose 5 to 100//

    default:

        printf("Do you see you can only choose from 1 to 4\n");

        printf("what a dumb eyes you got -_-#");

    }

//wish this tutorial helps you on understanding the switch statement there are other program you can practice using it//

//let me give you an practice activity on switch statement//

// 1. make a program that print a day of week using switch statement//

// 2. write a c program to check if its vowel or not//

// 3. write a c program that check if which two number are greater//





//       GOOD LUCK     //



    return 0;

}

    
