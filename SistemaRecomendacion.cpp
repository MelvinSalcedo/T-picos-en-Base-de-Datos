#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

typedef float Int;



Int DistanciaManhatan(Int SujetoA[], Int SujetoB[],int contador){
    Int Distancia=0;

    for (int i=0;i<contador;i++){
        if(SujetoA[i]!=-1 && SujetoB[i]!=-1){
                //cout<<SujetoA[i]<<" - "<<SujetoB[i]<<endl;
            Distancia+=abs(SujetoA[i]-SujetoB[i]);
        }

    }
    return Distancia;
}

Int DistanciaEuclidiana(Int SujetoA[], Int SujetoB[],int contador){
    Int Distancia =0;

    for (int i=0;i<contador;i++){
        if(SujetoA[i]!=-1 && SujetoB[i]!=-1){
                //cout<<SujetoA[i]<<" - "<<SujetoB[i]<<" = "<<pow((SujetoA[i]-SujetoB[i]),2)<<endl;
            Distancia+=pow((SujetoA[i]-SujetoB[i]),2);
        }
    }
    Distancia=sqrt(Distancia);
    return Distancia;
}

Int DistancaMinkowski(Int SujetoA[], Int SujetoB[],int contador){
    Int sumatoria=0;
    Int r = 2;
    for (int i=0;i<contador;i++){

        if(SujetoA[i]!=-1 && SujetoB[i]!=-1){
            cout<<SujetoA[i]<<" - "<<SujetoB[i]<<" = "<<pow(abs(SujetoA[i]-SujetoB[i]),r)<<endl;
            sumatoria+=pow(abs(SujetoA[i]-SujetoB[i]),r);
        }
    }
    Int Result= pow(sumatoria,1/r);

    return Result;
}

int main (){

    Int Hailey  [] = {-1,4,1,4,-1,-1,4,1};
    Int Veronica[] = {3,-1,-1,5,4,2.5,3,-1};

    Int Jordyn  [] = {-1,4.5,4,5,5,4.5,4,4};

    Int Angelica[] = {3.5,2  ,-1 ,4.5, 5, 1.5, 2.5, 2};
    Int Bill    [] = {2  ,3.5,4,-1,2 ,3.5,-1,3 };


    int Len=sizeof(Hailey)/sizeof(int);

    cout<<"distancia Manhatan Hailey y Veronica = "<<DistanciaManhatan(Hailey,Veronica,Len)<<"\n";
    cout<<"distancia Euclidiana Hailey y Jordyn = "<<DistanciaEuclidiana(Hailey,Jordyn,Len)<<"\n";
    cout<<"distancia Minkowski  Angelica y Bill = "<<DistancaMinkowski(Angelica,Bill,Len)<<"\n";

}
