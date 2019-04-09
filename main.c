//***********************************************************// 
// 						[ Source Code ] 
// 
// Institution 	: Institut Teknologi Bandung 
// Name 		: <Nama Praktikan> 
// File Name 	: main.c 
// Dependency 	: stdio.h, Lib.h
// 
// Description: 
// 	Membuat sebuah program yang dapat membuat jadwal praktikum
//	dan mengatur jadwal asisten di setiap shift praktikum yang
//	ada.
// 
// Status: 
// 1. Rizky Ardi Maulana - 13217054 : Create the file 
// 2. Devananda - 13217061 : Fix the bug where number 2 
//								 printed twice 
// 3. Hans Jeremia - 13217066 : membuat main program dan rule
//                              checker
// 4. Muhammad Nadhif Farizi - 13217074 : 
//***********************************************************//

//Library
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "Lib.c"
#include "Lib.h"

typedef struct checker {
    int minggu [2];
    char *hari [2];
} Checker;

//Variabel
int menu;
int MenuUtama;
char NamaProyek[100];
Checker checker;
Schedule jadwal;

//Fungsi & Prosedur
void menuUtama();
void RuleChecker(Checker checker, Schedule jadwal);
void buildChecker(Checker *checker);

//Main Program
int main(){

    //isi schedule
    char const * day;
    jadwal.week[0].element= 3;
    day = "Rabu";
    //alokasi memori
    jadwal.week[0].day[2].element = malloc((strlen(day))+1);
    jadwal.week[0].day[2].element=  day;

    day = "Senin";
    for (int i = 0 ; i < 5; i++){
        if (i != 2){
           //alokasi memori
        jadwal.week[0].day[i].element = malloc((strlen(day))+1);
        jadwal.week[0].day[i].element=  day;
        }
    }
    jadwal.week[1].element= 4;
    day = "Senin";
    //alokasi memori
    jadwal.week[1].day[0].element = malloc((strlen(day))+1);
    jadwal.week[1].day[0].element=  day;

    day = "Rabu";
    for (int i = 1 ; i < 5; i++){
         //alokasi memori
        jadwal.week[1].day[i].element = malloc((strlen(day))+1);
        jadwal.week[1].day[i].element=  day;
    }

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
        buildChecker(&checker);
        RuleChecker(checker, jadwal);

    }else if(MenuUtama==8){

    }
}

void buildChecker(Checker *checker){
    char const *hari;
    //assign buat contoh saja
    checker ->minggu[0] = 3;
    hari = "Rabu";
    checker->hari[0] = malloc(strlen(hari)+1);
    strcpy(checker->hari[0],hari);


    checker ->minggu[1] = 4;
    hari = "Senin";
    checker->hari[1] = malloc(strlen(hari)+1);
    strcpy(checker->hari[1],hari);

}
void RuleChecker(Checker checker, Schedule jadwal){

    int i_minggu;
    int i_hari;
    for (int i = 0; i<size;i++){
        printf("minggu : %d Hari : %s\n", checker.minggu[i], checker.hari[i]);
         i_minggu = 0;
         i_hari = 0;

        //untuk database index pertama
        while ((checker.minggu[i] != jadwal.week[i_minggu].element)&&(i_minggu <2)){
            i_minggu++;
        }

        //cek hari
        while ((strcmp(checker.hari[i],jadwal.week[i_minggu].day[i_hari].element)!=0)&&(i_hari <5)){


//        printf("%s : %s\n", checker.hari[i],jadwal.week[i_minggu].day[i_hari].element);
//        printf("%d : %d\n", strlen(checker.hari[i]),strlen(jadwal.week[i_minggu].day[i_hari].element));

        i_hari++;

        }

        printf("i_minggu: %d i_hari : %d\n", i_minggu,i_hari);
    }


}
