// Import library dan file.
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include <cstdio>

// Standard namespace.
using namespace std;

int main()
{
    int i, fungsi = 0;
    string nik, nama, jenis_kelamin, asal_univ, fakultas, prodi, nim, email_edu, nik_modif;
    Mahasiswa temp;

    // List kumpulan data mahasiswa.
    list<Mahasiswa> dataMahasiswa;

    do
    {
        system("cls");
        // Nampilin menu.
        cout << "[";
        for(i = 0; i < 35; i++)
        {
            cout << "-";
        }
        cout << "MENU";
        for(i = 0; i < 35; i++)
        {
            cout << "-";
        }
        cout << "]\n";
        cout << "\n(1) Tambah Data | (2) Ubah Data | (3) Hapus Data | (4) Tampil Data | (5) END\n";
        cout << "\n[";
        for(i = 0; i< 74; i++)
        {
            cout << "-";
        }
        cout << "]\n\nMasukkan Angka Perintah: ";
        // Meminta user untuk menjalankan suatu perintah.
        cin >> fungsi;
        cout << "---\n";
        // Tambah Data.
        if (fungsi == 1)
        {
            // Input atribut.
            cout << "Masukkan NIK Mahasiswa: ";
            cin >> nik;
            cout << "Masukkan Nama Mahasiswa: ";
            cin >> nama;
            cout << "Masukkan Jenis Kelamin Mahasiswa: ";
            cin >> jenis_kelamin;
            cout << "Masukkan Asal Universitas Mahasiswa: ";
            cin >> asal_univ;
            cout << "Masukkan Fakultas Mahasiswa: ";
            cin >> fakultas;
            cout << "Masukkan Prodi Mahasiswa: ";
            cin >> prodi;
            cout << "Masukkan NIM Mahasiswa: ";
            cin >> nim;
            cout << "Masukkan Email EDU Mahasiswa: ";
            cin >> email_edu;

            // Assign attribut.
            temp.set_nik(nik);
            temp.set_nama(nama);
            temp.set_jenis_kelamin(jenis_kelamin);
            temp.set_asal_univ(asal_univ);
            temp.set_fakultas(fakultas);
            temp.set_prodi(prodi);
            temp.set_nim(nim);
            temp.set_email_edu(email_edu);

            // Push ke list.
            dataMahasiswa.push_back(temp);
        }
        // Ubah data.
        else if (fungsi == 2)
        {
            // Input NIM data atribut mahasiswa yang ingin diubah datanya.
            cout << "Masukkan NIK Mahasiswa yang Ingin Diubah: ";
            cin >> nik_modif;

            // Input data atribut mahasiswa yang baru.
            cout << "Masukkan NIK Mahasiswa: ";
            cin >> nik;
            cout << "Masukkan Nama Mahasiswa: ";
            cin >> nama;
            cout << "Masukkan Jenis Kelamin Mahasiswa: ";
            cin >> jenis_kelamin;
            cout << "Masukkan Asal Universitas Mahasiswa: ";
            cin >> asal_univ;
            cout << "Masukkan Fakultas Mahasiswa: ";
            cin >> fakultas;
            cout << "Masukkan Prodi Mahasiswa: ";
            cin >> prodi;
            cout << "Masukkan NIM Mahasiswa: ";
            cin >> nim;
            cout << "Masukkan Email EDU Mahasiswa: ";
            cin >> email_edu;

            // Proses pengubahand data atribut mahasiswa.
            for (list<Mahasiswa>::iterator it = dataMahasiswa.begin(); it != dataMahasiswa.end(); it++)
            {
                if (it->get_nik() == nik_modif)
                {
                    // Assign value attribut baru.
                    it->set_nik(nik);
                    it->set_nama(nama);
                    it->set_jenis_kelamin(jenis_kelamin);
                    it->set_asal_univ(asal_univ);
                    it->set_fakultas(fakultas);
                    it->set_prodi(prodi);
                    it->set_nim(nim);
                    it->set_email_edu(email_edu);
                }
            }
        }
        // Hapus Data.
        else if (fungsi == 3)
        {
            // Input data NIM mahasiswa yang ingin dihapus datanya.
            cout << "Masukkan NIK Mahasiswa yang Ingin Dihapus: ";
            cin >> nik_modif;

            for (list<Mahasiswa>::iterator it = dataMahasiswa.begin(); it != dataMahasiswa.end(); it++)
            {
                if (it->get_nik() == nik_modif)
                {
                    it = dataMahasiswa.erase(it);
                }
            }
        }
        // Menampilkan Data
        else if (fungsi == 4)
        {
            cout << "Press Enter to Continue...\n---\n";

            if(dataMahasiswa.empty())
            {
                cout << "Belum Terdapat Data Mahasiswa\n";
            }
            else
            {
                cout << "Data Mahasiswa\n";
                // Mencari String Terpanjang
                int panjang[8] = {3, 4, 13, 9, 8, 13, 3, 9};
                for(list<Mahasiswa>::iterator it = dataMahasiswa.begin(); it != dataMahasiswa.end(); it++)
                {
                    if(it->get_nik().length() > panjang[0])
                    {
                        panjang[0] = it->get_nik().length();
                    }
                    if(it->get_nama().length() > panjang[1])
                    {
                        panjang[1] = it->get_nama().length();
                    }
                    if(it->get_jenis_kelamin().length() > panjang[2])
                    {
                        panjang[2] = it->get_jenis_kelamin().length();
                    }
                    if(it->get_asal_univ().length() > panjang[3])
                    {
                        panjang[3] = it->get_asal_univ().length();
                    }
                    if(it->get_fakultas().length() > panjang[4])
                    {
                        panjang[4] = it->get_fakultas().length();
                    }
                    if(it->get_prodi().length() > panjang[5])
                    {
                        panjang[5] = it->get_prodi().length();
                    }
                    if(it->get_nim().length() > panjang[6])
                    {
                        panjang[6] = it->get_nim().length();
                    }
                    if(it->get_email_edu().length() > panjang[7])
                    {
                        panjang[7] = it->get_email_edu().length();
                    }
                }

                // Menampilkan Header Tabel.
                // Bagian Atas.
                cout << "+";
                // Header NIK.
                for(i = 0; i < panjang[0]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header Nama.
                for(i = 0; i < panjang[1]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header Jenis Kelamin.
                for(i = 0; i < panjang[2]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header asal universitas.
                for(i = 0; i < panjang[3]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header fakultas.
                for(i = 0; i < panjang[4]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header program studi.
                for(i = 0; i < panjang[5]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header nim.
                for(i = 0; i < panjang[6]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header email edu.
                for(i = 0; i < panjang[7]+2; i++)
                {
                    cout << "-";
                }
                cout << "+\n";

                // Bagian tengah.
                cout << "| NIK";
                for(i = 0; i < panjang[0]-2; i++)
                {
                    cout << " ";
                }
                cout << "| Nama";
                for(i = 0; i < panjang[1]-3; i++)
                {
                    cout << " ";
                }
                cout << "| Jenis Kelamin";
                for(i = 0; i < panjang[2]-12; i++)
                {
                    cout << " ";
                }
                cout << "| Asal Univ";
                for(i = 0; i < panjang[3]-8; i++)
                {
                    cout << " ";
                }
                cout << "| Fakultas";
                for(i = 0; i < panjang[4]-7; i++)
                {
                    cout << " ";
                }
                cout << "| Program Studi";
                for(i = 0; i < panjang[5]-12; i++)
                {
                    cout << " ";
                }
                cout << "| NIM";
                for(i = 0; i < panjang[6]-2; i++)
                {
                    cout << " ";
                }
                cout << "| Email EDU";
                for(i = 0; i < panjang[7]-8; i++)
                {
                    cout << " ";
                }
                cout << "|\n";

                // Bagian header bawah.
                cout << "+";
                // Header bawah NIK.
                for(i = 0; i < panjang[0]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah Nama.
                for(i = 0; i < panjang[1]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah Jenis Kelamin.
                for(i = 0; i < panjang[2]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah asal universitas.
                for(i = 0; i < panjang[3]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah fakultas.
                for(i = 0; i < panjang[4]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah program studi.
                for(i = 0; i < panjang[5]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah nim.
                for(i = 0; i < panjang[6]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Header bawah email edu.
                for(i = 0; i < panjang[7]+2; i++)
                {
                    cout << "-";
                }
                cout << "+\n";

                // Output data mahasiswa.
                for (list<Mahasiswa>::iterator it = dataMahasiswa.begin(); it != dataMahasiswa.end(); it++)
                {
                    cout << "| " << it->get_nik();
                    for(i = 0; i < panjang[0]-it->get_nik().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_nama();
                    for(i = 0; i < panjang[1]-it->get_nama().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_jenis_kelamin();
                    for(i = 0; i < panjang[2]-it->get_jenis_kelamin().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_asal_univ();
                    for(i = 0; i < panjang[3]-it->get_asal_univ().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_fakultas();
                    for(i = 0; i < panjang[4]-it->get_fakultas().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_prodi();
                    for(i = 0; i < panjang[5]-it->get_prodi().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_nim();
                    for(i = 0; i < panjang[6]-it->get_nim().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "| " << it->get_email_edu();
                    for(i = 0; i < panjang[7]-it->get_email_edu().length()+1; i++)
                    {
                        cout << " ";
                    }
                    cout << "|\n";
                }

                // Bagian footer.
                cout << "+";
                // Footer bawah NIK.
                for(i = 0; i < panjang[0]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah Nama.
                for(i = 0; i < panjang[1]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah Jenis Kelamin.
                for(i = 0; i < panjang[2]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah asal universitas.
                for(i = 0; i < panjang[3]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah fakultas.
                for(i = 0; i < panjang[4]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah program studi.
                for(i = 0; i < panjang[5]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah nim.
                for(i = 0; i < panjang[6]+2; i++)
                {
                    cout << "-";
                }
                cout << "+";
                // Footer bawah email edu.
                for(i = 0; i < panjang[7]+2; i++)
                {
                    cout << "-";
                }
                cout << "+\n";
            }
            fflush(stdin);
            getchar();
        }
        else if(fungsi == 5)
        {
            cout << "Terima Kasih...\n";
        }

    } while (fungsi != 5);

    return 0;
}