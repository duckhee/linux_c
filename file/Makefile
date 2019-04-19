CC = gcc

SRCS = 21_1.c 21_2.c 21_3.c 21_4.c 21_5.c 21_6.c 21_7.c 21_8.c 21_9.c 21_10.c \
	   21_11.c 21_12.c 21_13.c 21_14.c 21_15.c 21_16.c 21_17.c 21_18.c 21_19.c 21_20.c \
	   21_21.c 21_22.c 21_23.c 21_24.c 21_25.c

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


