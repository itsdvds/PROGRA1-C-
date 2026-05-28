import java.util.Scanner;
public class Main2
{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int numero, multiplicar;

        System.out.print("Ingresa un numero: ");
        numero = sc.nextInt();

        for (int i = 1; i <= 10; i++)
        {
            multiplicar = numero * i;
            System.out.println(numero + " x " + i + " = " + multiplicar);
            
        }
    }
}