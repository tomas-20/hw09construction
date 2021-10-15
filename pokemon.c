#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *POKETYPES[] = {"Normal", "Fire", "Water", "Grass", "Electric", "Ice", "Fighting", "Poison", "Ground", "Flying", "Psychic", "Bug", "Rock", "Ghost", "Dark", "Dragon", "Steel", "Fairy"};
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
  return POKETYPES[rand() % 18];
}
int main() {
  struct pokemon *weedle = make_pokemon("Weedle", "Bug/Grass");
  whos_that_pokemon(weedle);
  struct pokemon *bob = make_pokemon("Bob", random_type());
  whos_that_pokemon(bob);
  return 0;
}
