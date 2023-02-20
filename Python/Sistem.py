# Import class
from Mahasiswa import Mahasiswa

# Inisialisasi class
class Sistem:
    # Method menambah data atribut ke dalam objek list
    def add_data(dataManusia):
        # Input data atribut mahasiswa
        nik = str(input("Masukkan NIK Mahasiswa: "))
        nama = str(input("Masukkan Nama Mahasiswa: "))
        jenis_kelamin = str(input("Masukkan Jenis Kelamin Mahasiswa: "))
        asal_univ = str(input("Masukkan Universitas Mahasiswa: "))
        fakultas = str(input("Masukkan Fakultas Mahasiswa: "))
        prodi = str(input("Masukkan Prodi Mahasiswa: "))
        nim = str(input("Masukkan NIM Mahasiswa: "))
        email_edu = str(input("Masukkan Email EDU Mahasiswa: "))
        # Memasukkan data mahasiswa ke dalam objek list
        dataManusia.append(Mahasiswa(nik, nama, jenis_kelamin, asal_univ, fakultas, prodi, nim, email_edu))

    # Method mengubah data atribut ke dalam objek list
    def ubah_data(dataManusia):
        # Input data atribut NIM mahasiswa yang ingin diubah
        nim_ubah = str(input("Masukkan NIM Mahasiswa yang Ingin Diubah: "))
        i = 0
        flag = 0
        # Looping mencari index data atribut mahasiswa berdasarkan NIM inputan user
        while flag == 0:
            if dataManusia[i].get_nim() == nim_ubah:
                index = i
                flag = 1
            i += 1
        # Input data atribut mahasiswa kembali
        nik = str(input("Masukkan NIK Mahasiswa: "))
        nama = str(input("Masukkan Nama Mahasiswa: "))
        jenis_kelamin = str(input("Masukkan Jenis Kelamin Mahasiswa: "))
        asal_univ = str(input("Masukkan Universitas Mahasiswa: "))
        fakultas = str(input("Masukkan Fakultas Mahasiswa: "))
        prodi = str(input("Masukkan Prodi Mahasiswa: "))
        nim = str(input("Masukkan NIM Mahasiswa: "))
        email_edu = str(input("Masukkan Email EDU Mahasiswa: "))
        # Re-Assign nilai pada objek list
        dataManusia[index].set_nik(nik)
        dataManusia[index].set_nama(nama)
        dataManusia[index].set_jenis_kelamin(jenis_kelamin)
        dataManusia[index].set_asal_univ(asal_univ)
        dataManusia[index].set_fakultas(fakultas)
        dataManusia[index].set_prodi(prodi)
        dataManusia[index].set_nim(nim)
        dataManusia[index].set_email_edu(email_edu)

    # Method menghapus data atribut mahasiswa
    def hapus_data(dataManusia):
        # Input data atribut NIM mahasiswa yang ingin dihapus
        nim_hapus = str(input("Masukkan NIM Mahasiswa yang Ingin Dihapus: "))
        flag = 0
        i = 0
        # Looping mencari index data atribut mahasiswa berdasarkan NIM inputan user
        while flag == 0:
            if dataManusia[i].get_nim() == nim_hapus:
                index = i
                flag = 1
            i += 1
        # Menghapus data atribut mahasiswa dari objek list
        dataManusia.pop(index)

    # Method untuk menampilkan data mahasiswa
    def tampilkan_data(dataManusia):
        print("Press Enter to Continue...\n---")

        # Mencari String Terpanjang
        if len(dataManusia) == 0:
            print("Belum Ada Data Mahasiswa yang Terekam...")
        else:
            print("Data Mahasiswa:")
            # Mencari string terpanjang
            panjang = [3, 4, 13, 9, 8, 13, 3, 9]
            for pembelajar in dataManusia:
                # String NIM terpanjang
                if len(pembelajar.get_nik()) > panjang[0]:
                    panjang[0] = len(pembelajar.get_nik())
                if len(pembelajar.get_nama()) > panjang[1]:
                    panjang[1] = len(pembelajar.get_nama())
                if len(pembelajar.get_jenis_kelamin()) > panjang[2]:
                    panjang[2] = len(pembelajar.get_jenis_kelamin())
                if len(pembelajar.get_asal_univ()) > panjang[3]:
                    panjang[3] = len(pembelajar.get_asal_univ())
                if len(pembelajar.get_fakultas()) > panjang[4]:
                    panjang[4] = len(pembelajar.get_fakultas())
                if len(pembelajar.get_prodi()) > panjang[5]:
                    panjang[5] = len(pembelajar.get_prodi())
                if len(pembelajar.get_nim()) > panjang[6]:
                    panjang[6] = len(pembelajar.get_nim())
                if len(pembelajar.get_email_edu()) > panjang[7]:
                    panjang[7] = len(pembelajar.get_email_edu())
            
            # Menampilkan Header Tabel
            # Bagian Atas
            print("+", end="")
            # NIK
            for i in range(panjang[0] + 2):
                print("-", end="")
            print("+", end="")
            # Nama
            for i in range(panjang[1] + 2):
                print("-", end="")
            print("+", end="")
            # Jenis Kelamin
            for i in range(panjang[2] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[3] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[4] + 2):
                print("-", end="")
            print("+", end="")
            # Program Studi
            for i in range(panjang[5] + 2):
                print("-", end="")
            print("+", end="")
            # NIM
            for i in range(panjang[6] + 2):
                print("-", end="")
            print("+", end="")
            # Email EDU
            for i in range(panjang[7] + 2):
                print("-", end="")
            print("+")

            # Bagian Tengah
            print("| NIK",end="")
            for i in range(panjang[0]-2):
                print(" ", end="")
            print("| Nama", end="")
            for i in range(panjang[1]-3):
                print(" ", end="")
            print("| Jenis Kelamin", end="")
            for i in range(panjang[2]-12):
                print(" ", end="")
            print("| Asal UNIV", end="")
            for i in range(panjang[3]-8):
                print(" ", end="")
            print("| Fakultas", end="")
            for i in range(panjang[4]-7):
                print(" ", end="")
            print("| Program Studi", end="")
            for i in range(panjang[5]-12):
                print(" ", end="")
            print("| NIM", end="")
            for i in range(panjang[6]-2):
                print(" ", end="")
            print("| Email EDU", end="")
            for i in range(panjang[7]-8):
                print(" ", end="")
            print("|")

            # Bagian Bawah
            print("+", end="")
            # NIK
            for i in range(panjang[0] + 2):
                print("-", end="")
            print("+", end="")
            # Nama
            for i in range(panjang[1] + 2):
                print("-", end="")
            print("+", end="")
            # Jenis Kelamin
            for i in range(panjang[2] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[3] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[4] + 2):
                print("-", end="")
            print("+", end="")
            # Program Studi
            for i in range(panjang[5] + 2):
                print("-", end="")
            print("+", end="")
            # NIM
            for i in range(panjang[6] + 2):
                print("-", end="")
            print("+", end="")
            # Email EDU
            for i in range(panjang[7] + 2):
                print("-", end="")
            print("+")

            # Mengeluarkan Output Data Mahasiswa
            i = 1
            for pembelajar in dataManusia:
                # NIK
                print(f"| {pembelajar.get_nik()}", end="")
                for i in range(panjang[0]-len(pembelajar.get_nik())+1):
                    print(" ", end="")
                # Nama
                print(f"| {pembelajar.get_nama()}", end="")
                for i in range(panjang[1]-len(pembelajar.get_nama())+1):
                    print(" ", end="")
                # Jenis Kelamin
                print(f"| {pembelajar.get_jenis_kelamin()}", end="")
                for i in range(panjang[2]-len(pembelajar.get_jenis_kelamin())+1):
                    print(" ", end="")
                # Asal Univ
                print(f"| {pembelajar.get_asal_univ()}", end="")
                for i in range(panjang[3]-len(pembelajar.get_asal_univ())+1):
                    print(" ", end="")
                # Fakultas
                print(f"| {pembelajar.get_fakultas()}", end="")
                for i in range(panjang[4]-len(pembelajar.get_fakultas())+1):
                    print(" ", end="")
                # Program Studi
                print(f"| {pembelajar.get_prodi()}", end="")
                for i in range(panjang[5]-len(pembelajar.get_prodi())+1):
                    print(" ", end="")
                # NIM
                print(f"| {pembelajar.get_nim()}", end="")
                for i in range(panjang[6]-len(pembelajar.get_nim())+1):
                    print(" ", end="")
                # Email EDU
                print(f"| {pembelajar.get_email_edu()}", end="")
                for i in range(panjang[7]-len(pembelajar.get_email_edu())+1):
                    print(" ", end="")
                print("|")
                i += 1

            # Mengeluarkan Output Footer Tabel
            print("+", end="")
            # NIK
            for i in range(panjang[0] + 2):
                print("-", end="")
            print("+", end="")
            # Nama
            for i in range(panjang[1] + 2):
                print("-", end="")
            print("+", end="")
            # Jenis Kelamin
            for i in range(panjang[2] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[3] + 2):
                print("-", end="")
            print("+", end="")
            # Asal Universitas
            for i in range(panjang[4] + 2):
                print("-", end="")
            print("+", end="")
            # Program Studi
            for i in range(panjang[5] + 2):
                print("-", end="")
            print("+", end="")
            # NIM
            for i in range(panjang[6] + 2):
                print("-", end="")
            print("+", end="")
            # Email EDU
            for i in range(panjang[7] + 2):
                print("-", end="")
            print("+")

        # Agar tidak langsung ke menu setelah nge-print tabel
        input()