// Import library dan files.
#include "Human.cpp"

// Standard namespace.
using namespace std;

// Inisialisasi class.
class SivitasAkademik : public Human
{
    // Atribut Private.
    private:
        string asal_univ;
        string email_edu;

    // Atribut Public.
    public:
        // Konstruktor.
        SivitasAkademik()
        {
            // Set default nilai atribut.
            this->asal_univ = "";
            this->email_edu = "";
        }

        SivitasAkademik(string asal_univ, string email_edu)
        {
            // Set nilai atribut.
            this->asal_univ = asal_univ;
            this->email_edu = email_edu;
        }

        // Getter dan Setter.
        // Setter.
        void set_asal_univ(string asal_univ)
        {
            this->asal_univ = asal_univ;
        }
        void set_email_edu(string email_edu)
        {
            this->email_edu = email_edu;
        }

        // Getter.
        string get_asal_univ()
        {
            return this->asal_univ;
        }
        string get_email_edu()
        {
            return this->email_edu;
        }

        // Method Remove Attribute.
        void hapusDataSivitasAkademik()
        {
            this->email_edu = "";
            this->asal_univ = "";
        }

        // Destruktor
        ~SivitasAkademik()
        {
            
        }
};