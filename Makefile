CC := g++

CFLAGS := -g -Wall
LDFLAGS := -lsfml-graphics -lsfml-system

EXEC := a.out
EXPORT := export.tar.gz
DIST := $(wildcard *)

all: src_all res_all $(EXEC)

$(EXEC): $(src_EXEC)
	cp -a $(src_EXEC) $(EXEC)

clean: src_clean res_clean
	rm -rf $(EXEC)

distclean: clean src_distclean res_distclean
	rm -rf $(EXPORT)

dist: distclean
	tar gzf $(EXPORT) $(DIST)

DIR := src
include src/Rules.mk
DIR := res
include res/Rules.mk