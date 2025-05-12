PROG = projet

SRC = main.c fonctions_strings.c robuste.c adopter.c ajouter.c day_Food.c day_Clean.c Fichier_vers_Tab.c inventaire.c recherche.c TabVersFichier.c Menu.c

all: $(PROG)

$(PROG): $(SRC)
	@gcc -Wall -o $(PROG) $(SRC)

run: $(PROG)
	@./$(PROG)

clean:
	@rm -f $(PROG)
