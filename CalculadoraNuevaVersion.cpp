#include<iostream>

using namespace std;

int main(){

    int opcion=0;
    int contador = 0;

    float numero1;
    float numero2;
    float resultado;

    cout<<"Calculadora OTEIMA"<<endl;

    while(opcion!=5){
        
        cout <<"1. Suma"<< endl;
        cout <<"2. Resta"<< endl;
        cout <<"3. Multiplicacion"<< endl;
        cout <<"4. Division"<< endl;
        cout <<"5. Salir"<< endl;
        cout <<"---------------------------------" <<endl;
        cout <<"Selecione una opcion: ";
        cin  >> opcion;

        if(opcion>=1 && opcion<=4){
            cout <<"Ingrese dos numeros"<<endl;
            cout <<"Ingre el primer numero:"<<endl;
            cin  >> numero1;
            cout <<"Ingrese el segundo numero:"<<endl;
            cin  >> numero2;

            if(opcion ==1){
                resultado = numero1 + numero2;
            }
            else if(opcion ==2){
                resultado = numero1 - numero2;
            }
            else if(opcion ==3){
                resultado = numero1 * numero2;
            }
            else if(numero2 !=0){
                resultado= numero1/numero2;
            }
            else{ 
                resultado =0;
            }
            if(opcion !=4 || numero2 !=0){
                cout <<"Resultado:"<< resultado <<endl;
                contador++;
            }
            else{
                cout<<"No se pude dividir entre cero";
            }


        }
        else if(opcion !=5){
            cout <<"La opcion no es valida" <<endl;
        }
    }

    
    cout <<"Operaciones realizadas: " <<contador <<endl;
    return 0;

}  
