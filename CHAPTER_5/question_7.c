// # Laptop purchase bills claculation

#include <stdio.h>
int main()
{
    const laptop_price = 10000;
    const sipping_charge = 200;
    const delevery_charge = 1000;
    int order_qty = 0;

    printf("Enter the number of laptop you what to purchase: \n");
    scanf("%d", &order_qty);

    int total_bills = (laptop_price * order_qty) + sipping_charge + delevery_charge;
    printf("Thanku for purchase laptop from ABC laptop store\n ");
    printf("Your totalbills amount is: %d\n", total_bills);
    printf("Your order will be delevered within 3 to 5 working days\n");
    printf("Thank you for shopping with us!\n");

    return 0;
}