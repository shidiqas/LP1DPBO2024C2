/*
Saya Shidiq Arifin Sudrajat [2202152] mengerjakan soal LP1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{
    //Instantiation
    int i, n = 0, menu = 0, cek;//iterasi, banyaknya masukan, menu, cek
    string id;//Id anggota DPR
    string name;//Nama anggota DPR
    string name_bidang;//Nama bidang anggota DPR
    string name_partai;//Nama partai anggota DPR

    list<DPR> llist;//List

    do//Perulanagan
    {   //Menu list anggota DPR
        cout << "Menu List Anggota DPR" << '\n';
        cout << "(1) Lihat Anggota" << '\n';
        cout << "(2) Menambah Anggota" << '\n';
        cout << "(3) Mengedit Anggota" << '\n';
        cout << "(4) Menghapus Anggota" << '\n';
        cout << "(5) Keluar" << '\n';
        //Masukan menu yang dipilih
        cout << "Menu apa yang ingin anda pilih: ";
        cin >> menu;

        cek = 0;

        if (menu == 1)//Jika menu yang dipilih 1
        {   //Menampilkan anggota DPR
            cout << "\nList Anggota DPR : " << '\n';
            i = 0;
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)//Menampilkan anggota
            {
                cout << (i + 1) << ". ID: " << it->get_id() << " | Nama: "<< it->get_name() << " | Nama Bidang: " << it->get_name_bidang() << " | Nama Partai: " << it->get_name_partai() << '\n';
                i++;
            }
        }
        else if (menu == 2)//Jika menu yang dipilih 2
        {   //Menambahkan anaggota DPR
            cout << "\nBerapa jumlah anggota DPR yang ingin anda tambah: ";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                DPR temp;
                //Masukan
                cout << "ID: ";
                cin >> id;
                cout << "Nama: ";
                cin >> name;
                cout << "Nama Bidang: ";
                cin >> name_bidang;
                cout << "Nama Partai: ";
                cin >> name_partai;
                //Menetapkan masukan ke object temp
                temp.set_id(id);
                temp.set_name(name);
                temp.set_name_bidang(name_bidang);
                temp.set_name_partai(name_partai);

                llist.push_back(temp);//Memasukan ke dalam list
            }
        }
        else if (menu == 3)//Jika menu yang dipilih 3
        {   //Merubah anggota DPR
            cout << "\nID anggota DPR yang ingin anda ubah: ";
            cin >> id;//Masukan id yang diinginkan
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                if (it->get_id() == id)//Jika sama dengan id yang dicari
                {   //Masukan
                    cout << "ID: ";
                    cin >> id;
                    cout << "Nama: ";
                    cin >> name;
                    cout << "Nama Bidang: ";
                    cin >> name_bidang;
                    cout << "Nama Partai: ";
                    cin >> name_partai;
                    //Menetapkan masukan ke object
                    it->set_id(id);
                    it->set_name(name);
                    it->set_name_bidang(name_bidang);
                    it->set_name_partai(name_partai);

                    cek = 1;//Tanda ada yang dirubah
                }
            }
            //Output tambahan
            if (cek == 1)
            {
                cout << "\nData berhasil diubah" << '\n';
            }
            else
            {
                cout << "\nID tidak ditemukan" << '\n';
            }
        }
        else if (menu == 4)//Jika menu yang dipilih 4
        {   //Menghapus anggota DPR
            cout << "\nID anggota DPR yang ingin anda hapus: ";
            cin >> id;//Masukan id yang diinginkan

            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                if (it->get_id() == id)//Jika sama dengan id yang dicari
                {
                    llist.erase(it);//Menghapus object dari list
                    it = llist.end();

                    cek = 1;//Tanda ada yang dihapus
                }
            }
            //Output tambahan
            if (cek == 1)
            {
                cout << "\nData berhasil dihapus" << '\n';
            }
            else
            {
                cout << "\nID tidak ditemukan" << '\n';
            }
        }
        else if (menu == 5)//Jika menu yang dipilih 5
        {   //Keluar menu
            cout << "\nAnda keluar dari List Anggota DPR!!!" << '\n';
        }
        else//Jika yang lain
        {   //Eror
            cout << "\nMenu yang anda pilih tidak ada!" << '\n';
        }
        cout << '\n';
    } while (menu != 5);
    
    return 0;
}