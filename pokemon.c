#include <stdio.h>
struct pokemon {
  char *name;
  char *type;
}
void *whos_that_pokemon(struct pokemon *p) {
  printf("iiiiits %s, a %s-type pokemon!", p->name, p->type);
}
