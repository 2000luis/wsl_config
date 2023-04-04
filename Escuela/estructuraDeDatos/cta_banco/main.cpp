#include <iostream>
using namespace std;

class cta_banco
{
    private:
        string nombre;
        int num_cta;
        float saldo;

    public:
        cta_banco();
        void deposito(float);
        void retiro(float);
        void consulta_saldo();
};

cta_banco::cta_banco()
{
    cout << "Numero de cuenta: ";
    cin >> num_cta;
    cout << "Usuario: ";
    cin >> nombre;
    saldo = 0;
}

void cta_banco::deposito(float cantidad)
{
    saldo += cantidad;
        cout << "╭Nuevo saldo" << endl;
        cout << "╰→";
        cout << saldo;
        cout << endl;
        cout << "________________________________________________" << endl;
}

void cta_banco::retiro(float cantidad)
{
cout << "╭Saldo retirado" << endl;
cout << "╰→";
cout << cantidad;
    cout << endl;
    cout << "________________________________________________" << endl;
    cout << endl;
}

void cta_banco::consulta_saldo()
{
cout << "╭Saldo actual" << endl;
cout << "╰→";
cout << saldo;
cout << endl;
    cout << "________________________________________________" << endl;
}


/* funciones */
void reinicar(cta_banco);
void menu(cta_banco);

int main(){


    cta_banco x;
    menu(x);

    reinicar(x);

}

void reinicar(cta_banco x)
{
    string respuesta;

    cout << endl;
    cout << "╭¿Otra operacion?" << endl;
    cout << "╰→";
    cin >> respuesta;
    cout << endl;

    if (respuesta == "si")
    {
    cout << "________________________________________________" << endl << endl;
    cout << " Nueva Operacion" << endl << endl;
        menu(x);
        reinicar(x);

    }else{

        cout << endl << "Buen dia";
    }

}

void menu(cta_banco x)
{
    string operacion;
    cout << "╭¿Que operacion deseas hacer? (retirar, saldo, deposito)" << endl;
    cout << "╰→";
    cin >> operacion;
    cout << endl;

    if (operacion == "retirar")
    {
        float cantidad;
       cout << "╭Cantidad a retirar" << endl;
        cout << "╰→";
        cin >> cantidad;
        cout << endl;
        x.retiro(cantidad);
    }else if(operacion == "saldo")
    {
        x.consulta_saldo();
    }else if(operacion == "deposito")
    {
        float cantidad;
       cout << "╭Cantidad a depositar" << endl;
        cout << "╰→";
        cin >> cantidad;
        cout << endl;
        x.deposito(cantidad);
    }
}
