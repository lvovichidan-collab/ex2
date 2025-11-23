/******************
Name:
ID:
Assignment:
*******************/

#include <stdio.h>

int main() {
    // MAIN MENU LOOP

    printf("Welcome to our games, please choose an option:\n");
    printf("1. Ducky's Unity Game\n");
    printf("2. The Memory Game\n");
    printf("3. Professor Pat's Power Calculation\n");
    printf("4. The Duck Parade\n");
    printf("5. The Mystery of the Repeated Digits\n");
    printf("6. Good Night Ducks (Exit)\n");
    int Gamenum;
    scanf("%d",&Gamenum);
    while (Gamenum>6  || Gamenum<1) {
        printf("invalid input, please try again\n");
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks (Exit)\n");
        printf("invalid input, please try again\n");
        scanf("%d",&Gamenum);
    }
    // TASK 1: Ducky's Unity Game
    while (Gamenum>0 && Gamenum<=6) {
        switch (Gamenum) {
            case 1: {
                int num1,count1=0;
                printf("please enter a positive number\n");
                scanf(" %d",&num1);
                while (num1<0) {
                    printf("please enter a positive number\n");
                    scanf(" %d",&num1);
                }
                while (num1>0) {
                    if (num1%2==0) {
                        num1=num1/2;
                    }
                    else {
                        count1=count1+1;
                        num1=num1/2;
                    }
                }
                printf("Ducky earns %d coins",count1);
                break;
            }
                // TASK 2: The Memory Game
            case 2:
            {
                int Numducks,Quack;
                long list =0;
                printf("Please enter the number of ducks: ");
                scanf("%d",&Numducks);
                while (Numducks<0) {
                    printf("invalid input, please try again\n");
                    scanf("%d",&Numducks);
                }

                for (int i=0 ; i<Numducks ; i++) {
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n" , i+1);
                    scanf("%d",&Quack);
                    list = list<<1;
                    list = list | Quack;
                }
                for (int i=0 ; i<Numducks ; i++) {
                    if ((list>>(Numducks - i -1)) & 1)
                    { printf("duck %d do QUAK\n" , i+1); }
                    else {
                        printf("duck %d do sh...,\n" , i+1);
                    }
                }
                break;
            }
                // TASK 3: Professor Pat's Power Calculation
            case 3: {
                int Numexpo, Exponent,Sum=1;
                printf("please enter the number\n");
                scanf("%d",&Numexpo);
                while (Numexpo<0) {
                    printf("invalid input, please try again\n");
                    scanf("%d",&Numexpo);
                }
                printf("please enter the exponent\n");
                scanf("%d",&Exponent);
                while (Exponent<0) {
                    printf("invalid input, please try again\n");
                    scanf("%d",&Exponent);
                }
                for (int i=0; i<Exponent ; i++) {
                    Sum=Sum*Numexpo;
                }
                printf("your power is %d" ,Sum);
                break;
            }
                // TASK 4: The Duck Parade
            case 4: {
                int Numducks;
                printf("please enter the number of ducks\n");
                scanf("%d",&Numducks);
                while (Numducks<0) {
                    printf("invalid input, please try again\n");
                    scanf("%d",&Numducks);
                }
                for (int k=Numducks/10 ; k>=0 ; k--) {

                    if (k>0) {
                        for (int i=0 ; i<10; i++) {
                            printf("  _     ");
                        }
                        printf("\n");
                        for (int i=0 ; i<10; i++) {
                            printf("_(0)>   ");
                        }
                        printf("\n");
                        for (int i=0 ; i<10; i++) {
                            printf("\\__)    ");
                        }
                    }

                    if (k==0) {
                        for (int i=0 ; i<Numducks%10; i++) {
                            printf("  _     ");
                        }
                        printf("\n");
                        for (int i=0 ; i<Numducks%10; i++) {
                            printf("_(0)>   ");
                        }
                        printf("\n");
                        for (int i=0 ; i<Numducks%10; i++) {
                            printf("\\__)    ");
                        }
                    }
                    printf("\n");
                }
                break;

            }
                // TASK 5: The Mystery of the Repeated Digits
            case 5: {
                int Num, singledit=0;
                printf("please enter number\n");
                scanf("%d",&Num);
                while (Num<0) {
                    printf("invalid input, please try again\n");
                    scanf("%d",&Num);
                }
                while (Num>0) {
                    long Num1=Num/10;
                    singledit = Num%10;
                    while (Num1>0) {
                        if (Num1%10==singledit) {
                            printf("%d appears more then once\n ",singledit);
                            break;
                        }
                        Num1 = Num1/10;

                    }
                    Num = Num/10;
                }
                break;
            }
                // TASK 6: EXIT
            case 6: {
                printf("Good night! see you at the pond tomorrow");
                break;
            }
        }

        if (Gamenum ==6)
        {  break;
        }
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks (Exit)\n");
        scanf("%d",&Gamenum);
        while (Gamenum>6  || Gamenum<1) {
            printf("invalid input, please try again\n");
            printf("Welcome to our games, please choose an option:\n");
            printf("1. Ducky's Unity Game\n");
            printf("2. The Memory Game\n");
            printf("3. Professor Pat's Power Calculation\n");
            printf("4. The Duck Parade\n");
            printf("5. The Mystery of the Repeated Digits\n");
            printf("6. Good Night Ducks (Exit)\n");
            printf("invalid input, please try again\n");
            scanf("%d",&Gamenum);
        }
    }
        return 0;

}
