#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  int qty_pensil, qty_bolpoin, qty_buku, qty_penghapus;
  int totalpensil, totalbolpoin, totalbuku, totalpenghapus;
  int total, total_akhir, totalbayar;
  int panjangnama;
  int ulang;
  bool x;
  const int hargapensil = 1500, hargabolpoin = 1500, hargabuku = 3000, hargapenghapus = 500;
  char nama[50];

  

  printf("--------------------------\n");
  printf("Selamat datang di Toko ATK\n");
  printf("--------------------------\n\n");

  
  printf("Nama kasir : ");
  gets(nama);
  panjangnama = strlen(nama);
  printf("Jumlah karakter nama anda : %d karakter\n", panjangnama);

  pindah:
  printf("------Daftar Barang------\n");
  printf("Pensil\t\t Rp. 1500 : ");
  scanf("%d", &qty_pensil);
  printf("Bolpoin\t\t Rp. 1500 : ");
  scanf("%d", &qty_bolpoin);
  printf("Buku\t\t Rp. 3000 : ");
  scanf("%d", &qty_buku);
  printf("Penghapus\t Rp. 500 : ");
  scanf("%d", &qty_penghapus);

  totalpensil = hargapensil * qty_pensil;
  totalbolpoin = hargabolpoin * qty_bolpoin;
  totalbuku = hargabuku * qty_buku;
  totalpenghapus = hargapenghapus * qty_penghapus;

  total = totalpensil + totalbolpoin + totalbuku + totalpenghapus;
  printf("Total harga = %d\n\n", total);

  printf("Uang yang dibayarkan :");
  scanf("%d", &totalbayar);

  total_akhir = totalbayar - total;

  if (totalbayar >= total)
  {

    printf("--------------------------\n");
    printf("////// STRUK BELANJA ///////\n");
    printf("--------------------------\n\n");
    
    printf("Pensil = %d\n", totalpensil);
    printf("Bolpoin = %d\n", totalbolpoin);
    printf("Buku = %d\n", totalbuku);
    printf("Penghapus = %d\n\n", totalpenghapus);
    printf("Total Harga = %d\n", total);
    printf("Uang yang dibayarkan = %d\n\n", totalbayar);
    printf("Kembalian = %d\n\n", total_akhir);

    printf("---------------------------------\n");
    printf("Terimakasih Telah Berbelanja\n");
    printf("---------------------------------\n\n");
  }
  else
  {
    printf("Uang yang dibayarkan tidak cukup!! \n\n");
  }

    printf("Apakah anda ingin melakukan transaksi lain ?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    scanf("%d", &ulang);
    x = ulang;

    if (ulang == 1)
    {
      goto pindah;
    } else if (ulang == 2){
      printf("====Terimakasih Telah Mengunjungi Toko Kami====");
    }
    
  return 0;
}