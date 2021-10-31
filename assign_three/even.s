     AREA     even, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
		;Load values to memory
		MOV R0, #0x03
		MOV R5, #0x09
		MOV R1, #0x05
		MOV R2, #0x04
		MOV R3, #0x03
	    MOV  R4, #0x20000000
		
init	ADD R1, R1, R0
		ADD R2, R2, R0
		ADD R3, R3, R0
		STR R1,[R4]
		STR R2,[R4, #0x04]
		STR R3,[R4, #0x08]
		ADD R4, R4, #0x0c
		SUB R0, R0, #0x01
		CMP R0, #0x00
		BNE init

		MOV  R4, #0x20000000
		MOV R0, #0x00

loop	LDR R1, [R4]
		ADD R4, R4, #0x04
		TST R1, #0x01
		IT EQ
		ADDEQ R0, R0, #0x01
		SUB R5, R5, #0x01
		CMP R5, #0x00
		BNE loop
		
		BL printMsg

stop    B stop ; stop program
     ENDFUNC
     END 