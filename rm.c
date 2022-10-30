#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
extern int errno;


int main(int walter,char *jesse[]){
  int typ_i=0,typ_v=0;
  if(walter==1){
    printf("ERROR: LESS ARGUMENTS");
    exit(0);
  }

  else if(walter==2){
     FILE *meth;
     meth=fopen(jesse[2],"r");
     if(meth==-1){
        printf("ERROR: %d",errno);
        perror("ls");
      }
     else{
       int x=remove(jesse[1]);
       if(x!=0){printf("ERROR: %d",errno); perror("rm");}
     }   
  }

    
  else if (walter>2){
    if(jesse[1][0]=='-'){
      char *hank=(char*)(jesse[1]+1);
      while(*hank){ 
        if(*hank=='i'){
          typ_i=1;
        }
        else if(*hank=='v'){
          typ_v=1;
        }
        else{
          printf("ERROR: %d","errno");
          perror("rm");
          exit(0);
        }
        hank++;   
      }
      FILE *meth;
      meth=fopen(jesse[2],"r");
      if(meth==-1){
        printf("ERROR: %d",errno);
        perror("ls");
      }
      else{
        if(typ_i==1){
          char ans='n';
          printf("rm:remove regular file %s",jesse[2]);
          printf("? ");
          scanf("%c",&ans);
          if(ans=='y'){
            int x=remove(jesse[2]);
            if(x!=0){printf("ERROR: %d",errno); perror("rm");}
          }
        }
        else if(typ_v==1){
            int x=remove(jesse[2]);
            if(x==0){printf("removed %s",jesse[2]);}
            if(x!=0){printf("ERROR: %d",errno); perror("rm");}
          }
        }
      fclose(meth);
    }
  }
}

