package main;

public class Main {

	public static void main(String[] args) throws Exception {
		int[] array = null;
		while (true) {
			array = new int[10000];
			System.out.println("Bytes livres: " + Runtime.getRuntime().freeMemory());
			Thread.sleep(200);
		}
	}
}
