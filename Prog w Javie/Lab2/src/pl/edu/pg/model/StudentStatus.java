package pl.edu.pg.model;

public enum StudentStatus {
    ACTIVE("Aktywny","Active"),
    DELETED("Skreślony","Crossed"),
    GRADUATE("Absolwent","Absolvent");
    private String valuePL;
    private String valueEN;


    StudentStatus(String valuePL,String valueEN) {
        this.valuePL = valuePL;
        this.valueEN = valueEN;
    }

    @Override
    public String toString() {
        return valuePL;
    }
}