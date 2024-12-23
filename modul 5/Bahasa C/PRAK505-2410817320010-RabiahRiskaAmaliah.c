#include <stdio.h> 
 
void Biodata(int lahir, char Namaku[], char Asal[]){ 
    int tahun_sekarang = 2020; 
    int usia = tahun_sekarang - lahir;
    printf("Perkenalkan Nama Saya: %s \n", Namaku);
    printf("Umur Saya: %d \n", usia);
    printf("Saya Adalah Agkatan: %d \n", tahun_sekarang);
    printf("Asal Saya Dari: %s \n", Asal);
} 
 
int main() { 
    int tahunLahir; 
    char Namaku[20], Asal[15]; 
    scanf(" %d",&tahunLahir); 
    scanf(" %[^\n]%*c", Namaku); 
    scanf(" %[^\n]%*c", Asal); 
    Biodata(tahunLahir, Namaku, Asal); 
    return 0; 
} 