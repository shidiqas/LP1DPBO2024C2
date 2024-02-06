/*
Saya Shidiq Arifin Sudrajat [2202152] mengerjakan soal LP1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <iostream>
#include <string>

using namespace std;

class DPR//Class DPR
{   //Attribute private
    private:
        string id;//Id anggota DPR
        string name;//Nama anggota DPR
        string name_bidang;//Nama bidang anggota DPR
        string name_partai;//Nama partai anggota DPR
    //Method public
    public:
        DPR()//Constructor
        {   //Set default
            this->id = "";
            this->name = "";
            this->name_bidang = "";
            this->name_partai = "";
        }

        DPR(string id, string name, string name_bidang, string name_partai)//Constructor dengan parameter
        {   //Set sesuai dengan paramete
            this->id = id;
            this->name = name;
            this->name_bidang = name_bidang;
            this->name_partai = name_partai;
        }

        string get_id()//Get id
        {
            return this->id;
        }

        void set_id(string id)//Set id
        {
            this->id = id;
        }
        
        string get_name()//Get nama
        {
            return this->name;
        }

        void set_name(string name)//Get nama
        {
            this->name = name;
        }

        string get_name_bidang()//Get nama bidang
        {
            return this->name_bidang;
        }

        void set_name_bidang(string name_bidang)//Set nama bidang
        {
            this->name_bidang = name_bidang;
        }

        string get_name_partai()//get nama partai
        {
            return this->name_partai;
        }

        void set_name_partai(string name_partai)//Set nama partai
        {
            this->name_partai = name_partai;
        }
        //Destructor
        ~DPR()
        {
            
        }
};