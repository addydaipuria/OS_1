#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

char* cocaine;
char* pot;
char **saulgoodman(char *mike){
    char*kid;
    int skyler=0;
    char **finger=malloc(100*sizeof(char*));
    kid=strtok(mike," ");
    while(kid!=NULL){
        finger[skyler]=kid;
        skyler++;
        kid = strtok(NULL, " ");
    }
    return finger;
}

int forkings(char **args)
{ 
  pid_t pablo,escobar;
  char *pena=(char *)malloc(sizeof(char)*1024);
  strcpy(pena, cocaine);
  strcat(pena,"/");
  strcat(pena,args[0]); 
  pablo = fork();
  if (pablo == 0) {
    execl(pena,pena,args[1],args[2],args[3],args[4],args[5],NULL);
    exit(EXIT_FAILURE);
  } 
  else if (pablo < 0) {
    perror("fork");
  } 
  else {
      escobar = wait(NULL);
      return 0;   
  }
  return 1;
}

void *threadings(void *f){  
  system(pot);
  return NULL;
}
void threadmasti(char **h){
  int i=0;
  pot=(char *)malloc(sizeof(char)*1024);
  strcpy(pot,cocaine);
  strcat(pot,"/");
  while(h[i]!=NULL){
    strcat(pot,h[i]);
    strcat(pot," ");
    i++;
  }
  
  pthread_t realone;
  pthread_create(&realone,NULL,threadings,NULL);
  pthread_join(realone,NULL);  
}

void jesse(char **hank){
    if(strcmp(hank[0],"cd")==0){
        chdir(hank[1]);
    }
    else if(strcmp(hank[0],"pwd")==0){
        char alber[1000];
        if(strcmp(hank[1],"--help")==0){
          printf("pwd:Prints the name of current working directory\nBy default runs in '-l'command and prints the fulle directory without removing symbolic links\n");
        }
        else{
        getcwd(alber,1000);
        printf("%s\n",alber);
          }
    }
    else if(strcmp(hank[0],"echo")==0){
        char *meth = hank[1];
        int flynn = 1;
        while (meth !=NULL)
        {
            printf("%s ",meth);
            flynn ++;
            meth = hank[flynn];
        }
        printf("\n");
    }
    else if(strstr(hank[0],"&t")!=NULL){
      hank[0][strlen(hank[0])-2]='\0';
      threadmasti(hank);      
    }
  else{
    forkings(hank);
    printf("\n");
  }
}

int main(){
    cocaine= (char *)malloc(sizeof(char)*1024);
    getcwd(cocaine,1024);
    char sex[1000];

    while(1){
        printf("Drippy ->");
        gets(sex);
        if(strcmp(sex,"")==0){continue;}
        char ** walter=saulgoodman(sex);
        jesse(walter);
    }
    
}