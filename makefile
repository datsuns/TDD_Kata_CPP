.PHONY: lib test clean

test:lib
	$(MAKE) -C tests 

lib:
	$(MAKE) -C tests lib

clean:
	$(MAKE) -C tests clean
