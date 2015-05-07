import java.math.BigInteger;
import java.util.Scanner;

public class Main{

	public static void main(String[] arg){
		Scanner scanner = new Scanner(Systema.in);

		while(scanner.hasNext()){
			/* leitura com long
			long n = scanner.nextLong();
			BigInteger big = BigInteger.valueOf(n);
			*/

			/* leitura de numero em string
			String n = scanner.next();
			BigInteger big = new BigInteger(n);
			*/

			/*
			String n = scanner.next();
			BigInteger b = new BigInteger(n,2);
			*/

			// System.out.println(big.toString(16)); // Base hexadecimal

			BigInteger a = scanner.nextBigInteger();
			BigInteger b = scanner.nextBigInteger();

			System.out.println(a.add(b)); 		// Adição [ Não altera o valor de b ]
			System.out.println(a.subtract(b)); 	// Subitração
			System.out.println(a.multiply(b)); 	// Multiplaicação
			System.out.println(a.divide(b));	// Divisão
			System.out.println(a.mod(b));		// Modulo
			System.out.println(a.remainder(b));	// Resto
			System.out.println(a.pow(10000)); 	// Exponenciãção
		}
	}

}