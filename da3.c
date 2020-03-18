//file handling using system calls

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
char word[100];
char word2[100]="It ends here;";
int fd=open("/home/ak/linux/pop.txt",O_RDWR);
if(fd== -1)
printf("Failed \n");
else
{
printf("Success \n");
int nr = read(fd,word,100*sizeof(char));
if(nr == -1)
printf("Failed \n");
else{
printf("Success \n");
printf("Before Write ops \n \n");
printf("%s",word);
}
write(fd,word2,100*sizeof(char));
printf("After Write ops \n \n");
read(fd,word,100*sizeof(char));
printf("%s",word2);
}
}
