#include <genesis.h>
#include <sys.h>
#include <vdp_bg.h>

int main(bool hardReset) {
  VDP_drawText("hey there", 0, 0);

  while (TRUE) {
    SYS_doVBlankProcess();
  }

  return 0;
}
