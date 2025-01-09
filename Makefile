# Nom de l'exécutable
EXEC = programme

# Liste des fichiers source
SRC = main.c pile.c file.c

# Générer la liste des fichiers objets correspondants
OBJ = $(SRC:.c=.o)

# Options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -g

# Règle principale
all: $(EXEC)

# Règle pour créer l'exécutable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Règle pour créer les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -f $(OBJ) 

# Nettoyage complet (y compris les fichiers temporaires)
distclean: clean
	rm -f *~

# Dépendances (facultatives, mais utiles pour éviter des erreurs)
main.o: pile.h file.h
pile.o: pile.h
file.o: file.h

