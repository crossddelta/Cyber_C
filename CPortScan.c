#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	printf("===================================================\n");
	printf("+                C P O R T S C A N                +\n");
	printf("===================================================\n");

	if(argv[1] == NULL){
			printf("Informe um endereco IP para verificar quais\nportas estão abertas no host.\n");
			printf("Modo de uso: ./CResolver 192.168.0.1\n");

			return(0);
	}
	else{
		int conn;
		int mysocket;

	        int port;
	        int first = 0;
	        int last = 65535;

		char *dest = argv[1];

		struct sockaddr_in targt;

		for(port = first; port <= last; port++){
			mysocket = socket(AF_INET, SOCK_STREAM, 0);

			targt.sin_family = AF_INET;
			targt.sin_port = htons(port);
			targt.sin_addr.s_addr = inet_addr(dest);

			conn = connect(mysocket, (struct sockaddr *)&targt, sizeof targt);

			if(conn == 0){
				printf("Port %d is open\n", port);
				close(mysocket);
				close(conn);
		}
			else{
				close(mysocket);
				close(conn);
		}
	}

	return(0);
	}

}
