CC = gcc

SRCS = 8_1.c 8_2.c 8_3.c 8_4.c 8_5.c 8_6.c 8_7.c 8_8.c 8_9.c \
	   8_10.c 8_11.c 8_12.c 8_13.c 8_14.c 8_15.c

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean createdirs $(COBJS)

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $< -o $@

clean:
	rm -rf $(BUILDDIR)


