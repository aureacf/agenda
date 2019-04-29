#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int x=0,menu ,dia, aux,excluir;
int mes[31];
int data[31]; int busqf;
string nom[31];
string evento[31];
string busq;

int main()
{

	cout << "\n------------Bem Vindo!!!----------\n";
	do{
	cout << " \n 1).Agendar \n 2).Mostrar dias Livres \n 3).Mostrar por dias\n 4).Pesquisar e excluir \n 0).Sair\n";
	cin >> menu;
	switch(menu)
	{
		case 1:
			cout << "\nQue dia deseja agendar\n"; cin >> dia;
			if(dia>0 && dia<=30)
			{
				for(x=dia;x<=dia;x++)
	    		{
	    			if(mes[x]!=0){
	    				cout << "\nError\n";
	    				cout <<"dia ocupado\n";
	    				cout << " Data |   Nome   |   Evento \n";
	    				cout << "   " << data[x] << "   "  ;
			    	    cout << "  -  " << nom[x] << "  " ;
			    	    cout << "  -  " << evento[x] << "\n" ;
					}else{
						cout << "Acrescente o nome :"; cin >> nom[x];
	        	    	cout << "Acrescente o Evento :"; cin >> evento[x];
	        	    	mes[x]=1;
	            		data[x]=dia;
	            		cout << "\nGuardado com sucesso\n";
					}

		    	}
			}else{
				cout << "\nDia fora dos parametros!\n Os parametros sao de 1 a 30";
			}
			break;
		case 2:
			cout << "---------Agenda---------\n";
			cout << "Dom  Seg  Ter  Qua  Qui  Sex  Sab\n";
			for(x=1;x<=30;x++)
			{
				cout << " " << mes[x] << "   ";
				if(x==7 || x==14 || x==21 || x==28)
				{
					cout << "\n";
				}
			}
			break;
		case 3:
			cout << " Data |   Nome   |   Evento \n";
			for(x=1;x<=30;x++)
			{
				if(data[x]!=0)
				{
			    	cout << "   " << data[x] << "   "  ;
			    	cout << "  -  " << nom[x] << "  " ;
			    	cout << "  -  " << evento[x] << "\n" ;
		    	}
			}
			break;
		case 4:
			excluir=0;
			cout << "-------Pesquisar--------\n";
			cout << "\n1)Por Nome \n2)Por Data\n";
			cin >> excluir;
			if(excluir==1){
				cout << "\n Acrescente o Nome :"; cin >> busq;
				cout << " Data |   Nome   |   Evento \n";
			for(x=1;x<=30;x++)
	    		{
	    			if(busq==nom[x])
					{
			    		    cout << "   " << data[x] << "   "  ;
			            	cout << "  -  " << nom[x] << "  " ;
			            	cout << "  -  " << evento[x] << "\n" ;
		            	cout << "\n 1).Sair \n 9).Excluir\n"; cin>>excluir;
		            	if(excluir==9)
						{
		                	data[x]=0;
	            	    	nom[x]="\0";
		                	evento[x]="\0";
		            	    mes[x]=0;
		            	    aux=0;
		            	    cout << "\n Excluido Com Sucesso\n";
						}else{
							cout << "\n";
						}
		            }else{
		    	        aux=aux+1;
					}
		        }
				if(aux>=30)
		        {
		        	cout<<" Nome nao encontrado no Dia Livre"<<endl;
				}
			}else{
				cout << "\n Acrescente a Data :"; cin >> busqf;
				cout << " Data |   Nome   |   Evento \n";
				for(x=1;x<=30;x++)
	    		{
	    			if(busqf==data[x])
					{
			    		cout << "   " << data[x] << "   "  ;
			        	cout << "  -  " << nom[x] << "  " ;
			        	cout << "  -  " << evento[x] << "\n" ;
		            	cout << "\n 1).sair \n 9).excluir\n";cin>>excluir;
		            	if(excluir==9){
		            	data[x]=0;
	            		 nom[x]="\0";
		            	 evento[x]="\0";
		            	 mes[x]=0;
		            	 aux=0;
		            	 cout << "\n Excluido Com Sucesso\n";
						}else{
							cout << "\n";
						}
		            }else{
		    	     aux=aux+1;
					}
		        }
		        if(aux>=30)
		        {
		        	cout<<"Dia Livre"<<endl;
				}
			}

			break;
		default:

			break;
	}
	cout << "\n Voltar para o menu Principal";
	cout << "\n1).SIM \n0).SAIR\n";
	cin >> menu;
}while(menu>0);
getch();
	return 0;
}
