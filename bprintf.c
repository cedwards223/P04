#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 64

void init_bprintf();
int bprintf(const char *);
void writebuf();

char *buffer;
int buffermark = 0;

int main()
{
    buffer = malloc(BUFSIZE);
    init_bprintf();
    bprintf("Hello world!so what dlfajsfljasl;dfja;lsdjf;l asdf;kasjdl;fkjasd l;fj ;sdfjasld jfk;asdjf ;kashf;lj asdkl;f  sdfgadfcvgnukiujnhtrfedwf5hu\n");
}

void init_bprintf()
{
    setvbuf(stdout, NULL, _IONBF, 0);
}

int bprintf(const char *output)
{
    char next;
    int i =0;
    while(next != '\0')
    {
        if(buffermark == 64)
        {
            writebuf();
            buffermark = 0;  
        }
        else if((next = output[i]) == '\n')
        {
            buffer[buffermark] = next;
            writebuf();
            buffermark = 0;
        }
        else
        {
            buffer[buffermark] = next;
            buffermark++;
        }
        i++;
    }
        
}

void writebuf()
{
    int x = 0;
    while(x <= buffermark)
    {
        printf("%c", buffer[x]);
        x++;
    }
    sleep(1);
    buffermark = 0;
}
