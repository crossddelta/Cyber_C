#ifdef _WIN32
#include <stdio.h>
#include <stdlib.h>
#endif

#ifdef linux
#include <stdio.h>
#include <stdlib.h>
#endif

int main(int argc, char *argv[]){
	int i;
	char ping[26], host[3];

	printf("===================================================\n");
	printf("+                  C W E E P E R                  +\n");
	printf("===================================================\n");

#ifdef _WIN32
	if(argv[1] == NULL){
		printf("Informe uma rede IP para encontrar os hosts ativos.\n");
		printf("Modo de uso: ./Cweeper 192.168.0\n");
	}
	else{
		for(i = 0; i <= 25; i++){
			sprintf(host, "%d", i);
			sprintf(ping, "ping -n 1 %s.%s", argv[1], host);
			system(ping);
			}
		}
#endif

#ifdef linux
	if(argv[1] == NULL){
		printf("Informe uma rede IP para encontrar os hosts ativos.\n");
		printf("Modo de uso: ./Cweeper 192.168.0\n");
	}
	else{
		for(i = 0; i <= 25; i++){
			sprintf(host, "%d", i);
			sprintf(ping, "ping -c 1 %s.%s", argv[1], host);
			system(ping);
			}
		}
#endif
	return(0);
}
