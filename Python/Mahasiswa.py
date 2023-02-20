# Import File:
from SivitasAkademik import SivitasAkademik
from Human import Human

# Kelas Mahssiwa (Child) - Human (Parent)
class Mahasiswa(SivitasAkademik):
    # Atribut Mahasiswa:
    __nim = ""
    __fakultas = ""
    __prodi = ""

    # Konstruktor
    def __init__(self, nik, nama, jenis_kelamin, asal_univ, fakultas, prodi, nim, email_edu):
        Human.__init__(self, nik, nama, jenis_kelamin)
        SivitasAkademik.__init__(self, asal_univ, email_edu)
        self.nim = nim
        self.fakultas = fakultas
        self.prodi = prodi

    # Setter
    def set_nim(self, nim):
        self.nim = nim

    def set_prodi(self, prodi):
        self.prodi = prodi

    def set_fakultas(self, fakultas):
        self.fakultas = fakultas

    # Getter
    def get_nim(self):
        return self.nim

    def get_prodi(self):
        return self.prodi

    def get_fakultas(self):
        return self.fakultas