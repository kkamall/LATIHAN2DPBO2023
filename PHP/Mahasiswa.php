<?php  

require("SivitasAkademik.php");

class Mahasiswa extends SivitasAkademik
{
    // Private attribute:
    private $nim = '';
    private $fakultas = '';
    private $prodi = '';
    private $gambar = '';

    // Konstruktor.
    public function __construct($nik = '', $nama = '', $jenis_kelamin = '', $asal_univ = '', $fakultas = '', $prodi = '', $nim = '', $email_edu = '', $gambar = '')
    {
        parent::__construct($nik, $nama, $jenis_kelamin, $asal_univ, $email_edu);
        $this->nim = $nim;        
        $this->fakultas = $fakultas;        
        $this->prodi = $prodi;
        $this->gambar = $gambar;
    }

    // Setter:
    // NIM.
    public function set_nim($nim = '')
    {
        $this->nim = $nim;
    }
    // Fakultas.
    public function set_fakultas($fakultas = '')
    {
        $this->fakultas = $fakultas;
    }
    // Program Studi.
    public function set_prodi($prodi = '')
    {
        $this->prodi = $prodi;
    }
    // Gambar
    public function set_gambar($gambar = '')
    {
        $this->gambar = $gambar;
    }

    // Getter:
    // NIM.
    public function get_nim()
    {
        return $this->nim;
    }
    // Fakultas.
    public function get_fakultas()
    {
        return $this->fakultas;
    }
    // Program Studi.
    public function get_prodi()
    {
        return $this->prodi;
    }
    // Gambar
    public function get_gambar()
    {
        return $this->gambar;
    }

    // Destruktor.
    public function __destruct()
    {
        
    }
}

?>