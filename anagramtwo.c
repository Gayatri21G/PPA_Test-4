//Q.2].check two strings are ANAGRAM or not.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int anagram(char str1[], char str2[])
{
    int n1[26] = {0}, n2[26] = {0}, i = 0;
 
    while (str1[i] != '\0')
    {
        n1[str1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        n2[str2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (n1[i] != n2[i])
            return 0;
    }
    return 1;
} 
void lowerstr(char m[]) 
{
    int c = 0;
    while (m[c] != '\0') 
    {
        if (m[c] >= 'A' && m[c] <= 'Z') 
        {
            m[c] = m[c] + 32;
        }
        c++;
    }
}
 
void remov_pun(char str[])
{
    int i,j;
    for(i = 0; str[i] != '\0'; ++i)
    {
        while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
}
int main()
{
    char str1[50], str2[50];
    int cnt,i,j;
    printf("Enter the string\n");
    gets(str1);
    printf("Enter another string\n");
    gets(str2);
    remov_pun(str1);
    remov_pun(str2);
    lowerstr(str1);
    lowerstr(str2);
    cnt = anagram(str1,str2);
    if (cnt == 1)
    {
        printf("\n ANAGRAM strings");
    }
    else
    {
        printf("NOT anagram strings");
    }
    return 0;
}
 

/*Output:-
	gayatri@ideapad320:~/Preparation/pc ds prog c$ ./a.out
Enter the string
'Eleven plus two'
Enter another string
'Twelve plus one'

 ANAGRAM stringsgayatri@ideapad320:~/Preparation/pc ds prog c$ 

*/
