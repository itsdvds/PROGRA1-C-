import java.util.Scanner;

public class java6 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Nombre del estudiante: ");
            String nombre = sc.nextLine();

            System.out.print("Porcentaje de asistencia (%): ");
            double asistencia = sc.nextDouble();

            double sumaNotas = 0;
            for (int i = 1; i <= 5; i++) {
                System.out.print("Nota del curso " + i + ": ");
                double nota = sc.nextDouble();
                sumaNotas += nota;
            }

            double promedio = sumaNotas / 5.0;

            System.out.println();
            System.out.println("RESULTADO");
            System.out.println("Estudiante: " + nombre);
            System.out.println("Asistencia: " + asistencia + " % ");
            System.out.println("Promedio: " + promedio);

            if (promedio > 70) {
                System.out.println("APROBO ZONA");
                System.out.println("El estudiante puede optar al examen final");
            } else {
                System.out.println("REPROBO");
                System.out.println("El estudiante no califica para optar al examen final");
            }
        }
    }
}

