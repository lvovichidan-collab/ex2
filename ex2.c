#include <stdio.h>

int main() {
    // MAIN MENU LOOP


    int gameNum=1, cnt=0;

    while (gameNum > 0 && gameNum <= 6) {

        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");
        scanf("%d", &gameNum);



            while (gameNum > 6 || gameNum < 1) {
                    printf("Invalid option, please try again\n");
                    printf("Welcome to our games, please choose an option:\n");
                    printf("1. Ducky's Unity Game\n");
                    printf("2. The Memory Game\n");
                    printf("3. Professor Pat's Power Calculation\n");
                    printf("4. The Duck Parade\n");
                    printf("5. The Mystery of the Repeated Digits\n");
                    printf("6. Good Night Ducks\n");
                    scanf(" %d",&gameNum);

        }
        switch (gameNum) {
            // TASK 1: Ducky's Unity Game
            case 1: {

                int inputNum, coinCount = 0;

                printf("please enter a positive number:\n");
                scanf(" %d", &inputNum);

                while (inputNum <= 0) {
                    printf("Invalid number, please try again\n");
                    printf("please enter a positive number:\n");
                    scanf(" %d", &inputNum);
                }

                while (inputNum > 0) {
                    if (inputNum % 2 == 0) {
                        inputNum = inputNum / 2;
                    } else {
                        coinCount = coinCount + 1;
                        inputNum = inputNum / 2;
                    }
                }

                printf("Ducky earns %d corns\n", coinCount);
                break;
            }

            // TASK 2: The Memory Game
            case 2:
            {

                int numDucks, quackOption;
                long quackList = 0;

                printf("please enter the number of ducks:\n");
                scanf("%d", &numDucks);

                while (numDucks <= 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &numDucks);
                }

                printf("you entered %d ducks\n", numDucks);

                for (int i = 0 ; i < numDucks ; i++) {
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n" , i + 1);
                    scanf("%d", &quackOption);
                    while (quackOption < 0) {
                        printf("Invalid number, please try again\n");
                        scanf(" %d",&quackOption);
                    }
                    quackList = quackList << 1;
                    quackList = quackList | quackOption;
                }

                for (int i = 0 ; i < numDucks ; i++) {
                    if ((quackList >> (numDucks - i - 1)) & 1) {
                        printf("duck number %d do Quak\n" , i + 1);
                    } else {

                        printf("duck number %d do Sh...\n" , i + 1);
                    }
                }
                break;
            }

            // TASK 3: Professor Pat's Power Calculation
            case 3: {

                int baseNum, exponentVal, resultPower = 1;

                printf("please enter the number\n");
                scanf("%d", &baseNum);

                while (baseNum < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &baseNum);
                }

                printf("please enter the exponent\n");
                scanf("%d", &exponentVal);

                while (exponentVal < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &exponentVal);
                }

                for (int i = 0; i < exponentVal ; i++) {
                    resultPower = resultPower * baseNum;
                }
                printf("your power is: %d\n" , resultPower);
                break;
            }

            // TASK 4: The Duck Parade
            case 4: {

                int numDucks;

                printf("please enter number of ducks:\n");
                scanf("%d", &numDucks);

                while (numDucks < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &numDucks);
                }
                while (numDucks>0) {

                  for (int i = 0 ; i < numDucks && i < 10 ; i++) {
                      printf("    _ ");
                  }
                    printf("\n");

                    for (int i = 0 ; i < numDucks && i < 10 ; i++) {
                        printf(" __(o)>");
                    }
                    printf("\n");

                    for (int i = 0 ; i < numDucks && i < 10 ; i++) {
                        printf(" \\___) ");
                    }
                   numDucks = numDucks-10;
                    printf("\n");
                }

                break;

            }


            case 5: {
                // Renamed variables to camelCase
                int inputNum, currentDigit = 0;

                printf("please enter number\n");
                scanf("%d", &inputNum);

                while (inputNum <= 0) {
                    printf("Invalid option, please try again\n");
                    scanf("%d", &inputNum);
                }

                while (inputNum > 0) {
                    long tempNum = inputNum / 10; // Renamed variable
                    currentDigit = inputNum % 10;

                    while (tempNum > 0) {
                        if (tempNum % 10 == currentDigit) {
                            printf("%d appears more than once!\n ", currentDigit);
                            break;
                        }
                        tempNum = tempNum / 10;
                    }
                    inputNum = inputNum / 10;
                }
                break;
            }

            // TASK 6: EXIT
            case 6: {
                printf("Good night! See you at the pond tomorrow.\n");
                break;
            }

            // Adding mandatory default block (REQUIRED)
            default: {
                break;
            }
        }
        if (gameNum == 6) {
            break;
        }
    }
    return 0;
}