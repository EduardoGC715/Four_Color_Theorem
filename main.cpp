#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Constants
#define MAPA 6
//Functions
void four_colors(short pMatriz[MAPA][MAPA]){
    //Funcon para definir los colores de las regiones de un mapa solo utilizando 4 colores.
    //Parámetros: short pMatriz[X][Y]. Matriz 2D de tipo Short, representa una matriz de relaciones.
    //Retorna: Void
    bool posible=true;
    short colores[MAPA];
    colores[0]=1;
    for (int x=0;x<MAPA;x++){
        int col = 1;
        for (int y=0;y<MAPA;y++){
            if (pMatriz[x][y]==1) {
                for (;col<5;col++){
                    colores[x]=col;
                    if (colores[y]!=colores[x]){
                        break;
                    }
                    else if(colores[y]==colores[x] && col==4){
                        posible=false;
                    }
                    else if (x+1==MAPA){
                        y=0;
                    }
                }
            }
        }
    }
    if(posible){
        cout<<"Si es posible aplicar el teorema.\n";
        for (int i=0; i<MAPA; i++){
            cout<<i+1<<" es de color "<<colores[i]<<endl;
        }
    }
    else{
        cout<<"No es posible aplicar el teorema."<<endl;
    }
}
void matriz_automatica(){
    short matrizr[MAPA][MAPA];
    srand (time(NULL));
    for (int x=0;x<MAPA;x++) {
        for (int y = 0; y < MAPA; y++) {
            if (x>=y+1){
                matrizr[x][y]=rand()%2;
            }
            else{
                matrizr[x][y]=0;
            }
        }
    }
    for (int x=0;x<MAPA;x++) {
        for (int y = 0; y < MAPA; y++) {
            cout<<matrizr[x][y]<<" ";
        }
        cout<<endl;
    }
    four_colors(matrizr);
}
int main() {
   /* short matrizr[MAPA][MAPA]={
            {0,0,0,0,0,0},
            {1,0,0,0,0,0},
            {1,1,0,0,0,0},
            {0,1,1,0,0,0}
            {0,1,1,0,0,0}
            {0,1,1,0,0,0}
    };
    four_colors(matrizr);*/
    matriz_automatica();
    return 0;
}