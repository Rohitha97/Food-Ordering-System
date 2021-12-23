#include <stdio.h>
#include <conio.h>

struct order{
    char name[50];
    int phoneno;
    int order_number;
    int number_of_food;
    int cost;
};

void items1();
void items2();
void items3();

struct order ord[10000];
int count=0,s_count=0,e,i,ch,n,in,qu;


int custdata(){
	  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("---------------------------------@-Cafe RwB-@-----------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
    printf ("\nPlease Enter Your Name: ");
    scanf("%s",&ord[count].name);
    printf ("\nPlease Enter Your Mobile Number: ");
    scanf("%d",&ord[count].phoneno);
	
	food();
}

int food(struct order ord[],int count){
	
	system("cls");
	  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("---------------------------------@-Cafe RwB-@-----------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   					L:
    				A:
                    printf("\n1.Drinks and Snacks\n\n2.Main Course\n\n3.Dessert\n\n");
                    printf("\n\t\tEnter Choice: ");
                    scanf("%d", &ch);
                    switch(ch)
                    {
                        case 1: 
                        system("cls");
                        system ("COLOR C");
                        items1(ord,count);
                        break;
                        
                        case 2:
						system("cls");
						system ("COLOR D"); 
                        items2(ord,count);      
                        break;
                        
                        case 3:
						system("cls"); 
						system ("COLOR 6"); 
                        items3(ord,count); 
                        break;
                         
                        default: printf("Invalid Choice !!!\n"); goto A;
                    }
	
}

int order1 ()
{

    ord[count].order_number=1+count;
    
    ord[count].number_of_food=n;
    ord[count].cost=0;
    ord[count].number_of_food = 0;
    
   
    printf ("How many items you want to order? ");
    scanf ("%d",&n);

    while (n--){
        printf ("\nEnter chosen item code: ");
        scanf ("%d", &in);

        switch(in){
    case 11 : {
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Burger----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost +=(180*qu);
        break;
    }
    case 12 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Hot dogs----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (180*qu);

        break;
    }
    case 13 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Fried Chicken----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (550*qu);
        break;
    }
    case 14 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Grilled Chicken----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
   
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (250*qu);
        break;
    }
    case 15 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Egg Roll----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (50*qu);
        break;
    }
    case 16 :{
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Chicken Roll----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (60*qu);
        break;
    }
    case 17 : {
         printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Oreo Shake----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (140*qu);
        break;
    }
    case 18 : {
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Cold Coffee----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (70*qu);
        break;
    }
    case 19 : {
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Pepsi----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (50*qu);
        break;
    }
    case 20 :{
         printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Coke----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (50*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again!!!\n");
        n++;
    }
        }
    }
    char t;
    printf ("\nDo you want to order anything else?(y/n): ");
    scanf(" %c",&t);
    printf ("\n");
    if (t == 'y' || t == 'Y')
       food(ord,count);
        system("cls");
    printf ("\n\n********************************************************************************\n");   
    printf ("\n\t\t\tNumber of food ordered %d\n",ord[count].number_of_food);
    printf ("\n\t\t_____Thank you %s for your order_____\n\n\t\t\t  Your bill is Rs.%d\n\n\t\tPlease wait while we prepare the food\n\n", ord[count].name,ord[count].cost);
   
	printf ("\n********************************************************************************\n");   
	count ++;
}


