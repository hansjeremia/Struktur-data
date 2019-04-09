//Library
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "Load.c"
#include "Load.h"

//Variabel
int menu;
int MenuUtama;
char NamaProyek[100];
int RC[12][7];

//Fungsi & Prosedur
void menuUtama();
void RuleChecker();

//Main Program
int main(){
    printf("Menu : \n");
    printf("\t 1. Buat Proyek Baru\n");
    printf("\t 2. Buat Proyek dari Berkas\n");
    printf("\t 3. Keluar\n");
    printf("Masukkan : ");
    scanf("%d",&menu);

    if (menu == 1){
    menuUtama();
    }else if (menu == 2){

    }else if (menu == 3){

    }
    return 0;
}

void menuUtama(){
    printf("====== Membuat Proyek Baru ======\n");
    printf("Masukkan nama proyek : ");
    gets(NamaProyek);
    printf("\n");
    printf("[Menu Utama]");
    printf("Pilihan Mode : \n");
    printf("\t 1. Tampilkan Schedule\n");
    printf("\t 2. Schedule Manual\n");
    printf("\t 3. Tampilkan Status Assignment Asisten\n");
    printf("\t 4. Assign Asisten Manual\n");
    printf("\t 5. Schedule Otomatis\n");
    printf("\t 6. Assign Otomatis\n");
    printf("\t 7. Rule Checker\n");
    printf("\t 8. Simpan Proyek dan Keluar\n");
    do{
        printf("Pilihan mode : ");
        scanf("%d",&MenuUtama);
        if(MenuUtama > 8){
            printf("Pilihan Mode Salah\n");
        }
    }while(MenuUtama > 8);
    if (MenuUtama==1){

    }else if(MenuUtama==2){

    }else if(MenuUtama==3){

    }else if(MenuUtama==4){

    }else if(MenuUtama==5){

    }else if(MenuUtama==6){

    }else if(MenuUtama==7){

    }else if(MenuUtama==8){

    }
}

void RuleChecker(){
    int i,j;
    for (i=0;i<12;i++){
        
    }

}
