#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[100];
	char  cpf[20];
	char vacina[20];
	char data[10];
	int  lote;
	int  codigo;
}; 
struct pessoa cadastro[10];
//variavel contadora para o procedimento cadastrar pessoa
int vet = 0;

//procedimento para cadastro de pessoa
void cadastrarPessoa(){
	int p = 0;
	
	cadastro[1].codigo = p+1;
	
	printf("digite o nome: \n");
	fflush(stdin);
	gets(cadastro[vet].nome);
	
	
	printf("digite o cpf: \n");
	scanf("%s",&cadastro[vet].cpf);
	fflush(stdin);
	
	printf("digite o nome da vacina: \n");
	gets(cadastro[vet].vacina);
	fflush(stdin);
	
	printf("digite o lote da vacina: \n");
	scanf("%d", &cadastro[vet].lote);
	fflush(stdin);
	
	printf("digite a data da aplicacao: \n");
	gets(cadastro[vet].data);
	fflush(stdin);
	
	system("cls");
	vet++;
}
//procedimento para imprimir aplicacoes
void imprimiAplicacoes(){
	int cont;
	for(cont=0; cont<vet; cont++){
		printf("codigo: %d \n", cadastro[cont].codigo);
		printf("nome: %s\n", cadastro[cont].nome);
		printf("cpf: %s\n", cadastro[cont].cpf);
		printf("vacina: %s\n", cadastro[cont].vacina);
		printf("data: %s\n", cadastro[cont].data);
		printf("lote: %d\n", cadastro[cont].lote);
		printf("======================================\n");
	}
}
//procedimento para busca por cpf
void buscacpf(){
	char cpfdigitado[20];
	int j;
	printf("digite o cpf: \n");
	scanf("%s", cpfdigitado);
	fflush(stdin);
	for (j=0; j<vet; j++){
		if (strcmp(cpfdigitado,cadastro[j].cpf)== 0){
		    
			printf("codigo: %d \n", cadastro[j].codigo);
		    printf("nome: %s\n", cadastro[j].nome);
		    printf("cpf: %s\n", cadastro[j].cpf);
		    printf("vacina: %s\n", cadastro[j].vacina);
		    printf("data: %s\n", cadastro[j].data);
		    printf("lote: %d\n", cadastro[j].lote);
		    printf("======================================\n");
	    }
		else{
			printf("cpf nao encontrado \n");
	    }
	}
}

int main(int argc, char *argv[]) {
	
	//estrutura de repeticao para criacao do menu
	int opc = 0;
    
	while (opc != 4){
		printf(" 1-cadastrar vacina\n 2-listar aplicacoes\n 3-consultar cpf\n 4-sair\n");
		scanf("%d", &opc);
	
		switch(opc){
			case 1: {
				cadastrarPessoa();
				break;
			}
			case 2: {
			 	imprimiAplicacoes();
				break;
			}
			case 3: {
				buscacpf();
				break;
			}
			default : {
				printf("opcao invalida\n");
				break;
			}
		}
	}
	return 0;
}
