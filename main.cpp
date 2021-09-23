#include <iostream>
#include <string>
#include <math.h>
#include "Triangulos.h"

using namespace std;




int main()
{
    int operacao;
    int c =1;
    float B,Al,B2,Al2 = 0;

    Triangulos escolha(B,Al);
    Triangulos escolha_2(B2,Al2,0);
    while(c==1){

    cout << "                     BEM VINDO ";
    cout << "\n\n       Escolha a base do primeiro triangulo: ";
    cin >> B;
    cout << "       Escolha a altura do primeiro triangulo: ";
    cin >> Al;

    cout << endl<<"\t\t*" << endl;
    cout << "\t\t* * " << endl;
    cout << "\t\t* * *" << endl;
    cout << "\t\t* * * *" << endl;
    cout << "\t\t* * * * * " << endl;
    cout << "\t" << Al <<"\t* * * * * *" << endl;
    cout << "\t\t* * * * * * *" << endl;
    cout << "\t\t* * * * * * * *" << endl;
    cout << "\t\t* * * * * * * * *" << endl;
    cout << "\t\t* * * * * * * * * *" << endl;
    cout << endl << "\t\t\t " << B;

    cout << "\n\n       Escolha a base do segundo triangulo: ";
    cin >> B2;
    cout << "       Escolha a altura do segundo triangulo: ";
    cin >> Al2;

    cout << endl<<"\t\t*" << endl;
    cout << "\t\t* * " << endl;
    cout << "\t\t* * *" << endl;
    cout << "\t\t* * * *" << endl;
    cout << "\t\t* * * * * " << endl;
    cout << "\t" << Al2 <<"\t* * * * * *" << endl;
    cout << "\t\t* * * * * * *" << endl;
    cout << "\t\t* * * * * * * *" << endl;
    cout << "\t\t* * * * * * * * *" << endl;
    cout << "\t\t* * * * * * * * * *" << endl;
    cout << endl << "\t\t\t " << B2;

    float A1 = escolha.area(B,Al);
    float A2 = escolha_2.area(B2,Al2);


    
    
        while(c ==1){
        {
                cout << "\n\n\n     O que gostaria de saber sobre os triangulos" << endl;
                cout << "     1 Hipotenusa" << endl;
                cout << "     2 Area" << endl;
                cout << "     3 Perimetro" << endl;
                cout << "     Escolha: ";
                cin >> operacao;

                if (operacao == 1)
                {
                    cout << "\n\n\tPRIMEIRO TRIANGULO" << "\t\t\t\tSEGUNDO TRIANGULO" << endl;
                    cout << endl<<"\t\t*" << "\t\t\t\t\t\t\t\t*" << endl;      
                    cout << "\t\t* * " << "\t\t\t\t\t\t\t* * " << endl;
                    cout << "\t\t* * *" << "\t\t\t\t\t\t\t* * *" <<endl;
                    cout << "\t\t* * * *" << "\t\t\t\t\t\t\t* * * *" << endl;
                    cout << "\t\t* * * * *     " << escolha.hipotenusa(B,Al) << "\t\t\t\t\t* * * * *     " << escolha.hipotenusa(B2,Al2) << endl;
                    cout << "\t" << Al <<"\t* * * * * *" << "\t\t\t\t\t" << Al2 <<"\t* * * * * *" << endl;
                    cout << "\t\t* * * * * * *" << "\t\t\t\t\t* * * * * * *" <<endl;
                    cout << "\t\t* * * * * * * *" << "\t\t\t\t\t* * * * * * * *" << endl;
                    cout << "\t\t* * * * * * * * *" << "\t\t\t\t* * * * * * * * *" << endl;
                    cout << "\t\t* * * * * * * * * *" << "\t\t\t\t* * * * * * * * * *" << endl;
                    cout << endl << "\t\t\t\t " << B << "\t\t\t\t\t\t\t\t" << B2;

                    cout << "\n\n\tA Hipotenusa do primeiro triangulo e: " << escolha.hipotenusa(B,Al) << endl;
                    cout << "\n\n\tA Hipotenusa do segundo triangulo e: " << escolha_2.hipotenusa(B2,Al2) << endl;
                }else
                if (operacao == 2)
                {
                    cout << "\n\t\tA Area do primeiro triangulo e: " << escolha.area(B,Al) << endl;
                     cout << "\n\t\tA Area do segundo triangulo e: " << escolha_2.area(B2,Al2) << endl;

                }else
                if (operacao == 3)
                {
                    cout <<"\n\t\tO perimetro do primeiro triangulo e: " << escolha.perimetro(B, Al,escolha.hipotenusa(B,Al)) << endl;
                     cout <<"\n\t\tO perimetro do segundo triangulo e: " << escolha_2.perimetro(B2, Al2,escolha_2.hipotenusa(B2,Al2)) << endl;
                }


        }
        

        cout << "\n\n Desejasaber outra informação? Digite 1 se SIM e 0 para NAO: ";
        cin >> c;
        

        
        }


        cout <<  "\n\n      A maior area entre os triangulos e";
    Triangulos::Comparar_area(A1,A2);

    cout << "\n\n Deseja calcular outros triangulos? Digite 1 se SIM e 0 para NAO: ";
        cin >> c;
        system("cls");
   
    }
}