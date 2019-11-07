#include <stdio.h>
#include <string.h>
#define MAX 100
#define alunomax 20
struct pessoa{
	int  id;
	int situac;
	char cpf[20],data[20],nome[MAX];
};
struct pessoa aluno[alunomax];

int menu=0;
char pesquisa[MAX];
int contpessoa=1,remover=0,atualizar=0,contListar=1,resultpesqui,i;
int main()
{
	
	while(menu!=6){
		func_print();
		scanf("%d",&menu);
		
		if(menu==1)
		{
			func_cadastrar();
			
		}
		if(menu==2)
		{
			func_listar();
			
		}
		if(menu==3)
		{
			func_pesquisar();
			
		}
		if(menu==4)
		{
			func_atualizar();
		}
		if(menu==5)
		{
			func_remover();
		}	
	}
	printf("\t\tVoce escolheu SAIR");
	return 0;
}
int func_print()
{
	printf("\t\t----------------------\n");
	printf("\t\t| Cadastro de pessoas|\n");
	printf("\t\t| 1 - Cadastrar      |\n");
	printf("\t\t| 2 - Listar         |\n");
	printf("\t\t| 3 - Pesquisar      |\n");
	printf("\t\t| 4 - Atualizar      |\n");
	printf("\t\t| 5 - Remover        |\n");
	printf("\t\t| 6 - Sair           |\n");
	printf("\t\t----------------------\n");

}
int func_cadastrar()
{
	if(contpessoa<21){
	printf("\t\tVoce escolheu CADASTRAR\n");
	printf("\t\tInsira o nome:");
	fflush(stdin);
	fgets(aluno[contpessoa].nome, MAX-1, stdin);
	printf("\n\t\tDigite ENTER para confirmar\n");
	getchar();
	printf("\t\tInsira seu cpf:");
	fflush(stdin);
	fgets(aluno[contpessoa].cpf, 20-1, stdin);
	printf("\n\t\tDigite ENTER para confirmar\n");
	getchar();
	printf("\t\tInsira a sua data de nascimento:");
	fflush(stdin);
	fgets(aluno[contpessoa].data, 20-1, stdin);
	printf("\n\t\tDigite ENTER para confirmar");
	getchar();
	aluno[contpessoa].situac=1;
	aluno[contpessoa].id=contpessoa;
	contpessoa++;
	}

}
int func_listar()
{
	printf("\t\tVoce escolheu LISTAR\n");

	
	
	for(contListar=1;contListar<contpessoa;contListar++){
			if(aluno[contListar].situac==1){	
			printf("\t\t--------------------\n\t\t\tAluno\n\t\t--------------------\n\t\tNome: %s\n\t\tCpf: %s\n\t\tData de nascimento: %s\n\t\tID:%d\n", aluno[contListar].nome, aluno[contListar].cpf, aluno[contListar].data,aluno[contListar].id);
		}
	}
	
}
int func_pesquisar()
{
	printf("\t\tVoce escolheu PESQUISAR\n");

	printf("\t\tSelecione o nome que deseja pesquisar:");
	fflush(stdin);
	fgets(pesquisa, MAX-1, stdin);
	printf("\t\tDigite ENTER para confirmar");
	getchar();
	printf("%s",aluno[contpessoa].nome);
	for(i=1;i<contpessoa;i++){
		resultpesqui=strcmp(aluno[i].nome,pesquisa);
		if(resultpesqui == 0){
			printf("\t\t--------------------\n\t\t\tAluno\n\t\t--------------------\n\t\tNome: %s\n\t\tCpf: %s\n\t\tData de nascimento: %s\n\t\tID:%d\n\t\tSituacao:%d\n", aluno[i].nome, aluno[i].cpf, aluno[i].data,aluno[i].id,aluno[i].situac);
		}
	}
			
}
int func_atualizar()
{
	printf("\t\tVoce escolheu ATUALIZAR\n");
    printf("\t\tInsira o id do aluno a atualizar:");
	scanf("%d",&atualizar);
	printf("\n\t\tInsira o nome:");
	fflush(stdin);
	fgets(aluno[atualizar].nome,MAX-1,stdin);
	printf("\n\t\tDigite ENTER para confirmar\n");
	getchar();
	printf("\t\tInsira seu cpf:");
	fflush(stdin);
	fgets(aluno[atualizar].cpf,20-1,stdin);
	printf("\n\t\tDigite ENTER para confirmar\n");
	getchar();
	printf("\t\tInsira a sua data de nascimento:");
	fflush(stdin);
	fgets(aluno[atualizar].data,10-1,stdin);
	printf("\n\t\tDigite ENTER para confirmar\n");
	getchar();
	aluno[atualizar].situac=1;
	aluno[atualizar].id = atualizar;
	scanf("%*s");
	}
}
int func_remover()
{
	printf("\t\tVoce escolheu REMOVER\n");
	printf("\t\tInsira qual aluno deseja remover:");
	scanf("%d", &remover);
	aluno[remover].situac=0;
}
