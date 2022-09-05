#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	struct playlist {						//cria uma estrutura heterogenea de dados (struct)
		char nome[50], artista[70];			//declara as variaveis armazenadas na struct
		int tempo;
	};
	struct playlist play;



	char nome[50],artista[70];				//declara as variaveis
	int opcao;

	printf("**Digite uma opcao entre 1 e 3:**\n");	//imprime as funcoes disponiveis no menu
	printf("**1-Adicionar Musica**\n");
	printf("**2-Listar Playlist**\n");
	printf("**3-Sair**\n");
	scanf_s("%d", &opcao);

	while (opcao >= 1 ,opcao<=3)			//cria um menu 

		

		switch (opcao) {
			case 1:							//cria um metodo para adicionar musicas na struct															 

				printf("nome:\n");										
				gets(nome, stdin);			//armazena o nome da musica
			

				printf("artista:\n");
				gets(artista, stdin);		//armazena o artista da musica
			

				printf("tempo:\n");
				scanf_s("%d", &play.tempo);	//armazena o tempo da musica
				return 0;

			break;
			case 2:							//Cria um metodo para listar as musicas da playlist e adiciona 3 musicas a playlist
				
				printf("Boate Azul %s\n", play.nome); //adiciona a musica "Boate Azul" na struct"
				printf("Milionario e Jose Rico %s\n", play.artista);
				printf("4%d\n", play.tempo);

				printf("Pipoco %s\n", play.nome);	//adiciona a musica "Pipoco" na struct
				printf("Ana Castela %s\n", play.artista);
				printf("3%d\n", play.tempo);

				printf("Frio da Madrugada %s\n", play.nome); //adiciona a musica "Frio da Madrugada" na struct
				printf("Pedro Sanchez e Thiago %s\n", play.artista);
				printf("4%d\n", play.tempo);

				printf("\n**********IMPRIMINDO STRUCT**********\n");
				printf("****Nome****:%s", play.nome);	//imprime o nome da musica
				printf("****Artista****:%s", play.artista);		//imprime o artista da musica
				printf("****Tempo****:%d", play.tempo);		//imprime o tempo da musica
				printf("\n\n");
				getch();

				
			break;
			
			case 3:							//cria um metodo para sair
														
			return 0;
			default:
			printf("Invalido\n");
		}
	}
	return 0;



	
}