#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char b;
	int a=7,ch,r,num,i;
	printf("\t\t\t\t YOUR NAME : ");
	gets(name);
	printf("\t\t\tHELLO %s WELCOME TO THE GAME OF LUCK.\n\t\t\tPLEASE READ THE RULE OF GAME GIVEN BELOW:-\n",name);
	printf("\n\t\t\t-----************GAME RULE**********-----\n\n\t\t\tYou have 7 chances in this game to guess \n\t\t\tthe secret number which is generated ny computer.\n\t\t\tBy each round your chance will be reduce by one.\n\t\t\tIf you guss the correct number you will won the game.");
	printf("\n\n\t\t\t-----**********BEST OF LUCK**********------\n");
	printf("\nCHOOSE THE LEVEL GIVEN BELOW :-\nPRESS 1 FOR LOW LEVEL.\nPRESS 2 FOR MIDDLE LEVEL.\nPRESS 3 FOR HIGH LEVEL.\nENTER THE LEVEL OF GAME : ");
	scanf("%d",&ch);
	printf("\nYou have 7 choices. \n");
	switch(ch)
	{
		case 1:
		{
			srand(time(0));
	        r=rand()%10;
	        for(i=1;i<=7;i++)
	        {
	        	printf("\nEnter the number : ");
	        	scanf("%d",&num);
	        	if(num==r)
	        	{
	        		printf("WELL PLAYED!\nYOU WON THE GAME.\n%d is the secret number.\nThanks for playing...",num);	
	        		break;
				}
				else
				{
					printf("\nNope, %d is not the right number.",num);
					if(r>num)
					{
						printf("\nThe secret number is greater than the number you have chosen.");
					}
					else
					{
						printf("\nThe secret number is smaller than the number you have chosen.");
					}
					printf("\n%d choices left\n",--a);
					if(a==0)
					{
					   printf("You loose the game.\nBETTER LUCK NEXT TIME!\nThanks for playing...");
				    }
				}
	        	
			}
			break;
		}
		case 2:
		{
			srand(time(0));
	        r=rand()%100;
	        for(i=1;i<=7;i++)
	        {
	        	printf("\nEnter the number : \n");
	        	scanf("%d",&num);
	        	if(num==r)
	        	{
	        		printf("WELL PLAYED.\nYOU WON THE GAME.\n%d is the secret number.\nThanks for playing...",num);	
				}
				else
				{
					printf("\nNope, %d is not the right number",num);
					if(r>num)
					{
						printf("\nThe secret number is greater than the number you have chosen");
					}
					else
					{
						printf("\nThe secret number is smaller than the number you have chosen");
					}
					printf("\n%d choices left",--a);
				}
	        	
			}
			break;
	    }
	    case 3:
	    {
	    	srand(time(0));
	        r=rand()%150;
	        for(i=1;i<=7;i++)
	        {
	        	printf("\nEnter the number : \n");
	        	scanf("%d",&num);
	        	if(num==r)
	        	{
	        		printf("WELL PLAYED.\nYOU WON THE GAME.\n%d is the secret number.\nThanks for playing...",num);	
				}
				else
				{
					printf("\nNope, %d is not the right number",num);
					if(r>num)
					{
						printf("\nThe secret number is greater than the number you have chosen");
					}
					else
					{
						printf("\nThe secret number is smaller than the number you have chosen");
					}
					printf("\n%d choices left",--a);
				}
	        	
			}
			break;
		}
		
	}
	return 0;
}

