<?php
require ('DPR.php');

//Membuat list awal anggota DPR
$list = array(
    new DPR("001", "Andi", "Pertahanan", "Gerindra", "foto.png"),
    new DPR("002", "Ani", "Keuangan", "PKB", "foto.png"),
    new DPR("003", "Budi", "HAM", "PDIP", "foto.png")
);
//Tabel anggota DPR
//Header
echo "<table border = '1'>";
echo "<caption>Daftar Anggota DPR</caption>";
echo "<tr>";
echo "<th>ID Anggota</th>";
echo "<th>Nama Anggota</th>";
echo "<th>Nama Bidang</th>";
echo "<th>Nama Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";
//Isi tabel anggota DPR
foreach ($list as $row)
{
    echo "<tr>";
    echo "<td>" . $row->getId() . "</td>";
    echo "<td>" . $row->getName() . "</td>";
    echo "<td>" . $row->getNameBidang() . "</td>";
    echo "<td>" . $row->getNamePartai() . "</td>";
    echo "<td> <img src='" . $row->getFoto() . "'style='width: 30px''></td>";
    echo "</tr>";
}
echo "</table>";
//Menambah anggota baru DPR
echo "<h2>Menambah Anggota DPR</h2>";
$newDPR = new DPR("004", "Anisa", "Kesehatan", "PKS", "foto.png");
$list[] = $newDPR;
//Tabel anggota DPR
//Header
echo "<table border = '1'>";
echo "<caption>Daftar Anggota DPR</caption>";
echo "<tr>";
echo "<th>ID Anggota</th>";
echo "<th>Nama Anggota</th>";
echo "<th>Nama Bidang</th>";
echo "<th>Nama Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";
//Isi tabel anggota DPR
foreach ($list as $row)
{
    echo "<tr>";
    echo "<td>" . $row->getId() . "</td>";
    echo "<td>" . $row->getName() . "</td>";
    echo "<td>" . $row->getNameBidang() . "</td>";
    echo "<td>" . $row->getNamePartai() . "</td>";
    echo "<td> <img src='" . $row->getFoto() . "'style='width: 30px''></td>";
    echo "</tr>";
}
echo "</table>";
echo "Data berhasil ditambah";
//Merubah anggota DPR
echo"<h2>Merubah Anggota DPR</h2>";
echo "ID anggota DPR yang ingin anda ubah: 003\n";
$id = '003';
foreach ($list as $dpr) 
{
    if ($dpr->getId() == $id) 
    {
        $dpr->setName("Andika");
        $dpr->setNameBidang("Politik");
        $dpr->setNamePartai("Demokrat");
        $dpr->setFoto("foto.png");
        break;
    }
}
//Tabel anggota DPR
//Header
echo "<table border = '1'>";
echo "<caption>Daftar Anggota DPR</caption>";
echo "<tr>";
echo "<th>ID Anggota</th>";
echo "<th>Nama Anggota</th>";
echo "<th>Nama Bidang</th>";
echo "<th>Nama Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";
//Isi tabel anggota DPR
foreach ($list as $row)
{
    echo "<tr>";
    echo "<td>" . $row->getId() . "</td>";
    echo "<td>" . $row->getName() . "</td>";
    echo "<td>" . $row->getNameBidang() . "</td>";
    echo "<td>" . $row->getNamePartai() . "</td>";
    echo "<td> <img src='" . $row->getFoto() . "'style='width: 30px''></td>";
    echo "</tr>";
}
echo "</table>";
echo "Data berhasil diubah\n";
//Menghapus anggota DPR
echo "<h2>Menghapus Anggota DPR</h2>";
echo "ID anggota DPR yang ingin anda hapus: 003\n";
$id = '003';
foreach ($list as $key => $dpr)
{
    if ($dpr->getId() == $id) 
    {
        unset($list[$key]);
        break;
    }
}
//Tabel anggota DPR
//Header
echo "<table border = '1'>";
echo "<caption>Daftar Anggota DPR</caption>";
echo "<tr>";
echo "<th>ID Anggota</th>";
echo "<th>Nama Anggota</th>";
echo "<th>Nama Bidang</th>";
echo "<th>Nama Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";
//Isi tabel anggota DPR
foreach ($list as $row)
{
    echo "<tr>";
    echo "<td>" . $row->getId() . "</td>";
    echo "<td>" . $row->getName() . "</td>";
    echo "<td>" . $row->getNameBidang() . "</td>";
    echo "<td>" . $row->getNamePartai() . "</td>";
    echo "<td> <img src='" . $row->getFoto() . "'style='width: 30px''></td>";
    echo "</tr>";
}
echo "</table>";
echo "Data berhasil dihapus\n";

?>
