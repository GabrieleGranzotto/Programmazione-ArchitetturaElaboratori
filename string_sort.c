#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) 
{
    int flag=0;
    
    char* alpha = (char*) malloc(sizeof(int)*26);
    alpha = "abcdefghijklmnopqrstuvwxyz";
    int n,m;
    int i=0;
    do 
    {
        n=0;
        while (a[i]==alpha[n]) n++;
        m=0;
        while (b[i]==alpha[m]) m++;
            
        if (n<m) flag=1;
        i++;
    } 
    while (n==m || a[i]=='\0' || b[i]=='\0');
    
    if (a[i]=='\0') flag = 1;
    
    return flag;
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
    int flag=0;
    
    char* alpha = (char*) malloc(sizeof(int)*26);
    alpha = "zyxwvutsrqponmlkjihgfedcba";
    int n,m;
    int i=0;
    do 
    {
        n=0;
        while (a[i]==alpha[n]) n++;
        m=0;
        while (b[i]==alpha[m]) m++;
            
        if (n<m) flag=1;
        i++;
    } 
    while (n==m || a[i]=='\0' || b[i]=='\0');
    
    if (a[i]=='\0') flag = 1;
    
    return flag;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    char* a_rid = malloc(sizeof(char)*strlen(a));
    *a_rid = *a;
    char* b_rid = malloc(sizeof(char));
    *b_rid = *b;
    
    for (int i=0; i<strlen(a)-1; i++) 
    {
        for (int j=i; j<strlen(a);j++)
        {
            if (a[i]==a[j]) a_rid[j]='0';
        }
    }
    
    for (int i=0; i<strlen(b)-1; i++) 
    {
        for (int j=i; j<strlen(b);j++)
        {
            if (b[i]==b[j]) b_rid[j]='0';
        }
    }
    
    for (int i=1; i<strlen(a); i++)
    {
        if (a_rid[i]=='0')
        {
            for (int j=i; j<strlen(a); j++) a_rid[j]=a_rid[j+1];
        }
    }
    
    for (int i=1; i<strlen(b); i++)
    {
        if (b_rid[i]=='0')
        {
            for (int j=i; j<strlen(b); j++) b_rid[j]=b_rid[j+1];
        }
    }
    
    int flag=0;
    
    if (strlen(a_rid)<strlen(b_rid)) flag = 1;
    if (strlen(a_rid)==strlen(b_rid)) flag = lexicographic_sort(a, b);
    
    return flag;
}

int sort_by_length(const char* a, const char* b) 
{
    int flag=0;
    
    if (strlen(a)<strlen(b)) flag = 1;
    if (strlen(a)==strlen(b)) flag = lexicographic_sort(a, b);
    
    return flag;
}


void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    char* tmp = (char*) malloc(sizeof(char)*1024);
    
    for (int i=1; i<len-1; i++)
    {
        for (int j=i+1; j<len; j++)
        {
            if (cmp_func(arr[i],arr[j])==0)
            {
                tmp = arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}