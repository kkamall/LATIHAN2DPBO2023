// Import library dan files.
#include "SivitasAkademik.cpp"

// Standard namespace.
using namespace std;

// Inisialisasi class.
class Mahasiswa : public SivitasAkademik
{
    // Atribut Private.
    private:
        string nim;
        string prodi;
        string fakultas;

    // Atribut Public.
    public:
        // Konstruktor.
        Mahasiswa()
        {
            // Set default nilai atribut.
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        Mahasiswa(string nim, string prodi, string fakultas)
        {
            // Set nilai atribut.
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        // Getter dan Setter.
        // Setter.
        void set_nim(string nim)
        {
            this->nim = nim;
        }
        void set_prodi(string prodi)
        {
            this->prodi = prodi;
        }
        void set_fakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        // Getter.
        string get_nim()
        {
            return this->nim;
        }
        string get_fakultas()
        {
            return this->fakultas;
        }
        string get_prodi()
        {
            return this->prodi;
        }

        // Method Remove Attribute.
        void hapusDataMahasiswa()
        {
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        // Destruktor
        ~Mahasiswa()
        {
            
        }
};