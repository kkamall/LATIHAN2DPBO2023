# [ LATIHAN2DPBO2023 ]

## Identitas:
- NIM   : 2102313
- Nama  : Muhammad Kamal Robbani
- Kelas : C1'21

## Janji:
Saya [Muhammad Kamal Robbani] dengan nim 2102313 mengerjakan Latihan 2 DPBO dalam mata kuliah 
[Desain Pemrograman Berorientasi Objek] untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Requirement Soal
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut:
  - Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
  - Human: NIK, nama, jenis_kelamin
  - SivitasAkademik: asal_universitas, email_edu
  
## Desain Program
![image](https://user-images.githubusercontent.com/101335350/220941956-4f6edf16-8f4f-4bfc-9c91-72e7b83eee1c.png)
### Alasan Desain Program:
- Sivitas Akademik is a Human
  1. Sivitas Akademik dan Human merupakan objek yang sama, yaitu manusia.
  2. Semua atribut dalam Human dapat digunakan dalam Sivitas Akademik.
- Mahasiswa is a Sivitas Akademik
  1. Sivitas Akademik merupakan kelompok yang isinya Dosen, Mahasiswa, etc. dan itu merupakan manusia sama seperti mahasiswa.
  2. Semua atribut dalam Human dapat digunakan dalam Sivitas Akademik.

### Penjalasan Atribut:
- Human:
  - nik => NIK mahasiswa.
  - jenis_kelamin => Jenis kelamin mahasiswa.
  - nama => Nama mahasiswa.
- SivitasAkademik:
  - asal_univ => Asal universitas mahasiswa.
  - email_edu => E-Mail EDU mahasiswa.
- Mahasiswa:
  - nim => Nomor Induk Mahasiswa.
  - fakultas => Fakultas mahasiswa.
  - prodi => Program studi mahasiswa.
  
### Penjelasan Method:
- __init__(self, ...) => Konstruktor.
- set_...(self, ...) => Set value dalam atribut (Setter).
- get_...(self, ...) => Mendapatkan value yang ada dalam atribut (Getter).
  
## Penjelasan Alur Main (Python)
1. *Import library* dan file *class* yang digunakan.
2. Inisialisasi variabel sesuai kebutuhan.
3. Masuk ke dalam *looping while* untuk menjalankan fungsi **CRUD** sesuai permintaan user.
4. Mengeluarkan *output* berupa menu.
5. Pengecekan "*if - else*" untuk mengetahui fungsi mana yang akan dijalankan oleh user (sesuai inputan user).
6. Menjalankan salah satu fungsi dari **CRUD** menggunakan *method* dari *class* sistem.
7. Kembali ke langkah 3 sampai user memasukkan *input* fungsi berupa angka '5' (program selesai).
8. END.

## Dokumentasi
- Fungsi Create:<br>
![image](https://user-images.githubusercontent.com/101335350/220921873-3864ea12-2b63-4d02-a193-226119352313.png)
- Fungsi Read:<br>
![image](https://user-images.githubusercontent.com/101335350/220922785-4151593b-fbc8-43c9-848a-d18712a783e1.png)
- Fungsi Update:<br>
![image](https://user-images.githubusercontent.com/101335350/220922500-d6b9a5a3-24b3-482c-bf4c-f1538e663177.png)
- Fungsi Delete:<br>
![image](https://user-images.githubusercontent.com/101335350/220922879-802b18a2-dfaa-4ab6-9f52-d77c1d52c319.png)
