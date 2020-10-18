#include<stdio.h>
#include<string.h>
void search(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
 
    for (int i = 0; i <= N - M; i++)
    {
        int j;
 
        for (j = 0; j < M; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == M)
        {
            printf("Pattern Found At Index: %d \n", i);
        }
    }
}
 
int main()
{
    char txt[80],pat[80];
	printf("Enter Some Text \n");
	scanf("%s",txt);
	printf("Enter A Pattern To Be Searched \n");
	scanf("%s",&pat);
    search(pat, txt);
    return 0;
}
