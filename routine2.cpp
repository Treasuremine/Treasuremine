// routineffor k mean cluster
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
                //printf("\ndata points");
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
                        //printf("\n dist=%f", dist);

                        if(dist<minDist)
                        {
                            clstLbl=m;
                            minDist=dist;
                        }
                    }
                    //printf("%f and label %d, minDist, clstLbl");
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
                printf("\n cluster %d has %d  points",m, clst[m].memcount);
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
