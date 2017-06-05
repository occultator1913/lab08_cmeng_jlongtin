#XX = g++CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= isAnagramTest 

COMMON_OBJECT_FILES = strFuncs.o 

all: ${BINARIES}

tests: ${BINARIES}
	./isAnagramTest

isAnagramTest: isAnagramTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
