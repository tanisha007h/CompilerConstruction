#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char code[100][100],decider[10]={""},invariant[100][100];
	char *p,*q;
	int i,temp=1,n=0,flag=0,j=0,index=0,m=0;
	printf("Enter the code\n");
	while(temp!=0)
	{
		scanf("%[^\n]s",code[i++]);
		scanf("%d",&temp);
	}
	n=i;
	for(i=0;i<n;i++)
	{
		p=strstr(code[i],"for");
		q=strstr(code[i],"while");
		if(p)
		{
			decider[0]=code[i][4];
			break;
		}
		else if(q)
		{
			decider[0]=code[i][6];
			break;
		}
		else
		printf("No loop exists\n");
	}
		
		for(j=i+1;j<n;j++)
		{
			if(strstr(code[j],decider)==NULL)
			{
				flag=j;
				strcpy(invariant[m],code[j]);
				printf("The loop invariant code is\n");
				printf("%s\n",invariant[m]);
				m++;
			}
		}
		for(index=0;index<flag;index++)
		{printf("%s\n",code[index]);
		}
		for(index=flag+1;index<n;index++)
		{printf("%s\n",code[index]);
		}
	
				
			

return 0;
}
