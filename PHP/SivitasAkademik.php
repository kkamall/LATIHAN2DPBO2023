<?php 

require("Human.php");

class SivitasAkademik extends Human
{
    // Private attribute:
    private $asal_univ = '';
    private $email_edu = '';

    // Konstruktor
    public function __construct($nik = '', $nama = '', $jenis_kelamin = '', $asal_univ = '', $email_edu = '')
    {
        parent::__construct($nik, $nama, $jenis_kelamin);
        $this->asal_univ = $asal_univ;
        $this->email_edu = $email_edu;
    }

    // Setter
    // Asal Universitas
    public function set_asal_univ($asal_univ)
    {
        $this->asal_univ = $asal_univ;
    }
    // Email EDU
    public function set_email_edu($email_edu)
    {
        $this->email_edu = $email_edu;
    }

    // Getter
    // Asal Universitas
    public function get_asal_univ()
    {
        return $this->asal_univ;
    }
    // Email EDU
    public function get_email_edu()
    {
        return $this->email_edu;
    }

    // Destruktor
    public function __destruct()
    {
        
    }
}

?>