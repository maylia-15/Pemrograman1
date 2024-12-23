#include <stdio.h>

int main (){
    char nama [50], nim [20], paralel [20], ttl [50], alamat [50], hobby [20], nohp[20];

    printf("Nama                      : ");
    fgets(nama, sizeof (nama), stdin);
    printf("Nim                       : ");
    fgets(nim, sizeof (nim), stdin);
    printf("Kelas Paralel             : ");
    fgets(paralel, sizeof (paralel), stdin);
    printf("Tempat/Tanggal Lahir      : ");
    fgets(ttl, sizeof (ttl), stdin);
    printf("Alamat                    : ");
    fgets(alamat, sizeof (alamat), stdin);
    printf("Hobby                     : ");
    fgets(hobby, sizeof (hobby), stdin);
    printf("No Hp                     : ");
    fgets(nohp, sizeof(nohp), stdin);

    printf("Nama                      : %s", nama);
    printf("Nim                       : %s", nim);
    printf("Kelas Paralel             : %s", paralel);
    printf("Tempat/Tanggal Lahir      : %s", ttl);
    printf("Alamat                    : %s", alamat);
    printf("Hobby                     : %s", hobby);
    printf("No Hp                     : %s", nohp);

    return 0;
}