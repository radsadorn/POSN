#include <stdio.h>
#include <conio.h>

main ()
{
	int fixedcost=5,basecost=2,diameter;
	char size,extra;
	float extracost=0,area,cost,price;
	
	printf("Welcome to My Pizza Shop\n------------------------------\n");
	printf("Pizza's size : ");
	size = getche();
	if (size == 's') {
 		diameter = 10; }
	else if (size == 'm') {
 		diameter = 16; }
	else if (size == 'l') {
		diameter = 20;}
	area = (22 / 7) * ((diameter * diameter) / 4); 
	
	printf("\nExtra pepperoni (y/n)?: ");
		extra = getche();
			if (extra == 'y'){
 				extracost = extracost + 0.50;}
	printf("\nExtra cheese (y/n)?: ");
		extra = getche();
			if (extra == 'y') {
 				extracost = extracost + 0.25; }
	printf("\nExtra mushroom (y/n)?: ");
		extra = getche();
			if (extra == 'y'){
 				extracost = extracost + 0.30; }
	
	cost = fixedcost + (basecost * area) + (extracost * area); 
	price = 1.5 * cost; 
	printf("\n\n------------------------------\nYour order costs %.2f baht.\nThank you.",price);
	
	getch();
	
}
