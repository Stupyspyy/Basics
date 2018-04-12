/*Creating of hashtable to insert word from file(name is spaming.c) and then inserting the word with input(when it is new then it is inserted and 
when it already present then print found) and for avoiding collision we using quadprobing*/
#include<stdio.h>
#include<stdio.h>
#include<string.h>
  int collision;
   char *hashtable[100];
   int hash(char *key)
   {
       int sum=0,i;
       for( i=0;key[i]!='\0';i++)
       {
           sum+=key[i];
       }
       return sum%100;
   }
   void addtohashtable(char *word)
   {
       int key=hash(word);
       if(hashtable[key]!=NULL)
       {
           printf("collision found\n");
           collision++;
           quadprobing(word,key);
       }
       else
       {
           hashtable[key]=(char *)malloc(sizeof(strlen(word)+1));
           strcpy(hashtable[key],word);
           printf("inserted\n");
       }
   }
   void extractword(char *filename)
   {
       char word[100];
       FILE *p=fopen(filename,"r");
       while(fscanf(p,"%s",word)!=EOF)
       {
           addtohashtable(word);
       }
       fclose(p);
   }
   void quadprobing(char *temp, int key)
   {
       int c1=3,c2=8,i;
       for( i=1;i<100;i++)
       {
           if(hashtable[(key+c1*i+c2*i*i)%100]==NULL)
           {
               key=key+c1*i+c2*i*i;
               hashtable[key]=(char*)malloc(sizeof((strlen(temp)+1)));
               strcpy(hashtable[key],temp);
               printf("inserted");
               break;
           }
           else
           {
               if(strcmp(hashtable[(key+c1*i+c2*i*i)%100],temp)==0)
               {
                   printf("found at %d",key+c1*i+c2*i*i);
                   break;
               }
           }
       }
   }
   int main()
   {

       int i;
       for( i=0;i<100;i++)
         hashtable[i]=NULL;
       int key,n;
       char word[100];
       extractword("spaming.c");
       scanf("%d",&n);
       for( i=0;i<n;i++)
       {
           scanf("%s",word);
           key=hash(word);
           if(hashtable[key]!=NULL)
           {
               if(strcmp(hashtable[key],word)==0)
               {
                   printf("found at %d\n",key+1);
               }
               else
               {
                   quadprobing(word,key);
               }
               continue;
           }
           else
           {
               addtohashtable(word);
           }
       }
       return 0;
   }
