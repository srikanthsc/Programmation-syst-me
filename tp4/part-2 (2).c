#include <unistd.h>
#include <stdlib.h>   
#include <sys/wait.h>      
#include <sys/types.h>
#include <signal.h> 
#include <stdio.h>
#include <string.h>


void handle_processus(int sig);
void processusfils();
void infoprocessus(); 



int main(int argc,char *argv[]) {
 char  chaine [255];
// int sec = 5;
 int x=0;
 pid_t i= -1;
 pid_t pidprocessus ;
 char clavier;
 char chaine2 []="taper la lettre p", lettre[100] = {0}; 
 char  str[90];
 int k = 1;
   
strcpy(lettre,chaine2);
printf("        -------------    \n  ");
printf("tp4\n");
printf("tuer le processus \n");
printf("ce programme permet de tuer le processus\n");
    printf ("id  programme : %d\n",(int)getpid ());
    
    if((pidprocessus = fork()) == i) {  //creation du processus avec la fonction fork()
 void  processusfils();
    }

    if (pidprocessus != x) {
printf ("information sur le   (processus) parent, id : %d \n", (int)getpid ());

printf ("Information sur le  (processus) fils : %d \n", (int )pidprocessus);
    }
    else
printf ("c'est le processus fils, id : %d \n", (int)getpid ());

printf ("c'est le ppid fils id : %d \n", (int)getppid ());

printf("processus Pere : je creer  un fils.\n");
    while(clavier != 'P')
    {
printf("Pere: attend qu'un signal arrive\n");

printf("------------------------\n");

printf("Fils: attend qu'un  signal arrive\n");
printf("COMMANDE : %s\n",chaine2); 
//sprintf(chaine,"attendre %d seconde",sec);
printf("      -------------   \n   ");
printf(">:");


scanf("%c",&clavier);

printf("commande saisie: %c\n",clavier);
puts ("attendre 5 seconde");
    }
    if(pidprocessus == x)
processusfils();
sleep(5);
printf(" processus Pere :envoie un signal a son  fils.\n");
    if(kill(pidprocessus, SIGUSR1) == i) {
printf("Erreur\n");
exit(1);
    }

    
    if(waitpid(pidprocessus, NULL, 0) == i) {
printf("Erreur processus fils\n");
exit(1);
    }

printf(" processus Pere : ok, le processus fils est inactif (terminer) \n");
printf("le processus fils  est bien mort et le pere quitte aussi cette duree de vie\n");
sprintf(str,"%d -  programme  terminer", k);
puts(str);

return 0;
}


void handler_processus(int sig) {
printf("statut");
printf("signal recu ok\n");
}

void processusfils() {
 int o = -1 , a = 0 , e=1;

struct sigaction act;

act.sa_handler = handler_processus;
sigemptyset(&act.sa_mask);
act.sa_flags = a;
    if(sigaction(SIGUSR1, &act, NULL) == a) {
printf("Erreur de  positionnement \n ");
printf("resaisir la commande \n");
printf(">:");
exit(e);
    }

printf("processus Fils : processus suspendu (pause)  et attend un signal...\n");
pause();
printf("processus Fils : ok ! la pause est fini, actif !\n");

exit(a);
}


void infoprocessus()
{
int w =1;
printf("Erreur ");
exit(w);
}


