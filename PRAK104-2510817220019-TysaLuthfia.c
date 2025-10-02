#include <stdio.h>
#include <math.h>


int main()
{
    int A = 400000; 
    int B = 350000;
    int dA = 87/100;
    int dB = 79/100;
    int hA = round (400000 * dA);
    int hB = round (350000 * dB);
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B); 
    printf("Sepatu A mendapat diskon 13 persen sehingga harganya menjadi %d\n", hA);
    printf("Sepatu B mendapat diskon 21 persen sehingga harganya menjadi %d\n", hB);
    return 0;
}

