//fonction permettant d'assigner une chaîne de caractère à un tableau de caractères
void copier_chaine(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
