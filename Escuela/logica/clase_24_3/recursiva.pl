d1:- write("limite inferior de la lista: "),
        read(M), nl,
        write("limite superior de la lista: "),
        read(N),
        lista1(M,N).

lista1(M,N):- M<N,
        tab(3),
        write(M),
        NuevoM is M + 1,
        lista1(NuevoM, N).

d2:- write("limite inferior de la lista: "),
    read(M2),nl,
    write("limite suoerior de la lista: "),
    read(N2),
    lista2(M2,N2).

lista2(M2, N2):- M2<N2, tab(3),write(M2),
        NuevoM2 is M2+5,
        lista2(NuevoM2,N2).

d3:- write("introduce el valor de n: "),
        read(N3),nl,
        write("limite de la lista: "),
        read(M3),nl,
        lista3(N3,M3).

lista3(N3,_M3):- N3<0, write("valor incorrecto"),nl,
        d3.

lista3(N3,M3):- (N3>=0, N3<M3), tab(3), 
        Valor is 2^N3, tab(3), write(Valor),
        NuevoN3 is N3 + 1, 
        lista3(NuevoN3, M3).

d4:- write("ingresa el valor de la tabla: "), 
    read(X),nl,
    write("ingresa el valor del cual empezar: "),
    read(Y),nl,
    write("ingresa el donde terminar: "),
    read(Z),nl,
    multi(X,Y,Z).

multi(X,Y,Z):- Y=<Z,nl,Y1 is Y,
        Q is X * Y1,
        write(X),write("*"),
        write(Y),write("= "),
        write(Q), nl, Y2 is Y + 1,
        multi(X,Y2,Z).

d5:- write("limite: "),
    read(Li),nl,
    C2 is 1,
    C1 is 0,
    s(Li,C1,C2).

s(Li,C1,C2):- Li>0, NuevoC1 is C1 + C2,NuevoLi is Li-1, tab(3), write(C2),s(NuevoLi,C2,NuevoC1).


cls:- write("\33\[2J").
