#include<stdio.h>
void findfirst(char);
int n;
char production[100][100];
int main()
{ 
	
	int i,j=0;
	
	printf("Enter the number of productions\n");
	scanf("%d",&n);
	printf("Enter the production in the form of A>alpha\n");
	printf("Use $ for epsilon\n");
	for(i=0;i<n;i++)
	{

		printf("\nEnter the production no %d\n",i);
		
		scanf("%s",production[i]);
		while(production[i][j]=='#')
		{
		
			scanf("%s",production[i]);
		}

	}

	printf("The first for each non terminal involved is\n");
	printf("NONTERMINAL\t FIRST\n");
	
	
	for(i=0;i<n;i++)
	{
		printf("%c\t\t ",production[i][0]);
		
		
		if((production[i][2]>='a')&&(production[i][2]<='z'))
		{
			
			printf("{%c}\n",production[i][2]);
		}
		else if(production[i][2]=='$')
		{
			printf("{$}\n");

		}
		else
		{
			findfirst(production[i][2]);
		}
	printf("\n");

	}


return 0;
}
void findfirst(char c)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(production[i][0]==c)
		{
			if((production[i][2]>='a')&&(production[i][2]<='z'))
			{
				printf("{%c}\n",production[i][2]);
			}
			else if(production[i][2]=='$')
			{
				printf("{$}\n");

			}
			else
			{
				findfirst(production[i][2]);
			}
	}

	}
}
