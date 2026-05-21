public class Prueba 
{
    public static void main(String[] args) {

        //Variables

        int existencias = 35;
        double precioCemaco = 1499.99;
        char genero = 'M';
        String nombre = "David";

        boolean inscrito = true;

        if (existencias > 50) {
            System.out.println("Hay demasiada existencia");
        }
        else if (existencias > 25) {
            System.out.println("Hay suficiente existencia");
        }
        else {
            System.out.println("Hay poca existencia");
        }

        //Bucles

        int variableWhile = 1;
        while (variableWhile < 11) {
            System.out.println("Esta es la repeticion while: " + variableWhile);
            variableWhile++;
        }

        int variableDoWhile = 10;
        do { 
            System.out.println("Esta es la repeticion do while: " + variableDoWhile);
            variableDoWhile--;
            
        } while (variableDoWhile > 0);

        for (int i = 1; i < 11; i ++) {
             System.out.println("Esta es la repeticion for: " + i);
        }

        System.out.println("Queria imprimir esto");

        System.out.println(precioCemaco);
        System.out.println(genero);
        System.out.println(nombre);
        System.out.println(inscrito);




    }
}