#include "csapp.h"
int main(int argc, char* argv[]){
    char* buf = getenv("QUERY_STRING");
    char* p;
    char cone[MAXLINE],ctwo[MAXLINE];
    char content[MAXLINE];
    int a = 0;
    int b = 0;
    if(buf != NULL){
        p = strchr(buf,'&');
        strcpy(cone,buf);
        strcpy(ctwo,p+1);

    }
    a = atoi(cone);
    b = atoi(ctwo);
    sprintf(content,"QUERY_STRING = %s",buf);
    sprintf(content,"Welcome!");
    sprintf(content,"%sThe answer is: %d + %d = %d\r\n<p>",content,a,b,a+b);

    printf("Connection: close\r\n");
    printf("Content-length: %d\r\n",(int)strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s",content);
    fflush(stdout);
    exit(0);
}