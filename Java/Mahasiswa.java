// Konstruktor.
public class Mahasiswa extends SivitasAkademik
{
    // Private atribut:
    private String nim;
    private String fakultas;
    private String prodi;

    public Mahasiswa()
    {
        this.nim = "";
        this.fakultas = "";
        this.prodi = "";
    }
    
    public Mahasiswa(String nim, String fakultas, String prodi)
    {
        this.nim = nim;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }
    
    // Getter dan Setter.
    // Setter.
    public void set_nim(String nim)
    {
        this.nim = nim;
    }
    public void set_fakultas(String fakultas)
    {
        this.fakultas = fakultas;
    }
    public void set_prodi(String prodi)
    {
        this.prodi = prodi;
    }

    // Getter.
    public String get_nim()
    {
        return this.nim;
    }
    public String get_fakultas()
    {
        return this.fakultas;
    }
    public String get_prodi()
    {
        return this.prodi;
    }
}