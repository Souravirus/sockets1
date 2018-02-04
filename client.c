#include"headers.h"
int main()
{
    char buffer[80], serverWrite[80];
    struct sockaddr_in addr;
    int skret , cfd , len;
    char * ch,*c;
    ch=(char*)malloc(sizeof(char)*50);
    c=(char*)malloc(sizeof(char)*50);
    skret=socket(AF_INET,SOCK_STREAM,0);
    addr.sin_family=AF_INET;
    addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    addr.sin_port=htons(4000);
    len=sizeof(struct sockaddr_in);

    //printf("YOU:");
    /*
    fgets(buffer,40,stdin);*/
    //printf("client\n");
    cfd=connect(skret,(struct sockaddr *) & addr,len);
    if(cfd == -1)
    {
        perror("error in connect");
    }

    while(1)
    {
        printf("YOU:");
        //printf("client----%d\n",cfd);
        fgets(buffer, 40, stdin);
        write(skret,buffer,50);
        read(skret,serverWrite,50);
        printf("SAHOO:");
        puts(serverWrite);

        //printf("%s\n",c);
    }
}

