#include <stlio>
#include <stdlib>
#include <string>

#define BUFFSIZE 64

void init_bprintf();
int bprintf(const char);
char buffer[BUFFSIZE];

void init_bprintf()
{
    setvbuf(stdout, NULL, _IONBF, 0);
}

int bprintf(const char *output)
{
    for (int i = 0; buffer[i-1] != "\0"; i++)
    {
        
    }

}

int main()
{
    init_bprintf();


}
