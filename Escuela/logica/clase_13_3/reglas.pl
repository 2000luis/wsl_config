pedir:- nl, write("Area de un circulo"),nl,
        write("Ingresa el valor del Radio: "),
        read(Radio),
        circulo(Radio).

circulo(Radio):- Radio =< 0,
                write("Valor incorrecto!!!"),
                pedir.

circulo(Radio):- Area is pi * (Radio^2),
        write("El area de la figura es: "),
        write(Area).

aCC:- nl, 
            write("Vas a introducir 2 valores"), 
            nl,
            write("Introduce la radio mayor: "),
            read(Rmayor),
            write("Introduce la base menor "),
            read(Rmenor),
            coronaC(Rmenor, Rmayor).

coronaC(Rmayor):- Rmayor =< 0,
                write("Valor incorrecto!!!"),
                pedir.
coronaC(Rmenor):- Rmenor =< 0,
                write("Valor incorrecto!!!"),
                pedir.

coronaC(Rmenor, Rmayor):- AreaCC is ((Rmayor)**2 - (Rmenor)**2) * pi,
            write("El area del la corona circular es: "),
            write(AreaCC).


aT:- nl, 
            write("Vas a introducir 3 valores Base menor, Base mayor, Altura"), 
            nl,
            write("Introduce la base mayor: "),
            read(Bmenor),
            write("Introduce la base menor "),
            read(Bmayor),
            write("Introduce la altura"),
            read(H),
            trapecio(Bmenor, Bmayor, H).

trapecio(Bmayor):- Bmayor =< 0,
                write("Valor incorrecto!!!"),
                aT.
trapecio(Bmenor):- Bmenor =< 0,
                write("Valor incorrecto!!!"),
                aT.
trapecio(H):- H =< 0,
                write("Valor incorrecto!!!"),
                aT.

trapecio(Bmenor, Bmayor, H):- Areatrapecio is (Bmayor + Bmenor) * (H) / 2,
            write("El area del trapecio es: "),
            write(Areatrapecio).


vE:- nl, 
            write("Introducir el valor"), 
            nl,
            write("Introduce la radio : "),
            read(R),
            volumen(R).

volumen(R):- R =< 0,
                write("Valor incorrecto!!!"),
                vE.

volumen(R):- Ve is (4/3)*pi*R**3,
            write("Volumen del circulo: "),
            write(Ve).

distancia:- write("DIstancia entre dos puntos"),
write("Ingresa el valor de x1"),
        read(X1),                                               
write("Ingresa el valor de y1"),
        read(Y1),                                               
write("Ingresa el valor de x2"),                        
read(X2),                                               
write("Ingresa el valor de y2"),
read(Y2),                                               
dis(X1,Y1,X2,Y2).

dis(X1,X2,Y1,Y2):- write("d=√((x_2-x_1)²+(y_2-y_1)^2)"),
        D is sqrt((X2-X1)^2 + (Y2-Y1)^2),  
        write("La distancia entre estos puntos es: "),
        write(D).


fg:- nl,write("Formula general"),nl,
    write("a "),
    read(A),nl,
    write("b "),
    read(B),nl,
    write("c "),
    read(C),nl,
    formu(A,B,C).

formu(A,_B,_C):- A=:=0,
    write("Valor esta incorrecto"),
    fg.

formu(A,B,C):- A=\=0, R is B**2-4*A*C,
        write("discriminante = "),
        write(R),
        resultado(R).

resultado(R):- R=:=0,
%terminar


 menu:- cls,
    tab(10),write(" **** MENU **** "),nl, pausa,
    tab(10),write("1) Area de un circulo "),nl,
    tab(10),write("2) Area de un trapecio "),nl,
    tab(10),write("3) Area de una corona circular"),nl,
    tab(10),write("4) Volumen de una esfera"),nl,
    tab(10),write("5) Distancia entre 2 puntos "),nl,
    tab(10),write("6) Teorema de Pitagoras "),nl,
    tab(10),write("0) Salir "),nl,
    tab(10),write("Elegir --->"),read(Op),
    elegir(Op).

elegir(Op):-(Op =\=1, Op=\=1,Op=\=2,Op=\=3,Op=\=4,Op=\=0,Op=\=5,Op=\=6).
elegir(Op):-(Op =:=1),pedir.
elegir(Op):-(Op =:=2),aCC.
elegir(Op):-(Op =:=3),aT.
elegir(Op):-(Op =:=4),vE.
elegir(Op):-(Op =:=5),distancia.
elegir(Op):-(Op =:=6),fg.
elegir(Op):-(Op =:=0),nl,write("gracias por usar").

cls:- write("\33\[2J").
pausa:-nl,tab(10),
write("presiona <Enter>"),
skip(10).
