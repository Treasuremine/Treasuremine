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
                                    //print
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
