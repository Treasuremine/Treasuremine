//texturesegmentation.cpp
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
            in = fopen("#","rb");
                    if(in=NULL)
                    {
                     }
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

              fclose(); //file open operation
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
        
    } // end of main function
        
//rotine for memory allocation
        unsigned char **  allocateMem(int r,int c);
        unsigned char **m;
        int i,j;
        m=(unsigned char **) malloc(c * sizeof(unsigned char *));

        if(m=null)
        {
            ##;
        }
        for(i=0;i<r;i++)
        {
            m[i]=(unsignes char *) malloc(c * sizeof(unsignes char));
            if(m[i]==null)
            ##;
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
        // routine for k-mean cluster
        void applyKmeans(unsigned char ** q,int row,int col, unsigned char ** lblImage)
        {
            unsigned int consstatus;
            int clstLbl;
            int i,j,s,m;
            int cnt;
            float minDist, dist, delta, sigma, temp, error;
            float r[10]={0,0,0,,0,0,0};
            struct cluster clst[2];
            cnt=0;
            initializecluster(q, &clst[0]);
            conStatus=0;
            while(! conStatus)
            {
                for=(i=2;i<row-2;i++)
                {
                    for(j=2;j<col-2;j++)
                    {
                        for(s=0;s<10;s++)
                        r[s]=0.0;
                       
                        calculateTexturevector(q,i,j,&r[0]);
                        minDist=999.0;
                        for (size_t m = 0; m < 2; m++)
                        {                
                            /* code */
                            delta = 0.0; dist=0.0;
                            for (cnt = 0; cnt < 10; cnt++)
                            {
                                /* code */
                                {sigma= r[cnt]* clst[m].i[cnt];
                                delta +=pow(sigma, 0.5);
                                }
                                dist=  pow(delta, 0.5);
                              if(dist<minDist)
                                {
                                    clstLbl=m;
                                    minDist=dist;
                                }
                            }
                            for(cnt=0; cnt<10; cnt++)
                            {
                                clst[clstLbl.cumi[cnt]+= r[cnt];
                            }
                            clst[clstLbl].memcount +=1;
                            lblImage[i][j]=(unsigned char) pow(2, clstLbl+6);
                        }//inner for

                    }//outer for
                    conStatus=1; temp=0.0;
                    for(m=0;m<2;m++)
                    {
                        for(cnt=0;cnt<10;cnt++)
                        {
                            temp= clst[m].cumi[cnt];
                            ///new mean center
                            clst[m].cumi[cnt]= temp/clst[m].memcount;
                            error = clst[m].cumi[cnt]-clst[m].i[cnt];

                            if(abslocal(error)<0.0001)
                            conStatus =1;;
                            else
                            conStatus =0;
                     }
                    }
                    // refresh cluster center
                   for(m=0;m<2;m++)
                    {
                        for (cnt=0; cnt<10; cnt++)
                        {
                            /* code */
                            clst[m].i[cnt]= clst[m].cumi[cnt];
                            clst[m].cumi[cnt]=0.0;
                        }
                        clst[m].memocount=0;
                        }
                    }//end of while
                }//end of function
