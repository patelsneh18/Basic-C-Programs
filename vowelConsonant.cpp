#include<stdio.h>

int main()
{
    char a;
    printf("enter alphabet\n");
    scanf("%c",&a);
    
    switch (a)
    {
    case 'a':
        printf("Vowel");
        break;
    
    case 'e':
        printf("Vowel");
        break;
    
    case 'i':
        printf("Vowel");
        break;
    
    case 'o':
        printf("Vowel");
        break;
    
    case 'u':
        printf("Vowel");
        break;
    
    default:
    printf("Consonant");
        break;
    }
}