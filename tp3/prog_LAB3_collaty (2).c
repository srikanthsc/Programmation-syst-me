#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    FILE *file=NULL ;
if(argc < 2){
printf("mettre un argument <file>");
exit(0);
}

    file = fopen(argv[1], "w");


if (file !=NULL)
{
fputs("<sc_user> \n",file);
system(" echo $USER ");
fputs("<sc_date>",file);
system("date '+%Y_%m_%d'\n");
fputs("</sc_date>",file);
fputs("<sc_days>",file);
system("date '+%d'\n");
fputs("</sc_days",file);
fputs("<sc_clock>",file);
system("date '+%R'\n");
fputs("/sc_clock",file);
fputs("<sc_UID>",file);
system("id -u");
fputs("</sc_UID>",file);
fputs("<sc_random-password>",file);
system("pwgen 10 1");
fputs("</sc_random-password>",file);
fputs("</sc_user>",file);


system("ls -l prog_LAB3_collaty.c");
fclose(file);
    }
    return 0;
}
