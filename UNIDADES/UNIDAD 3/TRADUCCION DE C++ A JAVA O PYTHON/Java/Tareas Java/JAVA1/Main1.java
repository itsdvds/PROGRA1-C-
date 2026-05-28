
import java.util.Scanner;


public class Main1
{
    public static void main(String[] args) {

        // Indicar si el numero es par o impar

        Scanner sc = new Scanner(System.in);

        int numero,numero2;

        System.out.print("Ingresa un numero: ");
        numero = sc.nextInt();

        System.out.print("Ingresa otro numero: ");
        numero2 = sc.nextInt();


        if (numero % 2 == 0 && numero2 % 2 != 0) {
            System.out.println("El numero " + numero + " es par" + " y " + "el numero " + numero2 + " es impar.");
        }
        else if (numero % 2 != 0 && numero2 % 2 == 0) {
            System.out.println("El numero " + numero + " es impar" + " y " + "el numero " + numero2 + " es par.");
        }
        else if (numero % 2 == 0 && numero2 % 2 == 0) {
            System.out.println("Los numeros " + numero + " y " + numero2 + " son pares.");
        }
        else {
            System.out.println("Los numeros " + numero + " y " + numero2 + " son impares.");
        }
        
    }
}