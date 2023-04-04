
indice:- nl, write("IMC"),nl,
        write("Peso: "),
        read(P),nl,
        write("Altura: "),
        read(H),
        imc(P, H).



imc(P, H):- (P =< 40 ; P > 300 ; H =< 1.0 ; H > 2.4) -> write("Informacion invalida"), indice;
Nimc is P/(H)**2,
        write(Nimc),nl,
        display(Nimc).

display(Nimc):- (18.5 >= Nimc) -> write("Bajo peso");
(18.5 =< Nimc, 24.99 >= Nimc) -> write("Peso Normal");
(25 =< Nimc, 26.99 >= Nimc) -> write("Sobre Peso");
(27 =< Nimc, 29.99 >= Nimc) -> write("Sobre Peso Grado 2");
(30 =< Nimc, 34.99 >= Nimc) -> write("Obesidad tipo 1");
(35 =< Nimc, 39.99 >= Nimc) -> write("Obesidad tipo 2");
(40 =< Nimc, 49.99 >= Nimc) -> write("Obesidad tipo 3");
(50 =< Nimc) -> write("obesidad tipo 4").




