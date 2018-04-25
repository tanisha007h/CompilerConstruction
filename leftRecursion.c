#include<stdio.h>
#include<string.h>
char production[100][100],alpha[50],beta[50];
int breaker;
char nonterminal;
int main()
{
	int n,i,j,length,k,m=0;
	printf("Enter the number of productions\n");
	scanf("%d",&n);
	printf("Enter the production in the form of A->Alpha|Beta\n");
	printf("Enter $ for epsilon\n");
	for(i=0;i<n;i++)
	{	
		printf("Enter the production no %d\n",i);
		scanf("%s",production[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
		
		length=strlen(production[i]);
		if(production[i][0]==production[i][3])
		{
			printf("The given production is left recursive\n");
			printf("%s",production[i]);
		
		printf("\nThe grammar without left recursion would be\n");
		nonterminal=production[i][0];
		printf("%c->",nonterminal);
		for(j=0;j<length;j++)
		{
			if(production[i][j]=='|')
			{
				breaker=j;
				k=j+1;
				strcpy(beta,&production[i][k]);
			}
		}
		
		printf("%s",beta);
		printf("%c'\n",nonterminal);
		printf("%c'->",nonterminal);
		k=4;
		m=0;
		while(k!=breaker)
		{
			alpha[m]=production[i][k];
			k++;
			m++;
				
		}
		printf("%s",alpha);
		printf("%c'",nonterminal);
		printf("|$");
		printf("\n");
		}
	}
	

	return 0;
	
	

}

