import java.io.IOException;
import java.util.Scanner;
import java.math.BigInteger;

public class B {

	BigInteger[][] tabela = new BigInteger[51][50];

	void inicializa() {
		for (int i = 1; i <= 50; ++i) {
			tabela[i][0] = BigInteger.valueOf(1);;
			tabela[i][i-1] = BigInteger.valueOf(1);;
		}
	}

	BigInteger euler(int n, int k)
	{
		if (tabela[n][k] != null) {
			return tabela[n][k];
		}

		BigInteger a = euler(n-1, k-1).multiply(BigInteger.valueOf(n-k));
		BigInteger b = euler(n-1, k).multiply(BigInteger.valueOf(k+1));

		tabela[n][k] = a.add(b);

		return tabela[n][k];
	}
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()) {

        	int n = sc.nextInt();
        	int k = sc.nextInt();

        	B b = new B();
        	b.inicializa();
        	BigInteger result = b.euler(n, k);

        	System.out.println("E(" + n + "," + k + ") = " + result);
        }
    }
}