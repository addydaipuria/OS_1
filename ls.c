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
extern int errno;

void meth(const char *drake,int type_l,int type_a)
{
	struct dirent *dababy;
	DIR *lilbaby = opendir(drake);
	if (!lilbaby)
	{
		if (errno = ENOENT)
    { 
      printf("ERROR: %d",errno);
			perror("ls");
    }
    else{
      printf("ERROR: %d",errno);
      perror("ls");
    } 
		exit(0);
	}
	while ((dababy = readdir(lilbaby)) != NULL)
	{
		if (!type_a && dababy->d_name[0] == '.') {continue;}
		printf("%s  ", dababy->d_name);
		if(type_l) {printf("\n");}
	}
	if(!type_l) {printf("\n");}
}
int main(int walter, const char *jesse[])
{ 
  int typ_a=0,typ_l=0;
	if (walter == 1)
	{
		meth(".",typ_l,typ_a);
	}
	else if (walter == 2)
	{
		if (jesse[1][0] == '-')
		{
			char *hank = (char*)(jesse[1] + 1);
			while(*hank){
				if(*hank == 'a') { typ_a = 1;}
        else if(*hank == 'l') { typ_l = 1;}
				else{
          printf("ERROR: %d",errno);
					perror("ls");
					exit(0);
				}
				hank++;
			}
			meth(".",typ_l,typ_a);
		}
	}
	return 0;
}