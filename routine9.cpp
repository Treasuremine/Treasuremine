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
        