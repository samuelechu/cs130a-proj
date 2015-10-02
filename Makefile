CXX=clang++
# CXX=g++

# We have -Wno-unused-parameter so that the compiler
# doesn't complain too much about our stubs.

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

# Change to this before final submission:

#CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

BINARIES=testWordCount00 testWordCount01 testWordCount02 testWordCount03 \
	testWordCount04 testWordCount05 testWordCount06 testWordCount07 \
	testWordCountHelper01

all: ${BINARIES}

testWordCount00: testWordCount00.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

#testWordCount01: testWordCount01.o WordCount.o WordCountHelper.o tddFuncs.o
#	${CXX} $^ -o $@


tests: ${BINARIES}
	./testWordCountHelper01
	./testWordCount00
	./testWordCount01
	./testWordCount02
	./testWordCount03
	./testWordCount04
	./testWordCount05
	./testWordCount06
	./testWordCount07



clean:
	/bin/rm -f ${BINARIES} *.o
