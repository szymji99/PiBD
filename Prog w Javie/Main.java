import java.io.BufferedReader;
import java.io.Console;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {

//        System.out.println("Hello World!");
//        System.out.println("Witamy w lab1!");
//
//        int i = 5;
//        boolean b = true;
//
//        System.out.println("Nasz int to " + i + ", a nasz boolean to " + b +".");

        //staroswieckie wczytywanie
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        String s = br.readLine();
//        System.out.println("Wczytano: " + s);

       //problem z wczytywaniem wielu danych
//        Scanner scanner = new Scanner(System.in);
//        long l = scanner.nextLong();
//        double d = scanner.nextDouble();
//        String s = scanner.next();
//        s = s + scanner.nextLine();
//        System.out.println("Long to: "+l+", double to: "+d+", string to: "+s);

       //inne rozwiazanie
//        Scanner scanner = new Scanner(System.in);
//        long l = scanner.nextLong();
//        double d = scanner.nextDouble();
//        scanner.skip("[\n\s]*");
//        String s = scanner.nextLine();
//        System.out.println("Long to:"+l+"\ndouble to:"+d+"\nstring to:"+s);

        //konsola systemowa
//        Console console = System.console();
//        if (console==null){
//            System.out.println("Brak konsoli.");
//        }
//        else {
//            String pass = new String(console.readPassword());
//            System.out.println("Twoje hasło to: " + pass);
//        }

        // Napisać program który maksymalnie 3 razy spyta o haslo
        // jesli próba jest niepoprawna, komunikat o błędzie i pyta ponownie
        // jeśli hasło jest poprawne, hasło poprawne i więcej nie pyta

        String Pass = "Okoń";
   //     boolean passCorrect = false;
        Console console = System.console();
        if (console==null){
            System.out.println("Brak konsoli.");
        }
        else {
            for (int i=0;i<3;i++) {
                System.out.println("Podaj hasło: ");
                String userInput = new String(console.readPassword());
                if(userInput.equals(Pass)){
                    System.out.println("Hasło prawidłowe.");
                    break;
                }
                else{
                    System.out.println("Hało nieprawidłowe");
                }
            }
        }


    }
}