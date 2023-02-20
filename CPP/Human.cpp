// Import library.
#include <iostream>
#include <string>

// Standard namespace.
using namespace std;

// Inisialisasi class.
class Human
{
    // Atribut Private.
    private:
        string nama;
        string nik;
        string jenis_kelamin;

    // Atribut Public.
    public:
        // Konstruktor.
        Human()
        {
            // Set default nilai atribut.
            this->nama = "";
            this->nik = "";
            this->jenis_kelamin = "";
        }

        Human(string nama, string nik, string jenis_kelamin)
        {
            // Set nilai atribut.
            this->nama = nama;
            this->nik = nik;
            this->jenis_kelamin = jenis_kelamin;
        }

        // Getter dan Setter.
        // Setter.
        void set_nama(string nama)
        {
            this->nama = nama;
        }
        void set_nik(string nik)
        {
            this->nik = nik;
        }
        void set_jenis_kelamin(string jenis_kelamin)
        {
            this->jenis_kelamin = jenis_kelamin;
        }

        // Getter.
        string get_nama()
        {
            return this->nama;
        }
        string get_nik()
        {
            return this->nik;
        }
        string get_jenis_kelamin()
        {
            return this->jenis_kelamin;
        }

        // Method Remove Attribute.
        void hapusDataManusia()
        {
            this->nama = "";
            this->nik = "";
            this->jenis_kelamin = "";
        }

        // Destruktor
        ~Human()
        {
            
        }
};