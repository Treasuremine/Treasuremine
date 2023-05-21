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


