#include <stdio.h>
int main()
{
	int menu=0;
	while(menu!=6)
	{
		
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
	printf("\t\tVoce escolheu CADASTRAR\n");
}
int func_listar()
{
	printf("\t\tVoce escolheu LISTAR\n");
}
int func_pesquisar()
{
	printf("\t\tVoce escolheu PESQUISAR\n");
}
int func_atualizar()
{
	printf("\t\tVoce escolheu ATUALIZAR\n");
}
int func_remover()
{
	printf("\t\tVoce escolheu REMOVER\n");
}
