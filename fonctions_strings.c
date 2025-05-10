//fonction permettant d'assigner une chaîne de caractère à un tableau de caractères
void copier_chaine(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

//fonction permettant de comparer deux chaînes de caractères
int strEgale(char *a, char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}
