#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
int main() {
int input;srand(time(NULL));SetConsoleOutputCP(CP_UTF8);
printf("输入密码位数: ");
scanf("%d",&input);
char arr[61];
char str[21]="";

for (int i = 0; i <= 61; i++) {
        arr[i]='A'+i;
    }
for (int i = 0; i <input; i++)
{
    int index = 0;
    index = rand()%61;
    int len = strlen(str); // 获取字符串长度
    str[len] = arr[index];         // 将随机索引字符放在字符串末尾
    str[len + 1] = '\0'; 
}
printf("生成密码成功: ");
printf("%s\n",str);
system("pause");

return 0;
}



 



 
