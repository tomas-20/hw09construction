#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct pokemon {
  char *name;
  char *type;
};
void whos_that_pokemon(struct pokemon *p) {
  printf("iiiiits %s, a %s-type pokemon!\n", p->name, p->type);
}
struct pokemon *make_pokemon(char *name, char *type) {
  struct pokemon *output = malloc(16);
  output->name = name;
  output->type = type;
  return output;
}
char *random_type() {
  srand(time(NULL));
  return {"Normal", "Fire", "Water", "Grass", "Electric", "Ice", "Fighting", "Poison", "Ground", "Flying", "Psychic", "Bug", "Rock", "Ghost", "Dark", "Dragon", "Steel", "Fairy"}[rand() % 18];
}
int main() {
  struct pokemon *weedle = make_pokemon("Weedle", "Bug/Grass");
  whos_that_pokemon(weedle);
  return 0;
}
