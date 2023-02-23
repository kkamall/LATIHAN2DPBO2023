<?php  

class Human 
{
    // Private atribut:
    private $nik = "";
    private $nama = "";
    private $jenis_kelamin = "";

    public function __construct($nik = '', $nama = '', $jenis_kelamin)
    {
        $this->nik = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // Setter
    // NIK
    public function set_nik($nik = '')
    {
        $this->nik = $nik;
    }
    // Nama
    public function set_nama($nama = '')
    {
        $this->nama = $nama;
    }
    // Jenis Kelamin
    public function set_jenis_kelamin($jenis_kelamin = '')
    {
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // Getter
    // NIK
    public function get_nik()
    {
        return $this->nik;
    }
    // Nama
    public function get_nama()
    {
        return $this->nama;
    }
    // Jenis Kelamin
    public function get_jenis_kelamin()
    {
        return $this->jenis_kelamin;
    }

    // Destructor
    function __destruct()
    {
        
    }
}

?>