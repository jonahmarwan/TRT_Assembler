VAL EQU "Hello, World!";
LEN EQU 13;
MOV ATR VAL;
MOV BTR LEN;
ALLOC BTR;
PUSH VAL;
MOV LGD ATR;
SYS;
MOV ATR \0A;
MOV BTR \0A;
FREE BTR;
POP VAL;
MOV LGD \0A;
SYS;
