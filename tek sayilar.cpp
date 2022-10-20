// Dýþarýdan girilen bir n tam sayýsýna kadar olan tek tam sayilarýn toplamýný 
// bulan program.


#include <stdio.h>
#include <conio.h>


int main()
{ 
    int i,n,sonuc;
    
    printf("N sayisini giriniz :");
    
    scanf("%d", &n);
    
    sonuc = 0;
    i = 1;
    
    while (i<=n)
    {
            sonuc = sonuc+i;
            i=i+2;
          }
 
    printf ("%d e kadar olan tek sayilarin toplami : %d" ,n,sonuc  );
           
    getch();
    // ekranýn kapanmasýný engelliyor..
}
