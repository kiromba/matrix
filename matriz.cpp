#include <stdio.h>
#include <conio.h>
#include <conio.c>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <dos.h>

void titulo()
{
  	/* Apresentação do Programa */
    gotoxy(15,1);cout<<"\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4";
    gotoxy(15,2);cout<<"";
    gotoxy(15,3);cout<<"MATRIZ CALCULATOR - VERSAO 0.1 - BY DIOGO E RAINIER ";
    gotoxy(15,4);cout<<"";
    gotoxy(15,5);cout<<"\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4";
}

/* Inicio do programa */
void main ( )
{
	int /* Decaração de variaveis inteiras */
		_m=0, _n=0, _m1, _n1, _l, _c, _opcao,_cont,

		/* Decaração de matrizes */
		_a[5][5], _b[5][5], _ab[5][5];


    /* chamada para a função titulo */
    titulo();

    /* menu principal */
	gotoxy(20,10);cout<<"(1) Para Adicao entre matrizes ";
    gotoxy(20,11);cout<<"(2) Para Subtracao entre matrizes ";
	gotoxy(20,12);cout<<"(3) Para Multiplicacao entre matrizes ";
	gotoxy(20,13);cout<<"(4) Multiplicacao por escalar";

    gotoxy(20,15);cout<<"Escolha uma opcao:";
    gotoxy(39,15);cin>> _opcao;



	if((_opcao==1) || (_opcao==2) || (_opcao==3))
	{

        /* limpa a tela e escreve o titulo */
        clrscr();
        titulo();

        /* solicita a configuração da matriz */
		gotoxy(20,10);cout<<"Digite  numero de LINHAS da Matriz A:";
		cin>> _m;

        /* limpa a linha */
        gotoxy(20, 10); clreol();

        gotoxy(20,10);cout<<"Digite  numero de COLUNAS da Matriz A :";
		cin>> _n;


        gotoxy(20, 10); clreol();

        /* chama a função que desenha a matriz A, de acordo com o numero de linhas e colunas */
        //desenhaMatrizA(_m,_n);

        /* recebemos os valores digitados pelo usuário */
		for(_l=0; _l<_m; _l++)
		{
			for(_c=0; _c<_n; _c++)
			{

                clrscr();
                titulo();
				gotoxy(20,10);cout<< "Digite o elemento  da posicao ["<<_l+1<<","<<_c+1<<"]            ";
				gotoxy(20,11);cin>> _a[_l][_c];
			}

		}

        /* limpa a tela e escreve o titulo */
        clrscr();
        titulo();


		gotoxy(20,10);cout<<"Digite o numero de LINHAS  da Matriz B :";
		cin>> _m1;

        /* limpa a linha */
        gotoxy(20, 10); clreol();

        gotoxy(20,10);cout<<"Digite o numero de COLUNAS  da Matriz B :";
		cin>> _n1;
	
		for(_l=0; _l<_m1; _l++)
		{
			for(_c=0; _c<_n1; _c++)
			{
                clrscr();
                titulo();
				gotoxy(20,10);cout<< "Digite o elemento  da posicao ["<<_l+1<<","<<_c+1<<"] ";
				gotoxy(20,11);cin>> _b[_l][_c];
			}

		}



		/* Aqui começa a operação ente as matrizes */
		if (_opcao==1)
		{
			
			if((_m==_n) && (_n==_m1) && (_m1==_n1))
			{
				for (_l=0; _l<_m; _l++)
				{
					for(_c=0; _c<_m; _c++)
					{
						_ab[_l][_c] = _a[_l][_c] + _b[_l][_c];
					}
				}
				
				/* Apresentacao do resultado */
				for (_l=0; _l<_m; _l++)
				{
					cout<< "| ";
					for(_c=0; _c<_m; _c++)
					{
						cout<< _ab[_l][_c]<<" ";
					}
					cout<<" |\n";	
				}
			}
			
			
		}
		if (_opcao==2)
		{
			if((_m==_n) && (_n==_m1) && (_m1==_n1))
			{
				for (_l=0; _l<_m; _l++)
				{
					for(_c=0; _c<_m; _c++)
					{
						_ab[_l][_c] = _a[_l][_c] - _b[_l][_c];
					}
				}
			
				/* Apresentacao do resultado */
				for (_l=0; _l<_m; _l++)
				{
					cout<< "| ";
					for(_c=0; _c<_m; _c++)
					{
						cout<< _ab[_l][_c]<<" ";
					}
					cout<<" |\n";
				}
			}
			
		}
		if (_opcao==3)
		{
			if(_n==_m1)
			{
				for(_l=0; _l<_m; _l++)
				{
					for(_c=0; _c<_n1; _c++)
					{
						_ab[_l][_c]=0;
						for(_cont=0; _cont<_n; _cont++)
						{
							_ab[_l][_c] += _a[_l][_cont] * _b[_cont][_c];
                            cout<< "Elemento ["<<_l+1<<","<<_c+1<<"] recebe "<<_a[_l][_cont]<<" * "<< _b[_cont][_c];
                            getch();
						}
					}
				}
			
				/* Apresentacao do resultado */
				for (_l=0; _l<_m; _l++)
				{
					cout<< "| ";
					for(_c=0; _c<_n1; _c++)
					{
						cout<< "| "<< _ab[_l][_c]<<" |";
					}
					cout<< "|\n";
				}
			}

		}
	}
   getch();
}
