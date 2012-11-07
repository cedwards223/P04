#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 64

void init_bprintf();
int bprintf(const char *output);
char buffer[BUFFSIZE];
int more = 0; // Keep track of where the buffer is with no end line

void init_bprintf()
{
    setvbuf(stdout, NULL, _IONBF, 0);
}

int bprintf(const char *output)
{
   // while (output != EOF) // Check for end character
   // {        
        for (more; more < BUFFSIZE-1; more++)
        {   
            buffer[more] = output;
         //   if(buffer[i] == "\0") // Break out if EOF)
         //     break;
            if(buffer[more] == "\n")// Break out if end of line
                break;
        }
        if( more == BUFFSIZE-1)
        {
            int x;
            char c;
            for(x= 0; buffer[x] !="\0"; x++) // Dump buffer
            {
                c = buffer[x];
                if (c = "\n")
                    printf("\n");
                else if (c = "\0")
                    break;
                else
                    printf("%c" ,c);
            }
            more = 0;
        }
       // else
         //   break;
   // }
}

int main()
{
    init_bprintf();
    bprintf("buffer");

}
