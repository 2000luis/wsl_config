#include <iostream>



using namespace std;



class Rectangulo {

    public:

        int base, altura;



        Rectangulo(int b = 3, int h = 3) {

            base = b;

            altura = h;

        }



        int perimetro() {

            return 2 * (base + altura);

        }



        int area() {

            return base * altura;

        }



        void imprimir() {

            for (int i = 0; i < altura; i++) {

                for (int j = 0; j < base; j++) {

                    cout << "*";

                }

                cout << endl;

            }

        }

};



int main() {

    Rectangulo x;

    Rectangulo y(10, 5);



    cout << "Perímetro de x: " << x.perimetro() << endl;

    cout << "Área de x: " << x.area() << endl;

    cout << "Representación gráfica de x:" << endl;

    x.imprimir();



    cout << "Perímetro de y: " << y.perimetro() << endl;

    cout << "Área de y: " << y.area() << endl;

    cout << "Representación gráfica de y:" << endl;

    y.imprimir();



    return 0;

}


