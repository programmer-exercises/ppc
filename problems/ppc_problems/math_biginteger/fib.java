
package big_int;

public class main {

	public static void main(String[] args) {
		Scanner scan = Scanner.new(System.in);
		long long a, b;
		a = scan.nextInt();
		b = scan.nextInt();
		fn = 0;
		fnm1 = 1;
		fnm2 = 2;
		for(int i = a; i<b ; i++){
			fn = fnm1 + fnm2;
			fnm1 = fn;
			fnm2 = fnm1;
		}
	}

}