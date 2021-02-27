# tpvm only takes compiled byte codes (.tpc files)
tpvm: tp.c vmmain.c
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm tpvm

run:
	@./tpvm