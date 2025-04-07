#include <genesis.h>

int main(bool hardReset) {

  SPR_init();

  while (TRUE) {
    SYS_doVBlankProcess();
  }

  return 0;
}
