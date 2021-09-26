#include <stdio.h>

int main()
{
    char str[100]; //iko variable untuak string ,str tu penamaan variable so nilai 100 itu panjang charakter yg bisa dimasukan 
    int hitungKecil, hitungBesar;//variable untuk pecacah huruf kecil dan besar
    int penghitung;//pencacah untuk semua kalimat

    //assign all counters to zero
    hitungKecil= hitungBesar = 0; // Mengisi nilai =0 untuk variable hitungKecil hitungBesar

    printf("Masukan Kalimat : "); //untuak buek string
    gets(str); //mengambil string 
    
    //awal perulangan for
    /*
    penghitung = 0 >>> menyeting variable penghitung dimulai 0
    str[penghitung] != NULL >>>selama varible char yg str tidak null tetap melakukan perulangan
    */
    for (penghitung = 0; str[penghitung] != NULL; penghitung++) {

        if (str[penghitung] >= 'A' && str[penghitung] <= 'Z')//iko untuk cek char yg huruf besar kalau besar lanjut jalankan increamenr hitung++ jadi nilai hitungBesar bertambah setiap if terpenuhi
            hitungBesar++;
        else if (str[penghitung] >= 'a' && str[penghitung] <= 'z')
        //iko untuk cek char yg huruf kecil kalau kecil lanjut jalankan increament hitung++ jadi nilai hitungKecil bertambah setiap if terpenuhi
            hitungKecil++;
    }
    //akhir for
    

    printf("Total Huruf Besar: %d \nTotal Huruf Kecil: %d", hitungBesar, hitungKecil);//iko cuma menampilkan variable hitungBesar dan hitungKecil yg alah diisi di proses for

    return 0;
}
