The README for project 4

The purpose of the code is to create a buffer of size 64 and print the characters once that buffer gets full.

The code gets rid of the old buffer. Next it will take in a string and print out the string 64 chars at a time. After that if there is more data that was sent into the buffer then it will repeat until the input has read an end of line.

To build the program use minix to compile by typing gcc bprintf.c.
Then you run the program by typing ./a/out. (With no period at the end of out).

Something interesting I learned about the project is that if after #define BUFSIZE if you type 64); then it keeps the ); after the 64 then when you type malloc(BUFFSIZE , that is code that will compile and run correctly. Because BUFSIZE is defined as 64); not just the number.

What I do not understand is

One of the biggest problems we had with this project is partially what I thought was interesting. We had #define BUFSIZE 64; and that was throwing an error once that overcome with some help finished the project.

Something I wish we would have known about before hand was that #define does not define just an int but everything after the name of the defined item.