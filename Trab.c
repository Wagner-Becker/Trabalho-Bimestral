#include <stdio.h>
int main()
{
	int menu;
	func_print();
	if(menu=1)
	{
		func_cadastrar();
	}
	if(menu=2)
	{
		func_listar();
	}
	if(menu=3)
	{
		func_pesquisar();
	}
	if(menu=4)
	{
		func_atualizar();
	}
	if(menu=5)
	{
		func_remover();
	}	

	return 0;
}
int func_print()
{
	printf("Cadastro de pessoas\n");
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Pesquisar\n");
	printf("4 - Atualizar\n");
	printf("5 - Remover\n");
	printf("6 - Sair\n");

}
int func_cadastrar()
{

}
int func_listar()
{

}
int func_pesquisar()
{

}
int func_atualizar()
{

}
int func_remover()
{

}
