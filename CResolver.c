#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
	printf("===================================================\n");
	printf("+               C R E S O L V E R                 +\n");
	printf("===================================================\n");

	if(argc <= 1){
		printf("Informe um endereco para prosseguir\n");
		printf("Modo de uso: ./CResolver www.siteexemplo.com.br\n");
		
		return(0);
	}
	else{
		struct hostent *target = gethostbyname(argv[1]);

		if(target == NULL){
		    printf("Ocorreu um erro. Informe um endereco valido!\n");
		}
		else{
		    printf("Endereco ip do alvo: %s\n", inet_ntoa(*((struct in_addr *)target->h_addr)));
		}
	}

	return(0);
}
