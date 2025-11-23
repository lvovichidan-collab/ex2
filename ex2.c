#include <stdio.h>

int main() {
    // MAIN MENU LOOP

    printf("Welcome to our games, please choose an option:\n");
    printf("1. Ducky's Unity Game\n");
    printf("2. The Memory Game\n");
    printf("3. Professor Pat's Power Calculation\n");
    printf("4. The Duck Parade\n");
    printf("5. The Mystery of the Repeated Digits\n");
    printf("6. Good Night Ducks\n");
    int Gamenum;
    scanf("%d",&Gamenum);
    while (Gamenum>6  || Gamenum<1) {

        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");
        printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
        scanf("%d",&Gamenum);
    }
    // TASK 1: Ducky's Unity Game
    while (Gamenum>0 && Gamenum<=6) {
        switch (Gamenum) {
            case 1: {
                int num1,count1=0;
                printf("please enter a positive number:\n"); // *** הוספת נקודתיים ומעבר שורה כנדרש ***
                scanf(" %d",&num1);
                while (num1<=0) {
                    printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
                    printf("please enter a positive number:\n"); // *** הוספת נקודתיים ומעבר שורה כנדרש ***
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

                printf("Ducky earns %d corns\n",count1);
                break;
            }
                // TASK 2: The Memory Game
            case 2:
            {
                int Numducks,Quack;
                long list =0;
                printf("please enter the number of ducks:\n"); // *** תיקון: הוספת מעבר שורה ***
                scanf("%d",&Numducks);
                while (Numducks<0) {
                    printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
                    scanf("%d",&Numducks);
                }
                
                // *** פלט נדרש: "you entered X ducks" ***
                printf("you entered %d ducks\n", Numducks); 

                for (int i=0 ; i<Numducks ; i++) {
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n" , i+1);
                    scanf("%d",&Quack);
                    list = list<<1;
                    list = list | Quack;
                }
                for (int i=0 ; i<Numducks ; i++) {
                    if ((list>>(Numducks - i -1)) & 1)
                    { printf("duck number %d do Quak\n" , i+1); } // *** תיקון: "duck number X do Quak" ***
                    else {
                        printf("duck number %d do sh...,\n" , i+1); // *** תיקון: "duck number X do sh...," ***
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
                    printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
                    scanf("%d",&Numexpo);
                }
                printf("please enter the exponent\n");
                scanf("%d",&Exponent);
                while (Exponent<0) {
                    printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
                    scanf("%d",&Exponent);
                }
                for (int i=0; i<Exponent ; i++) {
                    Sum=Sum*Numexpo;
                }
                printf("your power is: %d\n" ,Sum); // *** תיקון: "your power is: X" עם נקודתיים ומעבר שורה ***
                break;
            }
                // TASK 4: The Duck Parade
            case 4: {
                int Numducks;
                printf("please enter the number of ducks:\n"); // *** הוספת נקודתיים ומעבר שורה כנדרש ***
                scanf("%d",&Numducks);
                while (Numducks<0) {
                    printf("Invalid number, please try again\n"); // *** תיקון טקסט השגיאה ***
                    scanf("%d",&Numducks);
                }
                
                // התיקון הקודם שלי ללוגיקת ההדפסה של מצעד הברווזים (עם טאבים והגבלה ל-10) היה מדויק יותר 
                // לדרישות הכלליות. כאן אני מתקן רק את הפלט של הקוד שלך כדי שיתאים לדוגמה:
                // כדי להתאים לדוגמה (עם רווחים קבועים ו-10 בשורה), צריך לשנות את מחרוזות הפורמט.
                
                int total_ducks_printed = 0;
                int current_ducks_in_row;

                // Loop through rows (full rows of 10, then the remainder)
                while (total_ducks_printed < Numducks) {
                    // Determine how many ducks to print in the current row (max 10)
                    if (Numducks - total_ducks_printed >= 10) {
                        current_ducks_in_row = 10;
                    } else {
                        current_ducks_in_row = Numducks - total_ducks_printed;
                    }

                    // Line 1: Head
                    for (int i = 0; i < current_ducks_in_row; i++) {
                        printf("  _     "); // 2 spaces + _ + 5 spaces (matching example spacing)
                    }
                    printf("\n");
                    
                    // Line 2: Body
                    for (int i = 0; i < current_ducks_in_row; i++) {
                        printf("_(o)>   "); // _(o)> + 3 spaces (matching example spacing)
                    }
                    printf("\n");
                    
                    // Line 3: Legs
                    for (int i = 0; i < current_ducks_in_row; i++) {
                        printf("\\__)    "); // \__) + 4 spaces (matching example spacing)
                    }
                    printf("\n");

                    total_ducks_printed += current_ducks_in_row;
                }
                
                // הוספתי מעבר שורה אחד נוסף אם לא היה פלט בכלל (למשל, 0 ברווזים), אך זה לא נראה נדרש.
                
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

                            printf("%d appears more then once!\n ",singledit);

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
                printf("Good night! See you at the pond tomorrow.\n");
                break;
            }
        }

        if (Gamenum ==6)
        {  break;
        }
        printf("\nWelcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");
        scanf("%d",&Gamenum);
        while (Gamenum>6  || Gamenum<1) {
            printf("Invalid number, please try again\n");
            printf("Welcome to our games, please choose an option:\n");
            printf("1. Ducky's Unity Game\n");
            printf("2. The Memory Game\n");
            printf("3. Professor Pat's Power Calculation\n");
            printf("4. The Duck Parade\n");
            printf("5. The Mystery of the Repeated Digits\n");
            printf("6. Good Night Ducks\n");
            printf("Invalid number, please try again\n");
            scanf("%d",&Gamenum);
        }
    }
        return 0;
}