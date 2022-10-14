#include <stdio.h>
 
int main()
{
    int array1[] = {8, 2, 3, 4, 5, 6, 7, 1};
    int array2[] = { 4, 5, 7, 11, 6, 1 };
    int i, j, flag, x, k = 0;
    int result[100];
    printf("Cac phan tu chung: ");
   
    
    for (i = 0; i < sizeof(array1) / 4; i++) {
       
        
        for (j = 0; j < sizeof(array2) / 4; j++) {
           
           
            if (array1[i] == array2[j]) {
               
                flag = 0;
               
                // Duyet ket qua
                for (x = 0; x < k; x++) {
                   
                    // Kiem tra phan tu
                    // Da co ket qua
                    // Khong phai
                    if (result[x] == array1[i]) {
                        flag++;
                    }
                }
               
                
                if (flag == 0) {
                   
                    result[k] = array1[i];
                    printf("%d ", result[k]);
                    k++;
                }
            }
        }
    }
}
