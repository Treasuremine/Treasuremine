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

