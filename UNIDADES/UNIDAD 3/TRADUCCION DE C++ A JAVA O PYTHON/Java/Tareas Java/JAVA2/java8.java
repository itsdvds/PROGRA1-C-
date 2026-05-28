import java.util.Scanner;

public class java8 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		final int N = 15;
		double[] notas = new double[N];

		System.out.println("Ingrese 15 notas (0-100), presione Enter después de cada una:");
		for (int i = 0; i < N; i++) {
			System.out.print("Nota " + (i + 1) + ": ");
			while (!sc.hasNextDouble()) {
				System.out.println("Entrada inválida. Ingrese un número.");
				sc.next();
			}
			double n = sc.nextDouble();
			if (n < 0) n = 0;
			notas[i] = n;
		}

		double suma = 0;
		for (double v : notas) suma += v;
		double promedio = suma / N;

		System.out.println("Promedio de la clase:" + promedio + " %");

		for (int i = 0; i < N; i++) {
			String estado = (notas[i] >= 61) ? "Aprueba" : "No aprueba";
			System.out.println("Alumno " + (i + 1) + ": " + notas[i] + " - " + estado);
		}
	}
}

