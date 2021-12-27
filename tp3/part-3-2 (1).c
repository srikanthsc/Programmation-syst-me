#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void date_fonction();

int main(int argc , char *argv[]){
 struct stat inode_information;
 struct stat  fileinfo;  
 
 stat("file.txt",&fileinfo);
  
 
 if (argc != 2){
 fprintf(stderr, "mettre un argument : %s <file>\n",argv[0]);

}    
 if(stat(argv[1], &inode_information) == -1){
 fprintf(stderr, "fichier inexistant %s : %s\n", argv[1],strerror(errno));
return 0;

    }
 printf(" %lu\n", inode_information.st_ino);
 date_fonction();
 return 0;
}

void date_fonction(){

struct stat file;
 stat("file1",&file);
 printf("  creation du fichier:  %s", ctime(&file.st_ctime) );

    

}


