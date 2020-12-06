#include <stdlib.h>
#include <stdio.h>

void salutation(char chaine[],int tailechaine);



int main ()

{
	
	printf("comment t'appelle tu?\n");
	char prenom[10]="         ";
	scanf("%s",prenom);


	salutation(prenom,10);

	
}



void salutation(char chaine[],int tailechaine)

{
	int i=0;
	printf("Bienvenue sur notre site ");
	while(i<tailechaine)

{

	printf("%c",chaine[i]);
	i++;
}
	printf("\n");

}




