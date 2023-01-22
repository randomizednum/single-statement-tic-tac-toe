#include <stdio.h>
#include <stdlib.h>

int main(void *_, void *__, short *board, short *player, short *inp) {
	(_ == 666 && __ == 666) ? (
		(*player >= 11) ? 0 : (
			(*player >= 2) ? //This means that we're printing the board (the player variable is the print + 2)
				printf("%c%s", (board[*player - 2] == 2) ? 'O' : ((board[*player - 2] == 1) ? 'X' : ' '), (((*player - 1) % 3 == 0) ? "\n" : "")),
				main(666, 666, board, (*inp = *player + 1, inp) /*inp can be used as storage*/, inp),
				0
			: ( //Regular player value, as a turn
				board[scanf("%d", inp), *inp - 1] = *player + 1, //player is either 0 or 1

				main(666,666, board, (*inp = 2, inp), inp),
				*player = !(*player),
				main(666, 666, board, player, inp),
				0
			)
		),
		0
	) : main(666, 666, calloc(sizeof(short), 9), calloc(sizeof(short), 1), malloc(sizeof(short)))
	;
}
