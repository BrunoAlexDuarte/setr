#include "dailytemp.h"

int main(int argc, char *argv[]) {

    dtInit();
    dtAdd(1);
    dtAdd(5);
    dtAdd(9);
    dtAdd(-1);

    int res[3];
    dtStat(res);

    printf("%d\n", res[0]);
    printf("%d\n", res[1]);
    printf("%d\n", res[2]);

}