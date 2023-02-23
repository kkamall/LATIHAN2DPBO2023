<?php

// Mengimpor file.
require("Mahasiswa.php");

// Memulai session.
session_start();

// Mengecek apakah session sudah dibuat atau belum.
if (!isset($_SESSION["data_mahasiswa"])) {
  $_SESSION["data_mahasiswa"] = array();
}

// Mengambil nilai dari session yang ada.
$data_mahasiswa = $_SESSION["data_mahasiswa"];

// MENU
echo '<form method="post">';
  echo '<input type="submit" name="create" value="Add Data"> | ';
  echo '<input type="submit" name="read" value="Show Data"> | ';
  echo '<input type="submit" name="update" value="Update Data"> | ';
  echo '<input type="submit" name="delete" value="Delete Data">';
echo '</form>';

// Flag function CRUD.
$flag = 0;
// Create data.
if(isset($_POST['create']))
{
  $flag = 1;
}
// Read data.
elseif(isset($_POST['read']))
{
  $flag = 2;
}
// Update data.
elseif(isset($_POST['update']))
{
  $flag = 3;
}
// Delete data.
elseif(isset($_POST['delete']))
{
  $flag = 4;
}

// Form input data.
if($flag == 1 || $flag == 3 || $flag == 4)
{
  echo '<form action="main.php" method="post" enctype="multipart/form-data">';
    // Untuk modifikasi data (Update dan Delete). 
    // => diminta data nim mahasiswa yang akan dimodifikasi.
    if($flag == 4 || $flag == 3)
    {
      echo '<label for="nim_modif">NIM Mahasiswa yang Ingin Dimodifikasi:</label><br>';
      echo '<input type="text" name="nim_modif", id="nim"><br><br>';
    }
    // Form set nilai data mahasiswa
    if($flag == 1 || $flag == 3)
    {
      echo '<label for="nik">NIK</label><br>';
      echo '<input type="text" name="nik", id="nik"><br>';
      echo '<label for="nama">Nama</label><br>';
      echo '<input type="text" name="nama" id="nama"><br>';
      echo '<label for="jenis_kelamin">Jenis Kelamin</label><br>';
      echo '<input type="text" name="jenis_kelamin" id="jenis_kelamin"><br>';
      echo '<label for="asal_univ">Asal Universitas</label><br>';
      echo '<input type="text" name="asal_univ" id="asal_univ"><br>';
      echo '<label for="fakultas">Fakultas</label><br>';
      echo '<input type="text" name="fakultas" id="fakultas"><br>';
      echo '<label for="prodi">Program Studi</label><br>';
      echo '<input type="text" name="prodi" id="prodi"><br>';
      echo '<label for="nim">NIM</label><br>';
      echo '<input type="text" name="nim", id="nim"><br>';
      echo '<label for="email_edu">Email EDU</label><br>';
      echo '<input type="text" name="email_edu", id="email_edu"><br><br>';
      echo '<input type="file" name="gambar" id="gambar"><br><br>';
    }
    // Button dibedakan tiap function agar memudahkan saat pengecekan penekanan button.
    if($flag == 1)
    {
      echo '<input type="submit" name="submitC" value="Submit">';
      echo '<input type="submit" name="end" value="Reset">';
    }
    if($flag == 3)
    {
      echo '<input type="submit" name="submitU" value="Submit">';
    }
    if($flag == 4)
    {
      echo '<input type="submit" name="submitD" value="Submit">';
    }
  echo '</form>';
}

// Menambah data (Create).
if (isset($_POST['submitC'])) {
  // Mengambil data dari form dan menyimpan ke variabel.
  $nik = $_POST["nik"];
  $nama = $_POST["nama"];
  $jenis_kelamin = $_POST["jenis_kelamin"];
  $asal_univ = $_POST["asal_univ"];
  $fakultas = $_POST["fakultas"];
  $prodi = $_POST["prodi"];
  $nim = $_POST["nim"];
  $email_edu = $_POST["email_edu"];

  // Setup gambar dan penyimpanan gambar ke suatu dir.
  $target_dir = "gambar/";
  $target_file = $target_dir . basename($_FILES["gambar"]["name"]);
  $imageFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));
  move_uploaded_file($_FILES["gambar"]["tmp_name"], $target_file);
  
  // Instansiasi object.
  $mahasiswa = new Mahasiswa($nik, $nama, $jenis_kelamin, $asal_univ, $fakultas, $prodi, $nim, $email_edu, basename($_FILES["gambar"]["name"]));
  // Push object ke array.
  array_push($data_mahasiswa, $mahasiswa);
  echo 'Data Berhasil Ditambahkan...';
}

