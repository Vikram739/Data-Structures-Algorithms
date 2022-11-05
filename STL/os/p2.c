/*
    Created By : Vikram Markali
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
int main()
{

int f1,f2,i=0,space=0;
char str[100];
char buf[100],ch;
int chart, word, st;
char a[50],b[20],c[20];
FILE* file;
chart=word=st=0;
//printf(“\n In process 2 “);

mkfifo(“fifo2”,0666);
f1 = open(“fifo1”,O_RDWR);
//printf(“\n success %d”,f1);
read(f1,str,100);

printf(“Data Received from process1: %s”,str);
while(str[i]!=’\0′)
{

if(str[i]!=’ ‘ && str[i]!=’\n’)
{
chart++;
}
if(str[i]==’ ‘ && str[i]==’\n’)
{
word++;
}
if(str[i]==’\n’)
{
st++;
}
i++;

}
if(chart>0)
{
chart++;
word++;
}

printf(“\nNo of characters are %d, words are %d, and sentences are %d.\n”,chart,word,st);
f2 = open(“fifo2”,O_RDWR);
file=fopen(“test.txt”,”w”);
fprintf(file,”Characters:%d Words:%d Sentences:%d.”,chart,word,st);
fclose(file);
file=fopen(“test.txt”,”r”);
fscanf(file,”%s %s %s”,a,b,c);
fclose(file);
strcat(a,b);
strcat(a,c);
write(f2,a,100);
close(f1);
close(f2);
return 0;
}