# Import file:
from Human import Human

# Kelas SivitasAkademik (Child) - Mahasiswa (Parent)
class SivitasAkademik(Human):
    __asal_univ = ""
    __email_edu = ""

    # Konstuktor
    def __init__(self, asal_univ, email_edu):
        self.asal_univ = asal_univ
        self.email_edu = email_edu

    # Setter
    def set_asal_univ(self, asal_univ):
        self.asal_univ = asal_univ

    def set_email_edu(self, email_edu):
        self.email_edu = email_edu

    # Getter
    def get_asal_univ(self):
        return self.asal_univ
    
    def get_email_edu(self):
        return self.email_edu