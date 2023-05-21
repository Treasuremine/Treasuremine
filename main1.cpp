#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<math.h>

// Declaration of structure cluster
struct cluster
{
    /* data */
    float i[10];
    float cumi[10];
    int memcount;
};

//variable declaration

unsigned char **allocateMem(int,int);
void applyKmeans(unsigned char **,int,int, unsigned char **);
void calculateTexturevector(unsigned char **, int,int,float *);
void initializecluster(unsigned char **, struct cluster* c);
void calculateTexture(unsigned char **,int,int);
void uniformPattern(unsigned char **, unsigned char **,int,int,int,int);
void localbinary(unsigned char **, unsigned char**,int,int,int,int);
void contrast(unsigned char **, unsigned char **,int,int,int,int);
void invariant(unsigned char **, unsigned char **,int,int);

int valassignment(int);
float abslocal(float);
float roundof(float);

// begining of main
void main()
{
    int i, row, col,k,l;
    FILE *in,*out;
    unsigned char **p,**q,**lblImage;

   // file open operation
    in = fopen("C:\texture_segmentation/raw.png","rb");
            if(in=NULL)
            {
              // printf("there is no such file exists:\n");
            }
   
           // printf("take value for p");
           //scanf("%d%d", &raw, &col);
 
       //function call for memory alloaction
                p= allocateMem(row,col);
                q= allocateMem(row,col);
                lblImage= allocateMem(row,col);

             for(i=0;i<row;i++)
            {
             fread(p[i],sizeof(unsigned char), col,in);
             }
                uniformPattern(p,q,row,col,k,l);
                applyKmeans(q,row, col,k,lblImage);
                calculateTexture(q,row,col);
                invariant(p,q,col,row);
                contrast(p,q,row,col,k,l);
                localbinary(p,q,,row,col,k,l);

                fclose();
            //file open operation
            out=fopen("C:\texture_segmentation/cluster2.raw","wb");

            //filewrite operation

    for(i=0;i<row;i++)
    {
        fwrite(lblImage[i], sizeof[char],col,out);
    }
   fclose(out);

//memorydeletion

for(i=0;i<row;i++)
{
    free(p[i]);
    free(q[i]);
    free(lblImage[i]);
}
free(p);
free(q);
free(lblImage);
}

// end of main function