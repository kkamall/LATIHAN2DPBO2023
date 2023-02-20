// Konstruktor.
public class Human
{
    // Private atribut:
    private String nik;
    private String nama;
    private String jenis_kelamin;

    public Human()
    {
        this.nik = "";
        this.nama = "";
        this.jenis_kelamin = "";
    }
    
    public Human(String nama, String nik, String jenis_kelamin)
    {
        this.nama = nama;
        this.nik = nik;
        this.jenis_kelamin = jenis_kelamin;
    }
    
    // Getter dan Setter.
    // Setter.
    public void set_nama(String nama)
    {
        this.nama = nama;
    }
    public void set_nik(String nik)
    {
        this.nik = nik;
    }
    public void set_jenis_kelamin(String jenis_kelamin)
    {
        this.jenis_kelamin = jenis_kelamin;
    }

    // Getter.
    public String get_nama()
    {
        return this.nama;
    }
    public String get_nik()
    {
        return this.nik;
    }
    public String get_jenis_kelamin()
    {
        return this.jenis_kelamin;
    }
}
