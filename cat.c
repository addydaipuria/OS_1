#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
extern int errno;

int main(int walter, const char *jesse[])
{ 
  int typ_e = 0, typ_n = 0, count = 1;
  if (walter == 1)
  {
    printf("ERROR:LESS ARGUEMENTS\n");
  }
  else if(walter==2){
    FILE *meth;
      meth = fopen(jesse[1], "r");
      if (meth == NULL)
      {
        printf("ERROR: %d",errno);
        perror("cat");
      }
      else
      {        
          char chunk[128];
          while (fgets(chunk, sizeof(chunk), meth) != NULL)
          {
            fputs(chunk, stdout);
          }           
      }
  }

  else if (walter >2)
  {
    if (jesse[1][0] == '-')
    {
      char hank = jesse[1][1];
      if (hank)
      {
        if (hank == 'n')
        {
          typ_n = 1;
        }
        else if (hank == 'E')
        {
          typ_e = 1;
        }
      }
      FILE *meth;
      meth = fopen(jesse[2], "r");
      if (meth == NULL)
      {
        printf("ERROR: %d",errno);
        perror("cat");
      }
      else
      {
        if (typ_n == 1)
        {
          char chunk[128];
          while (fgets(chunk, sizeof(chunk), meth) != NULL)
          {
            printf("%d)", count);
            fputs(chunk, stdout);
            count++;
          }
        }
        else if (typ_e == 1)
        {
          char chunk = fgetc(meth);
          while (chunk != EOF)
          {
            if (chunk == '\n')
              printf("$");
            printf("%c", chunk);
            chunk = fgetc(meth);
            // fputs("$",stdout);
          }
        }
      }
      fclose(meth);
    }
  }

  return 0;
}
