#include <stdio.h>

// Function to display the menu
void showMenu() {
    printf("\n========== MENU ==========\n");
    printf("Code\tItem\t\tPrice\n");
    printf("1\tbutter sandwich\tRs. 250\n");
    printf("2\tgrill sandwich\tRs. 150\n");
    printf("3\tPasta\t\tRs. 120\n");
    printf("4\tchess sandwich\tRs. 100\n");
    printf("5\tCoffee\t\tRs. 80\n");
    printf("==========================\n");
}

int main()
 {
    int item, quantity;
    char moreOrder;
    float totalBill = 0;

    
    do
     {
        showMenu();  
        
        printf("Enter the item code you want to order: ");
        scanf("%d", &item);

        
        printf("Enter quantity: ");
        scanf("%d", &quantity);

       
        switch(item) 
        {
            case 1:
                totalBill += 250 * quantity;
                printf("You ordered %d butter sandwich(s).\n", quantity);
                break;
            case 2:
                totalBill += 150 * quantity;
                printf("You ordered %d grill sandwich(s).\n", quantity);
                break;
            case 3:
                totalBill += 120 * quantity;
                printf("You ordered %d Pasta(s).\n", quantity);
                break;
            case 4:
                totalBill += 100 * quantity;
                printf("You ordered %d chess sandwich(es).\n", quantity);
                break;
            case 5:
                totalBill += 80 * quantity;
                printf("You ordered %d Coffee(s).\n", quantity);
                break;
            default:
                printf("Invalid choice. Please select a valid item.\n");
        }

        
        printf("Do you want to order more? (Y/N): ");
        scanf(" %c", &moreOrder);  
      

    } while (moreOrder == 'Y' || moreOrder == 'y');
    void showMenu() 
    {
    printf("\n========== MENU ==========\n");
    printf("Code\tItem\t\tPrice\n");
    printf("1\tbutter sandwich\tRs. 250\n");
    printf("2\tgrill sandwich\tRs. 150\n");
    printf("3\tPasta\t\tRs. 120\n");
    printf("4\tchess sandwich\tRs. 100\n");
    printf("5\tCoffee\t\tRs. 80\n");
    printf("==========================\n");
}


    // Display final bill
    printf("\n========== BILL ==========\n");
    printf("\nThank you for your order!\n");
    printf("\n==========================\n");
    printf("Your total bill is: Rs. %.2f\n", totalBill);
    printf("your item is:%d\n",item);
    printf("your quantity is:%d\n",quantity);
    printf("\n==========================\n");
    printf("Please visit again!\n");

}