package pl.edu.pg.model;

import java.util.Objects;

public class Student extends Person {

    private String albumNumber;
    private StudentStatus status;
    private static int studentCount=0;

    public Student(String firstName, String lastName, long pesel) {
        super(++studentCount, firstName,lastName,pesel);
    }

    public Student(String firstName, String lastName, long pesel, String albumNumber){
        this(firstName, lastName, pesel);
        this.albumNumber = albumNumber;
        this.status = StudentStatus.ACTIVE;
    }

    public void info(){
        System.out.println("Student "+id+":");
        System.out.println("Imię: " +firstName +" "+lastName);
        System.out.println("PESEL: "+pesel);
        System.out.println("Nr. Albumu: "+albumNumber);
        System.out.println("Status: "+status);
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Student student)) return false;
        if (!(super.equals(o))) return false;
        return Objects.equals(albumNumber, student.albumNumber) && status == student.status;
    }

    @Override
    public int hashCode() {
        return Objects.hash(albumNumber);
    }

    // GETTERY I  SETTERY
    public String getAlbumNumber() {
        return albumNumber;
    }

    public StudentStatus getStatus() {
        return status;
    }

    public void setAlbumNumber(String albumNumber) {
        this.albumNumber = albumNumber;
    }

    public void setStatus(StudentStatus status) {
        this.status = status;
    }

    public static int getStudentCount() {
        return studentCount;
    }
}
