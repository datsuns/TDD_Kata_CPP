.PHONY: lib test clean

test:
	$(MAKE) -C tests 

lib:
	$(MAKE) -C tests lib

clean:
	$(MAKE) -C tests clean
