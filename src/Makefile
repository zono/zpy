# tpvm only takes compiled byte codes (.tpc files)
tpvm: tpvm.c
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm tpvm

run:
	@./tpvm