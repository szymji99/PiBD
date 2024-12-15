package pl.edu.pg.model;

public class Teacher extends Person {

    private String degree;
    private static int teacherCount = 0;

    public Teacher(String firstName, String lastName, long pesel) {
        super(++teacherCount, firstName, lastName, pesel);
    }

    public Teacher(String firstName, String lastName, long pesel, String degree) {
        this(firstName,lastName,pesel);
        this.degree = degree;
    }

    public void info(){
        System.out.println("Nauczyciel "+id+":");
        System.out.println("Imię: " +firstName +" "+lastName);
        System.out.println("PESEL: "+pesel);
        System.out.println("Stopień naukowy: "+degree);
    }

    // SETTERY I GETTERY
    public String getDegree() {
        return degree;
    }
    public void setDegree(String degree) {
        this.degree = degree;
    }

    public static int getTeacherCount() {
        return teacherCount;
    }
}
