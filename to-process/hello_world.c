#include <stdio.h>
#include "mpi.h"

int main (int argc, char *argv[])
{
    int rank, size;
    char hostname[256];
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &rank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
    gethostname(hostname, 255);
    printf("Proceso ejecutado en %s, con el identificador: %d, de un total de %d procesos.\n", hostname, rank, size);
    MPI_Finalize();
    return 0;
}
