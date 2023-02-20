# Kelas Manusia
class Human():
    # Atribut Manusia:
    __nik = ""
    __nama = ""
    __jenis_kelamin = ""

    # Konstruktor
    def __init__(self, nik, nama, jenis_kelamin):
        self.nik = nik
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

    # Setter
    def set_nik(self, nik):
        self.nik = nik

    def set_nama(self, nama):
        self.nama = nama

    def set_jenis_kelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

    # Getter
    def get_nik(self):
        return self.nik

    def get_nama(self):
        return self.nama

    def get_jenis_kelamin(self):
        return self.jenis_kelamin