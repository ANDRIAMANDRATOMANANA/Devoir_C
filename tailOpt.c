#include <stdio.h>
#include <stdlib.h>
#include "tailOpt.h"
#include "tailOption.c"



int main(int argc,char *argv[])
{
	FILE *f=NULL;
	char ch[100];
	int v;
	int line;
	openn(&f,argv[3]);
	cast(argv[2]);
	v=cast(argv[2]);
	//compteur_ligne(ch,v,f);
	line=compteur_ligne(ch,v,f);
	openn(&f,argv[3]);
	affichage(line,ch,f);
	
	
	return 0;
}







