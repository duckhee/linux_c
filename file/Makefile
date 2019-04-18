CC = gcc

SRCS = 21_1.c 21_2.c 21_3.c 21_4.c 21_5.c

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CFLAGS = -g

all: clean createdirs $(COBJS)

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(CFLAGS) $< -o $@


clean:
	rm -rf $(BUILDDIR)


