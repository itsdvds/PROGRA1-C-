
import java.util.Scanner;

public class Main3
{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String frase;

        int largo;

        System.out.print("Ingresa tu frase: ");
        frase = sc.nextLine();

        largo = frase.length();

        for (int i = 1; i <= largo ; i++)
    {

        System.out.println(frase);
        
    }

    System.out.println("Espero verlo en progra 2 inge, lo quiero mucho");
}
}