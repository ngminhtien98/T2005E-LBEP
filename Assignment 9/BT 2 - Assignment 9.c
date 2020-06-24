
// Nhập vào 1 chuối, đếm xem trong chuỗi có các nguyên âm ( a,e,u,o,i..) có số lượng bao nhiêu, và ký tự khác số lượng bao nhiêu.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char str2[5] = {'a', 'o', 'e', 'u', 'i'};
    printf("Hãy nhập chuỗi: ");
    scanf("%str", str);
    
    
    int count = 0, sum = 0;
    
    
    for (int i = 0; i <= 4; i++ ) {
        for( int j = 0; j < strlen(str); j++){
            if(str[j] == str2[i]) {
                count ++;
            }
        }
        printf("Số lượng ký tự %c trong chuỗi là: %d.\n", str2[i], count);
        sum += count;
        count = 0;
    }
    
    printf("Các ký tự còn lại có số lượng: %d\n", (strlen(str) - sum));

    return 0;
}
