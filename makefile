.PHONY: lib test

test:
	$(MAKE) -C tests 

lib:
	$(MAKE) -C tests lib
