     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
		;Load values to memory
		MOV R1, #0x03
		MOV R2, #0x12
		MOV R3, #0x15
	    MOV  R4, #0x20000000

		STR  R1,[R4]
		STR  R2,[R4, #0x04]
		STR  R3,[R4, #0x08]
		
		;Store values to register
        LDR R1, [R4]
		LDR R2, [R4, #0x04]
		LDR R3, [R4, #0x08]

		CMP R1, R2
		ITE GE
		MOVGE R0, R1
		MOVLT R0, R2
		
		CMP R0, R3
		IT LT
		MOVLT R0, R3
		BL printMsg

stop    B stop ; stop program
     ENDFUNC
     END 