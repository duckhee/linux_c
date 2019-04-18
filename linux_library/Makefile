#gcc 19_3.c -lm

CC = gcc

SRCS = 19_1.c 19_2.c 19_3.c 19_4.c 19_5.c 19_6.c 19_7.c 19_8.c 19_9.c 19_10.c 19_11.c

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CFLAGS = -g

all: clean createdirs $(COBJS)

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS): $(BUILDDIR)/%.o:%.c
	-$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILDDIR)