// Menampilkan data (Read).
if($flag == 2)
{
  $flagBerhasil = 0;
  $i = 1;

  // Proses menampilin data mahasiswa.
  echo '<b>DATA MAHASISWA:</b><br>';
  foreach($data_mahasiswa as $mahasiswa)
  {
    $flagBerhasil = 1;
    echo '<br><img src="gambar/' . $mahasiswa->get_gambar() . '" alt="Foto Mahasiswa" style="width: 100px; height: auto;"><br>';
    echo 'NIK Mahasiswa: ' . $mahasiswa->get_nik() . '<br>';
    echo 'Nama Mahasiswa: ' . $mahasiswa->get_nama() . '<br>';
    echo 'Jenis Kelamin Mahasiswa: ' . $mahasiswa->get_jenis_kelamin() . '<br>';
    echo 'Asal Universitas Mahasiswa: ' . $mahasiswa->get_asal_univ() . '<br>';
    echo 'Fakultas Mahasiswa: ' . $mahasiswa->get_fakultas() . '<br>';
    echo 'Program Studi Mahasiswa: ' . $mahasiswa->get_prodi() . '<br>';
    echo 'NIM: ' . $mahasiswa->get_nim() . '<br>';
    echo 'Email EDU Mahasiswa: ' . $mahasiswa->get_email_edu() . '<br>';
    $i = $i + 1;
  }
  if($flagBerhasil == 0)
  {
    echo 'Belum Terdapat Data Mahasiswa...';
  }
}

// Mengupdate data (Update).
if(isset($_POST['submitU']))
{
  $flagBerhasil = 0;
  foreach($data_mahasiswa as $mahasiswa)
  {
    // Pencarian nim yang sama dengan nim yang mau diubah.
    if($mahasiswa->get_nim() == $_POST['nim_modif'])
    {
      // Unlink gambar.
      unlink('gambar/' . $mahasiswa->get_gambar());
      // Setup dan menyimpan gambar di suatu dir.
      $target_dir = "gambar/";
      $target_file = $target_dir . basename($_FILES["gambar"]["name"]);
      $imageFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));
      move_uploaded_file($_FILES["gambar"]["tmp_name"], $target_file);

      // Re-assign nilai pada atribut.
      echo 'Data Berhasil Diubah...';
      $mahasiswa->set_nik($_POST['nik']);
      $mahasiswa->set_nama($_POST['nama']);
      $mahasiswa->set_jenis_kelamin($_POST['jenis_kelamin']);
      $mahasiswa->set_asal_univ($_POST['asal_univ']);
      $mahasiswa->set_fakultas($_POST['fakultas']);
      $mahasiswa->set_prodi($_POST['prodi']);
      $mahasiswa->set_nim($_POST['nim']);
      $mahasiswa->set_email_edu($_POST['email_edu']);
      $mahasiswa->set_gambar(basename($_FILES["gambar"]["name"]));
      $flagBerhasil = 1;
    }
  }
  if($flagBerhasil == 0)
  {
    echo 'Data Tidak Tersedia...';
  }
}

// Menghapus data (Delete).
if(isset($_POST['submitD']))
{
  $flagBerhasil = 0;
  $index = 0;
  foreach($data_mahasiswa as $mahasiswa)
  {
    // Pencarian nim yang sama dengan nim yang mau dihapus.
    if($mahasiswa->get_nim() == $_POST['nim_modif'])
    {
      echo 'Data Berhasil Dihapus...';
      // Menghapus objek dari array.
      unset($data_mahasiswa[$index]);
      // Menghapus gambar dari folder.
      unlink('gambar/' . $mahasiswa->get_gambar());
      // Reset index array.
      $data_mahasiswa = array_values($data_mahasiswa);
      $flagBerhasil = 1;
      break;
    }
    else
    {
      $index = $index + 1;
    }
  }  
  if($flagBerhasil == 0)
  {
    echo 'Data Tidak Tersedia...';
  }
}

// Set nilai session yang terbaru.
$_SESSION["data_mahasiswa"] = $data_mahasiswa;

if(isset($_POST['end']))
{
   session_destroy();
   header("Location: main.php");
}

?>
