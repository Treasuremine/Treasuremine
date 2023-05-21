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
                    //printf("\t%0.3f", c[m].i[s]);
                    r[s]=0.0;
                    c[m].cumi[s]=0.0;

                }//inner for
                c[m].memcount=0;
                }//outer for
        }//end of function
