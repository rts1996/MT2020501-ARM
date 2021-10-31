     AREA     fibonacci, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    MOV R3, #0x00
		MOV R4, #0x01
		MOV R5, #0x10
		MOV R0, R3
		BL printMsg
		MOV R0, R4
		BL printMsg
		SUB R5, #0x02
		
loop	ADD R0, R3, R4
		MOV R3, R4
		MOV R4, R0
		BL printMsg
		SUB R5, #0x01
		CMP R5, #0x00
		BNE loop
	
stop    B stop ; stop program
     ENDFUNC
     END 