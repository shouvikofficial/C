#include<stdio.h>

int main()
{

    int i,vowel,consonant,word,digit,other;

    char line[30],ch;

    printf("Inter a line:");
    gets(line);

    i=vowel=consonant=word=digit=other=0;

    while((ch=line[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowel++;
        else if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        consonant++;
        else if(ch>=0 && ch<=9)
            digit++;
        else if(ch==' ')
            word++;
            else
                other++;
    i++;
}

word++;

printf("%d\n",vowel);
printf("%d\n",consonant);
printf("%d\n",word);
printf("%d\n",digit);

}
