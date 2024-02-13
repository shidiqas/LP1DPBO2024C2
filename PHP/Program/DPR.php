<?php

class DPR//Class DPR
{   //Private Attributes
    private $id = '';//ID
    private $name = '';//Nama
    private $nameBidang = '';//Nama bidang
    private $namePartai = '';//Nama partai
    private $foto = '';//Foto anggota
    //Public Method
    public function __construct($id = '', $name = '', $nameBidang = '', $namePartai = '', $foto = '')//Constructor with parameters
    {
        $this->id = $id;
        $this->name = $name;
        $this->nameBidang = $nameBidang;
        $this->namePartai = $namePartai;
        $this->foto = $foto;
    }
    //Getter-Setter
    public function getId()
    {
        return $this->id;
    }

    public function setId($id)
    {
        $this->id = $id;
    }

    public function getName()
    {
        return $this->name;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    public function getNameBidang()
    {
        return $this->nameBidang;
    }

    public function setNameBidang($nameBidang)
    {
        $this->nameBidang = $nameBidang;
    }

    public function getNamePartai()
    {
        return $this->namePartai;
    }

    public function setNamePartai($namePartai)
    {
        $this->namePartai = $namePartai;
    }

    public function getFoto()
    {
        return $this->foto;
    }

    public function setFoto($foto)
    {
        $this->foto = $foto;
    }
}

?>
