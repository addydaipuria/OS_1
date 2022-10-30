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

int main(int walter, const char *jesse[])
{ 
  int typ_v=0,typ_m=0;
	if (walter == 1)
	{
		printf("LESS ARGUEMENTS ERROR");
    exit(0);
	}
  else if(walter>1 && jesse[1][0]!='-'){
    
    int temps=1;
    int meth;
    while(jesse[temps]!=NULL){
      meth=mkdir(jesse[temps],0777);
      if(!meth){
        printf("created successfully- directory '%s'\n",jesse[temps]);
        temps++;
        }
      else{ printf("ERROR: %d",errno); perror("mkdir"); exit(0);}
      }
    
  }
  
	else if (walter>2)
	{
		if (jesse[1][0] == '-')
		{
			char *hank = (char*)(jesse[1] + 1);
			while(*hank){
				if(*hank == 'v') { typ_v = 1;}
        else if(*hank == 'm') { typ_m = 1;}
				else{
					printf("ERROR: %d",errno);
          perror("mkdir");
					exit(0);
				}
				hank++;
			}
			if(typ_v==1){
        int temp=2;
        int meth;
        while(jesse[temp]!=NULL){
          meth=mkdir(jesse[temp],0777);
          if(!meth){
            printf("created successfully- directory '%s'\n",jesse[temp]);
            temp++;
          }
          else{ printf("ERROR: %d",errno); perror("mkdir"); exit(0);}
        }
      }
      else if(typ_m==1){
        int meth;
          meth=mkdir(jesse[2],jesse[3]);
          if(!meth){
              printf("created successfully- directory '%s'\n",jesse[2]);
            }
            else {printf("ERROR: %d",errno); perror("mkdir"); exit(0); }
        
      }		
    }
  }
	return 0;
}