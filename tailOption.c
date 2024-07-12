#include <stdio.h>
#include <stdlib.h>
#include "tailOpt.h"
void openn(FILE **f,char *argv3)
{
	*f=fopen(argv3,"r"); //ouvrir le fichier dans argv[3]
	if(*f==NULL)
	{
		printf("error");
		exit(1);
	}
}
int cast(char *argv2)
{
	int v;
	v=atoi(argv2);
	return v;
}
int compteur_ligne(char *ch,int v,FILE *f)
{
	int line=0;
	while(feof(f)!=1)
	{
		fgets(ch,100,f);
		line++;
	}
	line=line-v;
	fclose(f);
	return line;
}
void affichage(int line,char *ch,FILE *f)
{
	int c=0;
	while(feof(f)!=1)
	{
		fgets(ch,100,f);
		c++;
		if(c>=line)
		{
			printf("%s",ch);
		}
	}
	fclose(f);
}
	
