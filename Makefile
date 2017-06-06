#XX = g++CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= isAnagramTest \
          isPalindromeTest 

COMMON_OBJECT_FILES = strFuncs.o tddFuncs.o 

all: ${BINARIES}

tests: ${BINARIES}
	./isAnagramTest
	./isPalindromeTest

isAnagramTest: isAnagramTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

isPalindromeTest: isPalindromeTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@




clean:
	/bin/rm -f ${BINARIES} *.o
