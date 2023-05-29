//texturesegmentation.cpp
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
 //routine for initialize cluster
        void initializecluster(unsigned char **q, struct cluster * c)
        {
            int m,s,i,,j;
            float r[10]={0,0,0,0,0,0,0,0,0,0};
            //int xcoord[10]={};
            //int ycoord[10]={};
            int xcoord[2]={,};
            int xcoord[2]={,};
            for(m=0;m<2;m++)
            {
                i=xcoord[m];
                j=ycoord[m];
                calculateTexturevector(q,i,j,&r[0]);
                for(s=0;s<10;s++)
                {
                    c[m].i[s]=r[s];
                    r[s]=0.0;
                    c[m].cumi[s]=0.0;

                }//inner for
                c[m].memcount=0;
                }//outer for
        }//end of function
//routine for calculate textutervector
        void calcullateTexturevector(unsigned char **q, int i, int j, float * r)
                 {
                      int k,l;
                      for(k=-2;k<3; k++)
                           {   
                              for(l=-2;;l<3;l++)
                               {
                                   r[q[i+k][j+l] += #/#;
                                   //printf("%.3f", r[q[i+k][j+l]]);
                                }
                     }//end of function
// routine for calculation of histogram-value
  void calculateTexture(unsiged char **q, int row,int col)
      {
                   int i,j,k,l;
                   float probability;
                   histo[10]={0,0,0,0,0,0,0,0,0,0};
                   
                 for(i=1; i<row-1;i++)
                     for(j=1; j<col-1; j++)
                         for(k=-1;k<2;k++)
                            {
                               for(l=-1;l<2;l++)
                                 {                                                                                                                                                                                                                                                       printf("\nq value %d ",q[i+j][j+i]);
                                       histo[q[i+j][j+i]]+=1.0;
                                  }
                            }
                       for (int s = 0; s < 10; s++)
                                 {
                                         /* code */
                                         probability = histo[s]/9.0;
                                          histo[s]=0.0;
                                  }
                         }//inner for
                       }//outer for
                 }//end of function

    //routine for lbp

             void uniformPattern(unsigned char **p, unsigned char **q, int row, int col,int k, int l)
                        {   
                            {
                                int i,cv,cw, lbp;
                                int j, lastEle, count, frstVal;
                                float delta1, delta2, tempdelta1, temdelta2;
                                float theta, anglestep;
                                int uValTwo, uvalOne, uVal;
                            }
                            for(i=1;i<row-2;i++)
                            {
                                for (j = 0; j < col-2; j++)
                                {
                                    /* code */
                                    uValOne = 0; uValTwo =0;
                                    uVal =0;
                                    count=0; delta1=0;delta2=0;
                                    theta=0;cw=0;
                                    anglestep =( / )* (  );
                                    theta = anglestep;

                                    cv=p[i][j];

                                    frstVal=p[i]+[j+1];
                                    lastEle = frstVal;
                                   
                                    while (count<7)
                                    {
                                        /* code */
                                        delta1 = tempdelta1 = sin(theta);
                                        delta2 = tempdelta2 = cos(theta);

                        if (abslocal1((abslocal(tempdelta1)(abslocal(tempdelta2))))<.01)
                        {
                        /* code */

                        delta1=tempdelta1/abslocal(delta1);
                        delta2= tempdelta2/abslocal(delta2);

                        }
                        cw = p[i+  (int)(roundof(delta1), (int) roundof(delta2));]
                        uValTwo += abslocal ( valassignment(cw-cv)) -  valassignment( lastEle-cv));
                        theta += angelstep;
                        lastEle=cv;
                        count ++;
                        }

                        uValOne = abslocal( valassignment(cw-cv) - valassignment(frstVal - cv));
                        uVal = uValOne + uValTwo;
                             lbp=0;
                         if( uVal<=2)
                         {
                        for (k=-1; k< 2; k++)
                        {
                        /* code */
                        for (l = -1; l < 2; l++)
                        {
                        /* code */
                        if (!((k==0) && (l==0)))
                        {
                        /* code */
                        lbp += valassignment(p[i+k][j+1] - p[i][j]);
                        }

                        }//inner for


                        }//outer for
                        q[i][j]= lbp;

                        }
                        else
                        q[i][j]=9;
                        } 

                         }//inner for
                                
                    }//outer for
                }
       }
  // routine for lbp

          void loacalbinary(unsigned char **p, unsigned char **q, int row, int col, int i, int j)
                {
                int i, cv, temp=0,t,j, count;
                        for (i= 1; i<row-2; i++)
                        {
                        /* code */
                        for (j=1; j < col-2; j++)
                        {
                        /* code */
                        temp=0;
                        count=0;
                        cv=p[i][j];
                        for (k=-1; k <2; k++)
                        {
                        /* code */
                        for (l=-1; l < 2; l++)
                        {
                        /* code */
                        t=p[i+k][j+2];
                        if (!((k==0)&&(l==0)))

                                {
                                /* code */
                                if (t>=cv)
                                {
                                /* code */
                                temp = temp + pow(2, count);
                                count++;
                                }

                }// inner for


                } //outer for
                        q[i + j] = temp;

           }// inner for

    }//outer for

 return;
}
}
//routine for invariant

