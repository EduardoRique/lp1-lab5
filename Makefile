#Makefile for "Laboratorio 5" C++application
#Created by Luís Eduardo Rique

# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf

# Compilador
CC = g++

PROG = prog

SRCPATH = src/
BINPATH = bin/
BUILDPATH = build/
INCLUDEPATH = include/
BIN_DIR = doc/

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I$(INCLUDEPATH)

OBJS = $(BUILDPATH)main.o $(BUILDPATH)menu.o $(BUILDPATH)funcoes.o $(BUILDPATH)empresa.o $(BUILDPATH)funcionario.o 

$(PROG) : $(OBJS)
	$(CC) -o $(BINPATH)$(PROG) $(OBJS)

$(BUILDPATH)main.o : $(INCLUDEPATH)menu.h $(INCLUDEPATH)funcoes.h $(INCLUDEPATH)empresa.h $(INCLUDEPATH)funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)main.cpp -o $@

$(BUILDPATH)menu.o : $(INCLUDEPATH)menu.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)menu.cpp -o $@

$(BUILDPATH)funcoes.o : $(INCLUDEPATH)funcoes.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)funcoes.cpp -o $@

$(BUILDPATH)empresa.o : $(INCLUDEPATH)empresa.h $(INCLUDEPATH)funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)empresa.cpp -o $@

$(BUILDPATH)funcionario.o : $(INCLUDEPATH)funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)funcionario.cpp -o $@

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
	$(RM) $(BINPATH)/*
	$(RM) $(BUILDPATH)/*
