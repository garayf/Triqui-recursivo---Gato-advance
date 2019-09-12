#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void imprimir (int matriz[8][8]){
	for (int i = 0; i<8 ;i++){
		for (int j=0;j<8;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout << ""<<endl;	
	}
}

void llenar_matriz (int matriz[8][8]){
	for (int i = 0; i<8 ;i++){
		for (int j=0;j<8;j++){
			matriz[i][j]=0;
		}			
	}
}	


int main(int argc, char** argv) {
	int tablero[8][8];
	cout << "Matriz credada"<<endl;	
	cout << "" << endl;	
	llenar_matriz(tablero);
	imprimir(tablero);
	return 0;
}