void invariant(unsigned char **p, unsigned char **q, int row , int col)
{
    int i, cv, cw, t,j, count;
    unsigned char s, leftshift, rightshift, fv;
    float delta1, delta2, tempdelta1, tempdelta2;

    double theta, anglestep;
    for( i=1; i< row-2; i++)
    {
        for( j=1; j< col-2; j++)
        {
            count=0;
            delta1=0.0; delta2=0.0; theta=0; cw=0;
            s=0*00;
            angelstep=(/)*( );

            cv=p[i][j]
            while(count<8)
            {
                delta1=tempdelta1=sin(theta);
                delta2=tempdelta2=sin(theta);

                if(abslocal((abslocal(tempdelta1)abslocal(tempdelta2)))<.01)
                {
                    delta1=tempdelta1/abslocal(delta1);
                    delta2=tempdelta2/abslocal(delta2);
                }

            cw=p[i+(int) roundof(delta1)] [j+(int) roundoof(delta2)];
             if(cw>=cv)
             {
                t=1;
             }
            else
            {
                t=0;
            }

            theta += angelstep;
            if(t==1)
            s= s | 0*01<< count;
            count++;
            }
            int minval =256;
            for(int n=1;n<8;n++)
            {
                leftshift =s<<n;
                rightshift = s>>(8-n)

                fv= rightshift | leftshift;

                if(fv<minval)
                {
                    q[i][j ]= fv;
                    minval= fv;
                }
            }
        }//inner for

    }//outer for
}//end of function
                                     
// routine for contrast
        void contrast(unsigned char **p, unsigned **q, int row, int col, int k, int l)
        {
            int temp1, temp2, temp, count1, count2, i, j, cv,t;
            float count;

                    for( i = 1; i<row-2; i++)
                    {
                        for(j=1;j<col-2; j++)
                        {
                            temp1=0;
                            temp2=0;
                            temp=0;
                            count1=0;
                            count2=0;
                            cv=p[i][j];
                            for(k=-1; k<2;k++)

                            {
                                for( l=-1; l<2;l++)
                                {
                                    t= p[i+k][j+l];
                                    if(!((k==0)&&(l==0)))
                                    {
                                        if(t>=cv)
                                        {
                                            temp1=temp1+t;
                                            count1++;
                                        }
                                        else
                                        {
                                            temp2= temp2+t;
                                            count2++;
                                        }
                                    }
                                }//inner
                            }//outer
            if(count1 !=0) && (count2 !=0)
            {
              cont=(float)((temp1/count)-(temp2/count));
              }
              else if(count1==0|| count2==0)
              {
               cont=0.0;
               }
               
               q[i][j]= (char)cont;
               
           }//inner for
         }//Outer for
         return;
    }//end of the function
