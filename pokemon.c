#include <stdio.h>
struct pokemon {
  char *name;
  char *type;
};
void whos_that_pokemon(struct pokemon *p) {
  printf("iiiiits %s, a %s-type pokemon!", p->name, p->type);
}
struct pokemon *make_pokemon(char *name, char *type) {
  struct pokemon *output = malloc(16);
  output->name = name;
  output->type = type;
  return output;
}
