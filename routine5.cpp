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
                                                              printf("\n Texture vector for (%d,%d)",i,j);
                                                              for (
                                                                int s = 0; s < 10; s++)
                                                              {
                                                                /* code */
                                                                probability = histo[s]/9.0;
                                                                printf("\t %.3f",probability);
                                                                histo[s]=0.0;

                                                              }
                                                              
                                                          }//inner for
                                                      }//outer for
                                                  }//end of function
    