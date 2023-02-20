// Konstruktor.
public class SivitasAkademik extends Human
{
    // Private atribut:
    private String asal_univ;
    private String email_edu;

    public SivitasAkademik()
    {
        this.asal_univ = "";
        this.email_edu = "";
    }
    
    public SivitasAkademik(String asal_univ, String email_edu)
    {
        this.asal_univ = asal_univ;
        this.email_edu = email_edu;
    }
    
    // Getter dan Setter.
    // Setter.
    public void set_asal_univ(String asal_univ)
    {
        this.asal_univ = asal_univ;
    }
    public void set_email_edu(String email_edu)
    {
        this.email_edu = email_edu;
    }

    // Getter.
    public String get_asal_univ()
    {
        return this.asal_univ;
    }
    public String get_email_edu()
    {
        return this.email_edu;
    }
}
