#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void affichetableau(char ** sentence, int nbmot, int max)
{

	int i,j;
       
	for(i=0;i<nbmot;i++)
	{


	printf("%s\n", sentence[i]);

	}
}


int main(void)
{
char **words;
char sentence[150];
int i=0,j=0,k=0, max=0, word=1;
printf("Entrez votre phrase:");
fgets(sentence,150,stdin);
for(i=0;i<=strlen(sentence);i++)
{
	if(sentence[i]==' ')
	{
		word++;
	if(k>max)
		{
			max=k;
		}
		k=0;
	}
	k++;

}

words=(char**)malloc(sizeof(char*)*word);
for(i=0;i<word;i++)
{
words[i]=(char*)malloc(sizeof(char)*max);
}
i=0;
j=0;
k=0;
while(sentence[i]!='\0')
{
 	if(sentence[i]!=' ')
	{
		words[j][k++]=sentence[i];
	}
	else
	{
		words[j++][k]='\0';
		k=0;
	}
i++;
}
affichetableau(words, word, max);
return 0;
}
