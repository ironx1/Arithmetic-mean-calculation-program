#include<stdio.h>
int main() {
	int x,toplam,z;
	printf("Aritmetik ortalamasi alinacak sayi adedi: ");
	scanf("%d",&x);
	z = x;
	int sayi[z-1];
	int adet = 1;
	while(z>=1){
		printf("%d. Sayiyi Giriniz: ",adet);
		scanf("%d",&sayi[z-1]);
		toplam = toplam + sayi[z-1];
		z--;
		adet++;
	}
	printf("sonuc: %.2f",(float)toplam/(float)x);
	return 0;					
}
