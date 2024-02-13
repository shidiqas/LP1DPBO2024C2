from DPR import DPR

list_dpr = []#List

while True:#Perulangan
    #Menu
    print("Menu List Anggota DPR")
    print("(1) Lihat Anggota")
    print("(2) Menambah Anggota")
    print("(3) Mengedit Anggota")
    print("(4) Menghapus Anggota")
    print("(5) Keluar")

    menu = int(input("Menu apa yang ingin anda pilih: "))#Memilih menu
    #Melihat anggota DPR
    if menu == 1:
        print("\n                List Anggota DPR")
        print("-" * 53)
        print("|ID Anggota |Nama Anggota |Nama Bidang |Nama Partai |")
        print("-" * 53)
        for dpr in list_dpr:
            print(f"|{dpr.getId():<11}|{dpr.getName():<13}|{dpr.getNameBidang():<12}|{dpr.getNamePartai():<12}|")
            print("-" * 53)
    #Menambah anggota DPR
    elif menu == 2:
        n = int(input("\nBerapa jumlah anggota DPR yang ingin anda tambah: "))
        for _ in range(n):
            id = input("ID: ")
            name = input("Nama: ")
            nameBidang = input("Nama Bidang: ")
            namePartai = input("Nama Partai: ")
            dpr = DPR(id, name, nameBidang, namePartai)
            list_dpr.append(dpr)
        print("\nData berhasil ditambah")
    #Merubah anggota DPR
    elif menu == 3:
        id = input("\nID anggota DPR yang ingin anda ubah: ")
        for dpr in list_dpr:
            if dpr.getId() == id:
                dpr.setId(input("ID: "))
                dpr.setName(input("Nama: "))
                dpr.setNameBidang(input("Nama Bidang: "))
                dpr.setNamePartai(input("Nama Partai: "))
                print("\nData berhasil diubah")
                break
        else:
            print("\nID tidak ditemukan")
    #Menghapus anggota DPR
    elif menu == 4:
        id = input("\nID anggota DPR yang ingin anda hapus: ")
        for dpr in list_dpr:
            if dpr.getId() == id:
                list_dpr.remove(dpr)
                print("\nData berhasil dihapus")
                break
        else:
            print("\nID tidak ditemukan")
    #Keluar menu
    elif menu == 5:
        print("\nAnda keluar dari List Anggota DPR!!!")
        break
    else:
        print("\nMenu yang anda pilih tidak ada!")

    print()