#include <stdio.h>
#include<string.h>
#define MAX 100
struct pessoa{
	int cpf[11],id[100],data[10];
	int situac;
	char nome[MAX];
};
typedef struct pessoa cadastro;
cadastro p1;
cadastro p2;
cadastro p3;
int menu=0;
int contpessoa=1,remover=0,pesquisa=0,atualizar=0;
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
	if(contpessoa==1){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p1.nome, MAX-1, stdin);
		getchar();
		printf("%s", p1.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p1.cpf);
		gets(p1.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p1.data);
		gets(p1.data);
		p1.situac=1;
		p1.id=1;
		contpessoa++;
	}
	if(contpessoa==2){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p2.nome, MAX-1, stdin);
		getchar();
		printf("%s", p2.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p2.cpf);
		gets(p2.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p2.data);
		gets(p2.data);
		p2.situac=1;
		p2.id=2;
		contpessoa++;
	}
	if(contpessoa==3){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p3.nome, MAX-1, stdin);
		getchar();
		printf("%s", p3.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p3.cpf);
		gets(p3.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p3.data);
		gets(p3.data);
		p3.situac=1;
		p3.id=3;
		contpessoa++;
	}
	func_print();
	scanf("%d",&menu);
}
int func_listar()
{
	printf("\t\tVoce escolheu LISTAR\n");
	
	if(p1.situac=1){	
		printf("Aluno 1\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p1.nome, p1.cpf, p1.data);
	}
	if(p2.situac=1){	
		printf("Aluno 2\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p2.nome, p2.cpf, p2.data);
	}
	if(p3.situac=1){	
		printf("Aluno 3\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p3.nome, p3.cpf, p3.data);
	}
	
}
int func_pesquisar()
{
	printf("\t\tVoce escolheu PESQUISAR\n");
	printf("Selecione o id que deseja pesquisar");
	scanf("%d",&pesquisa);
	if(pesquisa==1){	
		printf("Aluno 1\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p1.nome, p1.cpf, p1.data);
		pesquisa=0;	
	}
	if (pesquisa==2) {
		printf("Aluno 2\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p2.nome, p2.cpf, p2.data);
		pesquisa=0;
	}	
	if(pesquisa==3){
		printf("Aluno 3\nNome: %s\n Cpf: %s\n Data de nascimento: %s\n", p3.nome, p3.cpf, p3.data);
		pesquisa=0;
	}
}
int func_atualizar()
{
	printf("\t\tVoce escolheu ATUALIZAR\n");
	printf("Selecione o id que deseja atualizar");
	scanf("%d",&atualizar);
	if(atualizar==1){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p1.nome, MAX-1, stdin);
		getchar();
		printf("%s", p1.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p1.cpf);
		gets(p1.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p1.data);
		gets(p1.data);
		p1.situac=1;
	}
	if(atualizar==2){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p2.nome, MAX-1, stdin);
		getchar();
		printf("%s", p2.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p2.cpf);
		gets(p2.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p2.data);
		gets(p2.data);
		p2.situac=1;
	}
	if(atualizar==3){
		printf("\t\tVoce escolheu CADASTRAR\n");
		printf("\t\tInsira o nome\n");
		fgets(p3.nome, MAX-1, stdin);
		getchar();
		printf("%s", p3.nome);
		printf("\t\tInsira seu cpf\n");
		scanf("%s", p3.cpf);
		gets(p3.cpf);
		printf("\t\tInsira a sua data de nascimento");
		scanf("%s",p3.data);
		gets(p3.data);
		p3.situac=1;
	}
	
}
int func_remover()
{
	printf("\t\tVoce escolheu REMOVER\n");
	printf("Insira qual aluno deseja remover");
	scanf("%d", &remover);
	if (remover==1) p1.situac=0;
	if(remover==2) p2.situac=0;
	if(remover==3) p3.situac=0;
}