int order2 ()
{

    ord[count].order_number=10000+count;
    
    ord[count].number_of_food=n;
    ord[count].cost=0;
    ord[count].number_of_food = 0;
    
    level:
    printf ("How many items you want to order? ");
    scanf ("%d",&n);

    while (n--){
        printf ("\nEnter chosen item code: ");
        scanf ("%d", &in);

        switch(in){
    case 11 : {
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Rice and Curry----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost +=(180*qu);
        break;
    }
    case 12 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Chicken Pizza----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (1250*qu);

        break;
    }
    case 13 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Fried Rice----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (350*qu);
        break;
    }
    case 14 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Lump Rice----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
   
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (450*qu);
        break;
    }
    case 15 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Biryani----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (400*qu);
        break;
    }
    case 16 :{
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----String Hopper----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (150*qu);
        break;
    }
    case 17 : {
         printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Bread----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (100*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again!!!\n");
        n++;
    }
        }
    }
    char t;
    printf ("\nDo you want to order anything else?(y/n): ");
    scanf(" %c",&t);
    printf ("\n");
    if (t == 'y' || t == 'Y')
       food(ord,count);
        system("cls");
    printf ("\n\n********************************************************************************\n");   
    printf ("\n\t\t\tNumber of food ordered %d\n",ord[count].number_of_food);
    printf ("\n\t\t_____Thank you %s for your order_____\n\n\t\t\t  Your bill is Rs.%d\n\n\t\tPlease wait while we prepare the food\n\n", ord[count].name,ord[count].cost);
   
	printf ("\n********************************************************************************\n");   
	count ++;
}


int order3 ()
{

    ord[count].order_number=10000+count;
    
    ord[count].number_of_food=n;
    ord[count].cost=0;
    ord[count].number_of_food = 0;
    
  //  level:
    printf ("How many items you want to order? ");
    scanf ("%d",&n);

    while (n--){
        printf ("\nEnter chosen item code: ");
        scanf ("%d", &in);

        switch(in){
    case 11 : {
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Ice Cream----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost +=(100*qu);
        break;
    }
    case 12 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Pudding----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (150*qu);

        break;
    }
    case 13 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Fruit Salad----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
    
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (80*qu);
        break;
    }
    case 14 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Yoghurt----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
   
        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (50*qu);
        break;
    }
    case 15 :{
          printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Cupcake----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (80*qu);
        break;
    }
    case 16 :{
        printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Watalappan----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (150*qu);
        break;
    }
    case 17 : {
         printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2----Curd----\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");

        printf("Please enter the quantity: ");
        scanf("%d",&qu);

        ord[count].number_of_food +=qu;
        ord[count].cost += (100*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again!!!\n");
        n++;
    }
        }
    }
    char t;
    printf ("\nDo you want to order anything else?(y/n): ");
    scanf(" %c",&t);
    printf ("\n");
    if (t == 'y' || t == 'Y')
       food(ord,count);
        system("cls");
    printf ("\n\n********************************************************************************\n");   
    printf ("\n\t\t\tNumber of food ordered %d\n",ord[count].number_of_food);
    printf ("\n\t\t_____Thank you %s for your order_____\n\n\t\t\t  Your bill is Rs.%d\n\n\t\tPlease wait while we prepare the food\n\n", ord[count].name,ord[count].cost);
   
	printf ("\n********************************************************************************\n");   
	count ++;
}



