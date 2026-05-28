import java.util.Scanner;

public class java7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] dias = {"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"};
        double[] ventas = new double[dias.length];
        double totalSemanal = 0;

        for (int i = 0; i < dias.length; i++) {
            System.out.print("Ingrese las ventas de " + dias[i] + ": ");
            ventas[i] = scanner.nextDouble();
            totalSemanal += ventas[i];
        }

        double promedio = totalSemanal / dias.length;

        System.out.println("Total semanal: " + totalSemanal);
        System.out.println("Promedio diario: " + promedio);

        if (promedio >= 7000 && promedio <= 10000) {
            System.out.println("semana normal");
        } else if (promedio > 10000 && promedio <= 15000) {
            System.out.println("buena semana");
        } else if (promedio > 15000) {
            System.out.println("semana sobresaliente");
        } else {
            System.out.println("promedio menor a 7000");
        }
    }
}
