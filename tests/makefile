.PHONY: default lib

TEST_BIN := tdd_kata_cpp
TEST_SRC := $(wildcard *.cpp)
TEST_OBJ := $(TEST_SRC:.cpp=.o)

PRODUCT_DIR := ../src
PRODUCT_SRC := $(wildcard $(PRODUCT_DIR)/*.cpp)
PRODUCT_OBJ := $(PRODUCT_SRC:.cpp=.o)

CPPFLAGS += -I$(PRODUCT_DIR)

GTEST_ROOT := lib/googletest-master
GTEST_DIR  := $(GTEST_ROOT)/googletest
GMOCK_DIR  := $(GTEST_ROOT)/googlemock
GTEST_LIBS := \
	$(GMOCK_DIR)/make/libgmock_main.a \
	$(GMOCK_DIR)/make/libgtest.a \
	$(GMOCK_DIR)/make/libgmock.a

default: $(TEST_BIN)
	./$(TEST_BIN)

$(TEST_BIN): $(TEST_OBJ) $(PRODUCT_OBJ)
	g++ -o $@ $(TEST_OBJ) $(PRODUCT_OBJ) $(GTEST_LIBS)

lib:
	make -C $(GTEST_DIR)/make
	make -C $(GMOCK_DIR)/make
