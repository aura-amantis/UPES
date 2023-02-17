/* Design a union ‘product’ to store the details of the product purchased 
like product name, price per unit, the number of quantities purchased, and 
amount spent. Get the name, price per unit, and the number of quantities of 
the product purchased. Calculate the amount spent on the product and then 
display all the details of the procured product.
*/

#include <stdio.h>

int main()
{
	union product
	{
		char product_name[25];
		int quantity;
		float price,amount;
	};
	
	union product *t , p;
	int x,y;
	t = &p;
	
	printf("Enter the product name: ");
	scanf("%[^\n]s", p.product_name);
	printf("Product name: %s\n",t->product_name);

	printf("\nEnter the quantity: ");
	scanf("%d",&p.quantity);
	y = t->quantity;
	printf("Quantity: %d\n",t->quantity);
	
	printf("\nEnter the price: ");
	scanf("%f",&p.price);
	x = t->price;
	printf("price: %f\n",t->price);
	
	p.amount = x*y;
	printf("\nAmount: %f",t->amount);
	return 0;
}
