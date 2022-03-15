#include <stdio.h>
int main()
{
	char word[50];
	while (scanf("%s", word) != EOF)
	{
		word[50] = word[50] + 7;
	}
	printf("%s", word);

	return 0;
}

//�d��  �ڪ��Q�k �W������O�i�H���H�ƨg��J
//�U WORD=WORD+7 �i�H�C�@�Ӧr�����ѫ�7��
/*#include "stdio.h"

int main(void){
char str[9999];

while(scanf("%s",str)!=EOF){
for (int i=0;str[i]!='\0';i++){
str[i] -= 7;

printf("%c",str[i]);

}

printf("\n");

}

return 0;

}

�����g�k
���D1 WHY�UFOR�j��
���D�G FOR�j�餤�� STR[I]�o�Oԣ�N��
*/
