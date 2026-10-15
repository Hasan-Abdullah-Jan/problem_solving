#include <stdio.h>

int main(){

    int input;
    char choice;
    bool flag= false;
    
    do {
        printf("CHOOSE ACTION :-  1: Sell Item, 2: Restock, 3: Exit ");
        scanf("%d", &input);
        if(input==1)
        {
            printf("Item Sold\n");
        }
        else if(input==2)
        {
            printf("Restocked\n");
        }
        else if(input==3)
        {
            printf("Exited\n");
        }
        else
        {
            printf("Invalid Input\n");
        }
        printf("WANT TO PERFORM ANOTHER TRANSACTION? (y,n): ");
        scanf("%d", &input);
        if (choice == 'n' || choice == 'N') {
            flag = false;
        }


    } while (flag == true);
}