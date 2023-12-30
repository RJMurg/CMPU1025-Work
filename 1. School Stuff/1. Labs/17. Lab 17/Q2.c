/*
    Given a Struct write statements to
    a. Assign values to each member of stock_items
    b. Input values to each member of stock_item
    c. Display values of each member of stock_item.

    Made by: Ruán Murgatroyd | C22400846
    Created: 21/03/23
    OS: Windows 10 Pro
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

struct stock_record{
    int no;
    char description[21];
    float price;
    int qty;
};

int main(){
    int running = 1;
    int choice = 0;

    // Part A. Assigning values to each member of StockItem.
    struct stock_record stockItem = {5, "Delicious Egg!", 4.6, 6};

    // Part B. Inputting Values to each member of StockItem.
    while(running == 1){
        printf("Select A Choice:\n1. Stock Number\n2. Stock Description\n3. Stock Price\n4. Stock Quantity\n5. View current Item information\n6. Quit\n");

        scanf("%d", &choice);

        switch(choice){
            case 1:{
                printf("Enter the Stock Item Number:\n");
                int itemNo;

                while(getchar() != '\n');
                scanf("%d", &itemNo);

                stockItem.no = itemNo;

                printf("Item number changed to: %d.\n\n", stockItem.no);

                break;
            }

            case 2:{
                char itemDesc[21];
                printf("Enter a 20-character stock description for the item:\n");
                while(getchar() != '\n');
                fgets(itemDesc, 20, stdin);

                strcpy(stockItem.description, itemDesc);

                printf("Item description changed to: '%s'.\n\n", stockItem.description);

                break;
            }

            case 3:{
                float itemPrice;
                printf("Enter a price for the item:\n");

                scanf("%f", &itemPrice);

                stockItem.price = itemPrice;

                printf("Item price set to e%.2f.\n\n", stockItem.price);

                break;
            }

            case 4:{
                int itemQuantity;
                printf("Enter item quantity:\n");

                scanf("%d", &itemQuantity);

                stockItem.qty = itemQuantity;

                printf("Item quantity set to: %d.\n\n", stockItem.qty);

                break;
            }

            case 5:{
                printf("Current data on Stock Item:\nNumber: %d\nDescription: %s\nPrice: e%.2f\nQuantity: %d\n\n", stockItem.no, stockItem.description, stockItem.price, stockItem.qty);

                break;
            }

            case 6:{
                printf("Goodbye!");
                running = 0;

                break;
            }

            default:{

                printf("Invalid choice!\n\n");

                break;
            }
        }
    }
    
    return 0;
} // end main