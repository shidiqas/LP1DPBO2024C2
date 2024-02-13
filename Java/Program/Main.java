import java.util.ArrayList;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {   //Instantiation
        int i, n = 0, menu = 0, cek;
        String id, name, nameBidang, namePartai;
        
        ArrayList<DPR> list = new ArrayList<>();//List
        
        Scanner sc = new Scanner(System.in);

        do//Perulangan
        {   //Menu
            System.out.println("Menu List Anggota DPR");
            System.out.println("(1) Lihat Anggota");
            System.out.println("(2) Menambah Anggota");
            System.out.println("(3) Mengedit Anggota");
            System.out.println("(4) Menghapus Anggota");
            System.out.println("(5) Keluar");
            System.out.print("Menu apa yang ingin anda pilih: ");
            menu = sc.nextInt();

            cek = 0;

            if (menu == 1)//Melihat list anggota DPR
            {   //Tabel
                System.out.println("\n                List Anggota DPR");
                for (i = 0; i < 53; i++)
                {
                    System.out.print("-");
                }
                System.out.println("\n|ID Anggota |Nama Anggota |Nama Bidang |Nama Partai |");//Header
                for (i = 0; i < 53; i++)
                {
                    System.out.print("-");
                }
                for (DPR dpr : list)//Isi tabel
                {
                    id = dpr.getId();
                    name = dpr.getName();
                    nameBidang = dpr.getNameBidang();
                    namePartai = dpr.getNamePartai();

                    System.out.print("\n|" + id);
                    for(i = 0; i < 11 - id.length(); i++)
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|" + name);
                    for(i = 0; i < 13 - name.length(); i++)
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|" + nameBidang);
                    for(i = 0; i < 12 - nameBidang.length(); i++)
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|" + namePartai);
                    for(i = 0; i < 12 - namePartai.length(); i++)
                    {
                        System.out.print(" ");
                    }
                    System.out.println("|");

                    for (i = 0; i < 53; i++)
                    {
                        System.out.print("-");
                    }
                }
            }
            else if (menu == 2)//Menambah anggota DPR
            {
                System.out.print("\nBerapa jumlah anggota DPR yang ingin anda tambah: ");
                n = sc.nextInt();
                for (i = 0; i < n; i++)
                {
                    System.out.print("ID: ");
                    id = sc.next();
                    System.out.print("Nama: ");
                    name = sc.next();
                    System.out.print("Nama Bidang: ");
                    nameBidang = sc.next();
                    System.out.print("Nama Partai: ");
                    namePartai = sc.next();
                    DPR temp = new DPR(id, name, nameBidang, namePartai);
                    list.add(temp);
                }
                System.out.println("\nData berhasil ditambah");
            }
            else if (menu == 3)//Merubah Anggota DPR
            {
                System.out.print("\nID anggota DPR yang ingin anda ubah: ");
                id = sc.next();
                for (DPR dpr : list)
                {
                    if (dpr.getId().equals(id))
                    {
                        System.out.print("ID: ");
                        id = sc.next();
                        System.out.print("Nama: ");
                        name = sc.next();
                        System.out.print("Nama Bidang: ");
                        nameBidang = sc.next();
                        System.out.print("Nama Partai: ");
                        namePartai = sc.next();
                        dpr.setId(id);
                        dpr.setName(name);
                        dpr.setNameBidang(nameBidang);
                        dpr.setNamePartai(namePartai);

                        cek = 1;
                    }
                }
                if (cek == 1)
                {
                    System.out.println("\nData berhasil diubah");
                }
                else
                {
                    System.out.println("\nID tidak ditemukan");
                }
            }
            else if (menu == 4)//Menghapus anggota DPR
            {
                System.out.print("\nID anggota DPR yang ingin anda hapus: ");
                id = sc.next();
                for (int j = 0; j < list.size(); j++)
                {
                    if (list.get(j).getId().equals(id))
                    {
                        list.remove(j);
                        cek = 1;
                    }
                }
                if (cek == 1)
                {
                    System.out.println("\nData berhasil dihapus");
                }
                else
                {
                    System.out.println("\nID tidak ditemukan");
                }
            }
            else if (menu == 5)//Keluar menu
            {
                System.out.println("\nAnda keluar dari List Anggota DPR!!!");
            }
            else
            {
                System.out.println("\nMenu yang anda pilih tidak ada!");
            }
            System.out.println();
        } while (menu != 5);

        sc.close();
    }
}