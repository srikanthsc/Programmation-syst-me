
                 
#include<stdlib.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>


void fichier();

void fichier_argument();

void fichier_introuvable();

int main(int argc, char *argv[]){
 char aff[100];
    
 if (argc ==  1){ 
 fichier_argument();
 }
 if (argc >= 3){

  fichier_introuvable();
 }

  else
 { 
   fichier();
  sprintf(aff,"ls  -l  %s",argv[1]);   
  system(aff);
  }
}


void fichier()
{
printf("les droits du fichiers \n");

}


void fichier_argument()
{
printf("mettre un argument\n");
}

void fichier_introuvable()
{
printf("fichier introuvable \n");
}

