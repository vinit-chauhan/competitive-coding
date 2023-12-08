import java.util.Scanner;

class StartClass {
    private int n;
    StartClass(int n) {
        this.n = n;
    }

    public void getOutput() {
        System.out.println(n);
    }
}

class Main {
    public static void main(String[] args) {
        try(
            Scanner scanner = new Scanner(System.in);
        ) {
            int number = scanner.nextInt();
            new StartClass(number).getOutput();
        }
    }
}