#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	printf("enter username =");
	gets(a);
	printf("enter password =");
	gets(b);
	
	if(strcmp(a,"esha")==0)
	{
		if(strcmp(b,"esha@9999")==0)
		{
			printf("user successfully logging");
		}
		else 
		{
			printf("password entered is invaid");
		}

	}
	else 
	{
		printf("username entered is invaid");
	}
}
