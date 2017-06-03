#include <stdio.h>
#include <time.h>
#include <stdlib.h>

time_t _seed = 0;

int congruencial(int maximo){
		_seed = (13*_seed+7) % maximo;
		return _seed;
	}

int main(int argc, char **argv)
{
	int numeros = atoi(argv[1]), maximo = atoi(argv[2]);
	int falta = numeros;
	_seed = time(NULL)/2;
	
	numeros = numeros % 2 == 0 ? numeros/2 : numeros/2 + 1;
	
	for(int i = 0; i < numeros; i++){
		for(int j = 0; j < 2; j++){
			if(falta > 0){
				printf("%d\t",congruencial(maximo));
				falta--;
			}
		}
		printf("\n");
	}
	printf("Pressione enter:");
	getchar();
	return 0;
}

