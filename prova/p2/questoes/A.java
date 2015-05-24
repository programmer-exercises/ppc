package big_int;
import java.math.BigInteger;

	// unsigned long long exponente(int base, int expn){
	// 	int res = 1;
	// 	while(expn){
	// 		if(expn%2)
	// 			res *= base;
	// 		base *= base;
	// 		expn>>=1; // Divisao por 2
	// 	}
	// 	return res;
	// }

	// unsigned long long combinacao(int n, int m){
	// 	unsigned long long comb = 0;
	// 	comb = exponente(n,m) - fatorial(n)/(fatorial(n-m)*fatorial(m));
	// 	return comb;
	// }

	// int main(){

	// 	int n;
	// 	while(cin >> n){
	// 		cout << combinacao(n+1,2) << " pecas" << endl;
	// 	}

	// 	return 0;
	// }

public class A {

	private static BigInteger TWO  = new BigInteger("2");
    private static BigInteger ONE  = BigInteger.ONE;
    private static BigInteger ZERO = BigInteger.ZERO;

	public BigInteger exponente(){

		return result;
	}

	public static void main(String[] args) {
		Scanner scan = Scanner.new(System.in);
		String a = scan.next();
		BigInteger ba = new BigInteger(a);
	}
}