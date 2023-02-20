// Import library:
import java.util.Scanner;
import java.util.ArrayList;

class Main
{
    public static void main(String[] args)
    {
        // Inisialisasi list.
        ArrayList<Mahasiswa> dataMahasiswa = new ArrayList<>();

        // Inisialisasi scanner.
        Scanner sc = new Scanner(System.in);

        /*
            [VARIABEL ANEH]:
            1. fungsi = menjalankan suatu fungsi (inputan berupa angka)
            2. nik_modif = temp untuk menyimpan NIK mahasiswa yang akan dimodif (delete/ubah) 
        */
        
        int fungsi = 0, i;
        String nik, nama, jenis_kelamin, asal_univ, fakultas, prodi, nim, email_edu, nik_modif;

        do 
        {
            // Clear console.
            System.out.print("\033[H\033[2J");
            System.out.flush();

            // Menampilkan menu.
            System.out.print("[");
            for(i = 0; i < 35 ; i++)
            {
                System.out.print("-");
            }
            System.out.print("MENU");
            for(i = 0; i < 35 ; i++)
            {
                System.out.print("-");
            }
            System.out.println("]");
            System.out.println("\n(1) Tambah Data | (2) Ubah Data | (3) Hapus Data | (4) Tampil Data | (5) END\n");
            System.out.print("[");
            for(i = 0; i < 74 ; i++)
            {
                System.out.print("-");
            }
            System.out.println("]\n");

            // Meminta masukkan user untuk menjalankan suatu fungsi
            System.out.print("Masukkan Angka Perintah: ");
            fungsi = sc.nextInt();
            System.out.println("---");
            
            // Menambah data.
            if(fungsi == 1)
            {
                System.out.print("Masukkan NIK Mahasiswa: ");
                nik = sc.next();
                System.out.print("Masukkan Nama Mahasiswa: ");
                nama = sc.next();
                System.out.print("Masukkan Jenis Kelamin Mahasiswa: ");
                jenis_kelamin = sc.next();
                System.out.print("Masukkan Asal Universitas Mahasiswa: ");
                asal_univ = sc.next();
                System.out.print("Masukkan Fakultas Mahasiswa: ");
                fakultas = sc.next();
                System.out.print("Masukkan Program Studi Mahasiswa: ");
                prodi = sc.next();
                System.out.print("Masukkan NIM Mahasiswa: ");
                nim = sc.next();
                System.out.print("Masukkan Email EDU Mahasiswa: ");
                email_edu = sc.next();

                // Object buat menyimpan nilai sementara sebelum dimasukkan ke list.
                Mahasiswa temp = new Mahasiswa();
                temp.set_nik(nik); temp.set_nama(nama); temp.set_jenis_kelamin(jenis_kelamin); temp.set_asal_univ(asal_univ); temp.set_fakultas(fakultas); temp.set_prodi(prodi); temp.set_nim(nim); temp.set_email_edu(email_edu);
                dataMahasiswa.add(temp);
            }
            // Mengubah data.
            else if(fungsi == 2)
            {
                // Meminta NIM mahasiswa yang ingin diubah datanya.
                System.out.print("Masukkan NIK Mahasiswa yang Ingin Diubah: ");
                nik_modif = sc.next();
                System.out.println("---");

                // Meminta inputan data mahasiswa baru.
                System.out.print("Masukkan NIK Mahasiswa: ");
                nik = sc.next();
                System.out.print("Masukkan Nama Mahasiswa: ");
                nama = sc.next();
                System.out.print("Masukkan Jenis Kelamin Mahasiswa: ");
                jenis_kelamin = sc.next();
                System.out.print("Masukkan Asal Universitas Mahasiswa: ");
                asal_univ = sc.next();
                System.out.print("Masukkan Fakultas Mahasiswa: ");
                fakultas = sc.next();
                System.out.print("Masukkan Program Studi Mahasiswa: ");
                prodi = sc.next();
                System.out.print("Masukkan NIM Mahasiswa: ");
                nim = sc.next();
                System.out.print("Masukkan Email EDU Mahasiswa: ");
                email_edu = sc.next();

                // Mencari data yang ingin diubah
                for(i = 0; i < dataMahasiswa.size(); i++)
                {
                    // Proses pengubahan data.
                    if(dataMahasiswa.get(i).get_nik().equals(nik_modif))
                    {
                        dataMahasiswa.get(i).set_nik(nik);
                        dataMahasiswa.get(i).set_nama(nama);
                        dataMahasiswa.get(i).set_jenis_kelamin(jenis_kelamin);
                        dataMahasiswa.get(i).set_asal_univ(asal_univ);
                        dataMahasiswa.get(i).set_fakultas(fakultas);
                        dataMahasiswa.get(i).set_prodi(prodi);
                        dataMahasiswa.get(i).set_nim(nim);
                        dataMahasiswa.get(i).set_email_edu(email_edu);
                        break;
                    }
                }
            }
            // Hapus data mahasiswa.
            else if(fungsi == 3)
            {
                // Meminta NIM mahasiswa yang ingin dihapus datanya.
                System.out.print("Masukkan NIK Mahasiswa yang Ingin Dihapus: ");
                nik_modif = sc.next();

                // Mencari data yang ingin dihapus.
                for(i = 0; i < dataMahasiswa.size(); i++)
                {
                    // Proses penghapusan data.
                    if(dataMahasiswa.get(i).get_nik().equals(nik_modif))
                    {
                        dataMahasiswa.remove(i);
                    }
                }
            }
            // Selesai.
            else if(fungsi == 5)
            {
                System.out.println("Terima Kasih...");
            }
            // Nampilin data mahasiswa.
            else if(fungsi == 4)
            {
                if(dataMahasiswa.isEmpty())
                {
                    System.out.println("Belum Terdapat Data Mahasiswa...");
                }
                else
                {
                    System.out.println("Press Enter to Continue...\n---\n(NIK - Nama - Jenis Kelamin - Asal Universitas - Fakultas - Program Studi - NIM - Email EDU)\n\n[-----------DATA MAHASISWA------------]\n");
                    for(i = 0; i < dataMahasiswa.size(); i++)
                    {
                        System.out.println((i + 1) + ". " + dataMahasiswa.get(i).get_nik() + " - " + dataMahasiswa.get(i).get_nama() + " - " + dataMahasiswa.get(i).get_jenis_kelamin() + " - " + dataMahasiswa.get(i).get_asal_univ() + " - " + dataMahasiswa.get(i).get_fakultas() + " - " + dataMahasiswa.get(i).get_prodi() + " - " + dataMahasiswa.get(i).get_nim() + " - " + dataMahasiswa.get(i).get_email_edu());
                    }
                }
                sc.nextLine();
                sc.nextLine();
            }
            else
            {
                System.out.println("Angka Di luar Jangkauan...");
            }
        } while (fungsi != 5);
    }
}