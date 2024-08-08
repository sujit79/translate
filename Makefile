CC = g++
CFLAGS = -fPIC -Wall -Wextra -O2 -g 
LDFLAGS = -shared
LIB = -lcurl
TARGET_LIB = libtranslateengine.so  # target lib

SRCS = src/translate-engine.cpp src/util-class/translate-util.cpp src/lib-translate-ext/LibreTranslate.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS) $(LIB)
	$(CC) ${LDFLAGS} -o $@ $^

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS}