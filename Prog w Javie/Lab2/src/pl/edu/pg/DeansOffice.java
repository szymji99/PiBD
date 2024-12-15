package pl.edu.pg;

import pl.edu.pg.model.Person;
import pl.edu.pg.model.Student;
import pl.edu.pg.model.StudentStatus;
import pl.edu.pg.model.Teacher;

import java.util.*;

public class DeansOffice {

    List <Person> people = new ArrayList<>();

    private void showStats(){
        System.out.println("Aktualna liczba utworzonych studentów: " + Student.getStudentCount() );
        System.out.println("Aktualna liczba nauczycieli: " + Teacher.getTeacherCount() );
        System.out.println(" ");
    }

    private void testStudent(){
        Student s1 = new Student ("Szymon",
                "Grygiel",
                97031102117L) ;
        Student s2 = new Student("Jan",
                "Kowalski",
                98041232121L,
                "A3213bfF");
        s1.info();
        s2.info();
        this.people.add(s1);
        this.people.add(s2);
        this.people.add(new Student("Jan", "Nowak", 1221414L,"rewea24144"));

    }

    private void testTeacher(){
        Teacher t1 = new Teacher("Andrzej",
                "Iwański",
                981231313);
        Teacher t2 = new Teacher("Iwan",
                "Andrzejski",
                981231313,
                "Doktor nauk");
        t1.info();
        t2.info();
        this.people.add(t1);
        this.people.add(t2);
    }

    private void testPerson(){
        Person p1 = new Teacher ("Elżbieta","Wojciechowska",691111134342L, "mgr.");
        p1.info();
        this.people.add(p1);
    }

    private void testPolymorphism(){

        Person p2;
        Scanner scanner = new Scanner(System.in);
        int selectedOption = scanner.nextInt();
        if(selectedOption==1){
            p2 = new Student("Aaron",
                    "Nowak",
                    233432525L);
        }
        else{
            p2 = new Teacher("Wiesława",
                    "Wiechowicz",
                    6634543542L,
                    "mgr.");


        }

        if (p2 instanceof Student){
            ((Student) p2).setStatus(StudentStatus.GRADUATE);
        }
        p2.info();
        this.people.add(p2);
    }

    private void showPersonList(){

        for (Person person:this.people) {

            person.info();
        };
    }

    private void testPersonSearch(){

        System.out.println("Szukanie osoby po peselu:");
        try {
            Person personByPesel  = findPersonByPesel(null);
            if (personByPesel!=null){
                System.out.println("Znaleziono osobę: ");
                personByPesel.info();
            }
            else{
                System.out.println("Nie znaleziono osoby");
            }
        } catch (IllegalArgumentException e) {
            System.out.println("Błąd przy wyszukiwaniu osoby");
            e.printStackTrace();
        }
        catch (Exception e) {
            System.out.println("Tajemniczy błąd");
            e.printStackTrace();
        }
    }

    private Person findPersonByPesel(Long pesel) throws Exception {

        if (pesel==null){
            throw new IllegalArgumentException("Brak wymaganego parametru pesel");

        }
        for (Person p:this.people){
            if (p.getPesel() == pesel){
                return p;
            }
        };

        return null;
        //albo zwrócić optional
    }

    private Person createNewStudent(){

        Scanner scanner = new Scanner(System.in);

        System.out.println("Podaj imię: ");
        String firstName = scanner.next();
        System.out.println("Podaj nazwisko: ");
        String lastName = scanner.next();
        long pesel = scanner.nextLong();

        return new Student(firstName,lastName,pesel);

    }

    private void addNewStudent(){
        people.add(createNewStudent());
    }

    private void testSet(){
        Set<Student> studentSet =  new HashSet<>();
        studentSet.add(new Student("Imie1", "Nazw1",12233));
        studentSet.add(new Student("Imie 2", "Nazw 2", 1242323));

        Student s1 = new Student("Imie 3","Nazw 3",21344234522L);
        Student s2= new Student("Imie 3","Nazw 3",21344234522L);
        Student s3= new Student("Imie 4","Nazw 4",2132131L);
        studentSet.add(s1);
        studentSet.add(s2);
        studentSet.add(s3);
        for (Student s:studentSet) {
            s.info();
        }

    }

    private void sortPeopleByLastName(){

        people.sort((p1,p2)-> {return p1.getLastName().compareTo(p2.getLastName()); } );

    }

    public void start(){
        System.out.println("Witamy w Dziekanacie!");

        showStats();
        testStudent();
        testTeacher();
        testPerson();
        sortPeopleByLastName();

        System.out.println("\n\n");

        showPersonList();
//        testPolymorphism();
//        testPersonSearch();

//        addNewStudent();
//        showPersonList();
//        showStats();










        //ctrl+shift+n
        //ctrl+alt+strzałka


    }



}