int receive ()
{	
	  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("--------------------------------@-Cafe RwB-@------------------------------------\n");
      printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
    if (count==0){
        printf ("\n\n\tPlease order first\n\n");
   		printf ("\n********************************************************************************\n");   
        return;
    }

    else if (s_count==count){
        printf ("\n\n\tAll order served\n\n");
       	printf ("\n********************************************************************************\n");   

        return;
    }	

    printf ("\n\n\t\tOrder no. %d by %s is ready\n\n",ord[s_count].order_number,ord[s_count].name);
    printf ("\t\t\tEnjoy your meal\n\n");
    printf ("\n********************************************************************************\n");   
    s_count++;
}
int display ()
{
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("--------------------------------@-Cafe RwB-@------------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
    printf ("\n\nTotal order taken                        : %d\n\n",(count));
    printf ("Total number of order served             : %d\n\n",s_count);
    printf ("Number of Currently waiting to be served : %d\n\n",(count-s_count));
    printf ("Currently preparing food for order n     : %d\n\n", ord[s_count].order_number);
}

void items1(struct order ord[],int count)
{
		  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("---------------------------------@-Cafe RwB-@-----------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
   	printf ("\n********************************************************************************\n");  
    printf("\n...............................Drinks and Snacks................................\n\n\n");

    printf("Item Code#   Description-------------------------------------------Price(Rs.)\n\n");

    printf("[11]---------Burger------------------------------------------------180\n");
    printf("[12]---------Hot dogs----------------------------------------------180\n");
    printf("[13]---------Fried Chicken-----------------------------------------550\n");
    printf("[14]---------Grilled Chicken---------------------------------------250\n");
    printf("[15]---------Egg Roll----------------------------------------------50\n");
    printf("[16]---------Chicken Roll------------------------------------------60\n");
    printf("[17]---------Oreo Shake--------------------------------------------140\n");
    printf("[18]---------Cold Coffee-------------------------------------------70\n");
    printf("[19]---------Pepsi-------------------------------------------------50\n");
    printf("[20]---------Coke--------------------------------------------------50\n\n");
   
   	printf ("\n********************************************************************************\n\n");  
	   
	order1(); 

}

void items2(struct order ord[],int count)
{
		  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("---------------------------------@-Cafe RwB-@-----------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
   	printf ("\n********************************************************************************\n");  
    printf("\n..............................Main Course.......................................\n\n\n");

    printf("Item Code#   Description-------------------------------------------Price(Rs.)\n\n");

    printf("[11]---------Rice and Curry----------------------------------------180\n");
    printf("[12]---------Chicken Pizza-----------------------------------------1250\n");
    printf("[13]---------Fried Rice--------------------------------------------350\n");
    printf("[14]---------Lump Rice---------------------------------------------450\n");
    printf("[15]---------Biryani-----------------------------------------------400\n");
    printf("[16]---------String Hopper-----------------------------------------150\n");
    printf("[17]---------Bread-------------------------------------------------100\n");
   
   	printf ("\n********************************************************************************\n\n");   
   	
   	order2();

}

void items3(struct order ord[],int count)
{
		  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("---------------------------------@-Cafe RwB-@-----------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
   	printf ("\n********************************************************************************\n");  
    printf("\n...................................Dessert......................................\n\n\n");

    printf("Item Code#   Description-------------------------------------------Price(Rs.)\n\n");

    printf("[11]---------Ice Cream---------------------------------------------100\n");
    printf("[12]---------Pudding-----------------------------------------------150\n");
    printf("[13]---------Fruit Salad-------------------------------------------80\n");
    printf("[14]---------Yoghurt-----------------------------------------------50\n");
    printf("[15]---------Cupcake-----------------------------------------------80\n");
    printf("[16]---------Watalappan--------------------------------------------150\n");
    printf("[17]---------Curd--------------------------------------------------100\n");
   
   	printf ("\n********************************************************************************\n\n");   

	order3();
}


int main ()
{

		system("cls");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf ("-----------------------------Welcome To Cafe RwB--------------------------------\n");
     printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
   
   	
    	while (1){
        printf ("\n\n1. Order\n2. Serve\n3. Display \n4. Exit the program\n\n\n\tEnter The Choosen Number: ");

        int in;
        scanf ("%d", &in);
        switch (in){
            case 1 : {
            	system("cls");
            	system ("COLOR 2");
                custdata();
                break;
            }
            case 2 : {
            	system("cls");
            	system ("COLOR F");
                receive();
                break;
            }
            case 3 : {
            	system("cls");
            	system ("COLOR 3");
                display();
                break;
            }
            case 4 : {
            	system("cls");
                system ("COLOR C");
                  printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
				printf ("--------------------------------@-Cafe RwB-@------------------------------------\n");
    			 printf ("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
	
				printf("\n\n****************************-----THANK YOU-----*********************************\n\n");
				printf("***************----Feeling HUNGRY ? Call or Walk-In Cafe RwB----****************\n");
                printf ("################################################################################\n\n");
                printf ("                       Programming Fundamentals Project\n\n");
                printf ("                                Horizon Campus     \n\n");
                printf ("                        DEVELOPED BY Rohitha & Piyumi\n\n");
                return 0;
            }
        }
    }
}
