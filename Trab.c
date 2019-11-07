#include <stdio.h>
#include<string.h>
#define MAX 100
#define alunomax 20
struct pessoa{
	int cpf[11],id[100],data[10];
	int situac;
	char nome[MAX];
};
struct pessoa aluno[alunomax];

int menu=0;
int contpessoa=1,remover=0,pesquisa=0,atualizar=0,contListar=1;
int main()
{
	
	while(menu!=6){
		func_print();
		scanf("%d",&menu);
		
		while(menu==1)
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

	printf("\t\tInsira o nome\n");
	fgets(aluno[contpessoa].nome, MAX-1, stdin);
	getchar();

	printf("\t\tInsira seu cpf\n");
	scanf("%s", aluno[contpessoa].cpf);
	gets(aluno[contpessoa].cpf);

	printf("\t\tInsira a sua data de nascimento");
	scanf("%s",aluno[contpessoa].data);
	gets(aluno[contpessoa].data);

	aluno[contpessoa].situac=1;
	aluno[contpessoa].id=contpessoa;
	contpessoa++;
	}

	func_print();
	scanf("%d",&menu);
}
int func_listar()
{
	printf("\t\tVoce escolheu LISTAR\n");
	
	
	for(contlistar=1;contListar<contpessoa;contlistar++){
			if(aluno[contListar].situac=1){	
			printf("Aluno \nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", aluno[contListar].nome, aluno.cpf, aluno.data);
		}
	}
	
}
int func_pesquisar()
{
	printf("\t\tVoce escolheu PESQUISAR\n");

	printf("Selecione o id que deseja pesquisar");
	scanf("%d",&pesquisa);
	
	if(pesquisa<=contpessoa){
		printf("Aluno:\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", aluno[pesquisa].nome, aluno[pesquisa].cpf, aluno[pesquisa].data);
	}

	else printf("Aluno não cadastrado");
		pesquisa=0;	
}
int func_atualizar()
{
	printf("\t\tVoce escolheu ATUALIZAR\n");

	printf("Selecione o id que deseja atualizar");
	scanf("%d",&atualizar);
	
	printf("\t\tInsira o nome\n");
	fgets(aluno[atualizar].nome, MAX-1, stdin);
	getchar();

	printf("\t\tInsira seu cpf\n");
	scanf("%s", aluno[atualizar].cpf);
	gets(aluno[atualizar].cpf);

	printf("\t\tInsira a sua data de nascimento");
	scanf("%s",aluno[atualizar].data);
	gets(aluno[atualizar].data);

	aluno[atualizar].situac=1;
	
	
	
}
int func_remover()
{
	printf("\t\tVoce escolheu REMOVER\n");
	printf("Insira qual aluno deseja remover");
	scanf("%d", &remover);
	aluno[remover].situac=0;
	
}
