#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    
	int meusocket;
	int conecta;

	printf("===================================================\n");
	printf("+                  C S O C K E T                  +\n");
	printf("===================================================\n");

	if(argv[1] == NULL || argv[2] == NULL){
			printf("Informe um endereco IP e uma porta\npara verificar se está aberta\n");
			printf("Modo de uso: ./CResolver 192.168.0.1 80\n");

			return(0);
	}
	else{
		int port = strtol(argv[2], NULL, 10);	
		char *ip = argv[1];

		struct sockaddr_in alvo;

   		meusocket = socket(AF_INET, SOCK_STREAM, 0);
    		alvo.sin_family = AF_INET;
    		alvo.sin_port = htons(port);
    		alvo.sin_addr.s_addr = inet_addr(ip);

    		conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

    		if(conecta == 0){
        		printf("Porta aberta!\n");
        		close(meusocket);
        		close(conecta);
    		}
    		else{
        		printf("Porta fechada!\n");
    		}
	}
    return(0);
}
