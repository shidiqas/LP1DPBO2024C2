/*
Saya Shidiq Arifin Sudrajat [2202152] mengerjakan soal LP1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
class DPR//Class DPR
{   //Private Attributes
    private String id;//Id
    private String name;//Nama
    private String nameBidang;//Nama Bidang
    private String namePartai;//Nama Partai
    //Method Public
    public DPR()//Constructor
    {
        this.id = "";
        this.name = "";
        this.nameBidang = "";
        this.namePartai = "";
    }

    public DPR(String id, String name, String nameBidang, String namePartai)//Constructor with parameter
    {
        this.id = id;
        this.name = name;
        this.nameBidang = nameBidang;
        this.namePartai = namePartai;
    }
    //Getter-Setter
    public String getId()
    {
        return id;
    }

    public void setId(String id)
    {
        this.id = id;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public String getNameBidang()
    {
        return nameBidang;
    }

    public void setNameBidang(String nameBidang)
    {
        this.nameBidang = nameBidang;
    }

    public String getNamePartai()
    {
        return namePartai;
    }

    public void setNamePartai(String namePartai)
    {
        this.namePartai = namePartai;
    }
}