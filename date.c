#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>
#include<time.h>
extern int errno;


int main(int walter, const char *jesse[])
{ 
  int typ_u=0,typ_r=0;
  time_t drake;
  struct stat dababy;
  struct tm * carti;
	if (walter == 1)
	{
		time ( &drake );
    carti = localtime(&drake);
    if(carti==NULL){printf("ERROR: %d",errno); perror("date");}
    else
      printf ("%s",asctime (carti));
	}
	else if (walter >1)
	{
		if (jesse[1][0] == '-')
		{
			char *hank = (char*)(jesse[1] + 1);
			while(*hank){
				if(*hank == 'u') { typ_u = 1;}
        else if(*hank == 'r') { typ_r = 1;}
				else{
					printf("ERROR: %d",errno);
					perror("date");
				}
				hank++;
			}
      if(typ_u==1){
        time ( &drake );
        carti = localtime(&drake);
        if(carti==NULL){printf("ERROR: %d",errno); perror("date");}
        else
        printf ("%s",asctime (carti));
      }
      else if(typ_r==1){
        FILE *heylo;
        heylo=fopen(jesse[2],"r");
        if(heylo==-1){printf("ERROR: %d",errno); perror("date");}
        else{
          stat(jesse[2], &dababy);
          printf("%s", ctime(&dababy.st_mtime));
        }
      }	
		}
	}
	return 0;
}