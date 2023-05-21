//rotine for memory allocation
unsigned char **  allocateMem(int r,int c);
unsigned char **m;
int i,j;
m=(unsigned char **) malloc(c * sizeof(unsigned char *));

if(m=null)
{
    printf("1.Error");
}
for(i=0;i<r;i++)
{
    m[i]=(unsignes char *) malloc(c * sizeof(unsignes char));
    if(m[i]==null)
    printf("2. Error");
    }
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
       {
            m[i][j]=0;
        }
     }
return m;
}