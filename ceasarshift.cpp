
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[], char **env)
{
        int  c;

        int shift = atoi(argv[1]);

        while (!cin.eof())//pass file from command line and keep going until end of file
        {

                c = cin.get();//get character to processes
                if (isalpha(c))
                {
                        if (isupper(c)) c = tolower(c);
                        c = c - 'a';
                        c = c + shift;
                        c = c % 26;
                        c = c + 'a';

                }
                cout.put(c);

        }
        return 0;
}
