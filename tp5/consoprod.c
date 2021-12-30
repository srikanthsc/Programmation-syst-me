//site consulter pour realiser le programme sont les suivantes:
//https://www.thecrazyprogrammer.com/2016/09/producer-consumer-problem-c.html
//https://www.geeksforgeeks.org/producer-consumer-problem-in-c/#:~:text=The%20producer%2Dconsumer%20problem%20is,use%20it%20as%20a%20queue.
//https://medium.com/@sohamshah456/producer-consumer-programming-with-c-d0d47b8f103f

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <sched.h>

#define SIZE_FIFO 7
#define NB_PROD 1
#define NB_CONSO 1

void menu();
int get();

// Structure Fifo communication entre consommateurs et producteurs
struct fifo{
 int tab[SIZE_FIFO];  // Tableau d'elements stockes
 int ptr_lecteur;   // Index de la prochaine case a lire
 int ptr_ecrivain;  // Index de la prochaine case a ecrire
 int nb_elem;        // Nombre d'element present dans la fifo
} fifo;
int mutex= 1;
int remplie= 0;
int vide= 0;
void prod(int *x);
void conso(int *x);


// Fonction principale
int main( int args , char argc [])
{
    int  n,z;
    int l= 1;
    int b=100;   
    int a=0;
 
    z = get();
    printf(" numero entre  %d et %d : %d",l,b,z);
    int delay(int);
    int sig(int);
    menu();
    while(1)
    {
        printf("\n entrez  votre  choix:\n");
        scanf("%d",&n);
        printf(">");
         sched_yield();
        switch(n)
        {
 case 6 : if ((mutex==1)&&(vide!=a))
        prod(&z);
 else
        printf("Buffer: remplie ");
     break;
 case 5 : if ((mutex==1)&&(remplie!=a))
                    conso(&z);
 else
        printf("Buffer: vide");
     break;
 case 4 :
         exit(1);
     break;
        }
    }
    return 1;
}

int delay(int p)
{
    return (--p);
}

int sig(int p)
{
    return(++p);
}
// Fonction de production
void prod(int *x)
{
    mutex=delay(mutex);
    remplie=sig(remplie);
    vide=delay(vide);
    *x++;
    printf("\nProducteur produit %d",*x);
    mutex=sig(mutex);
}
// Fonction de consommation
void conso(int *x)
{
    mutex=delay(mutex);
    remplie=delay(remplie);
    vide=sig(vide);
    printf("\nConsommater consomme  %d",*x);
    *x--;
    mutex=sig(mutex);
}
// Fonction d'initialisation de la fifo
void init_fifo(struct fifo *c){
}


void menu()
{ 
   int a = 6;
   int b = 5;
   int c = 4;
   printf("\n0.taper  %d pour le producteur"
           "\n1.taper  %d pour le consommateur"
            " \n2.taper %d pour quitter ",a,b,c);
}
// Fonction permettant d'inserer une valeur dans la fifo
void put(struct fifo *f,int a){
}



// Fonction permettant de recuperer une valeur depuis la fifo
int get(){

 srand((int)time(NULL));
int nb= rand() %102-1;
 return nb;
}
