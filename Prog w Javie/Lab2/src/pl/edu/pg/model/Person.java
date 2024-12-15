package pl.edu.pg.model;

import java.util.Objects;

public abstract class Person {
    protected int id;
    protected String firstName;
    protected String lastName;
    protected long pesel;

    public Person(int id, String firstName, String lastName, long pesel) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.pesel = pesel;
    }

    public abstract void info();

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Person person)) return false;
        return pesel == person.pesel && Objects.equals(firstName, person.firstName) && Objects.equals(lastName, person.lastName);
    }

    @Override
    public int hashCode() {
        return Objects.hash(pesel);
    }

    // GETTERY I SETTERY
    public int getId() {
        return id;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public long getPesel() {
        return pesel;
    }


}
