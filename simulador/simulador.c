#include "estruturas.h"
#include "requisicoes.h"
#include "simulador.h"

void simulador (){

  printf ("SIMULADOR\n");
  Disk disk[DISK_SIZE];
  int i;
  for (i=0;i<DISK_SIZE;i++){
    disk[i].in_use = 1;
  }
  FileIndex *fi = NULL;
  requisicoes ( disk , &fi );

}
