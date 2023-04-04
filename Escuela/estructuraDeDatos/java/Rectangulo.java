public class Rectangulo {
    private int base;
    private int altura;

    public Rectangulo() {
        base = 3;
        altura = 3;
    }

    public Rectangulo(int b, int h) {
        base = b;
        altura = h;
    }

    public int perimetro() {
        return 2 * (base + altura);
    }

    public int area() {
        return base * altura;
    }

    public void imprimir() {
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < base; j++) {
                if (i == 0 || i == altura - 1 || j == 0 || j == base - 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Rectangulo rect1 = new Rectangulo();
        Rectangulo rect2 = new Rectangulo(5, 3);

        System.out.println("Rectángulo 1:");
        System.out.println("Perímetro: " + rect1.perimetro());
        System.out.println("Área: " + rect1.area());
        rect1.imprimir();

        System.out.println("Rectángulo 2:");
        System.out.println("Perímetro: " + rect2.perimetro());
        System.out.println("Área: " + rect2.area());
        rect2.imprimir();
    }
}
