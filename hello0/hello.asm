[section .data]
strHello db "Hello, world!",0AH
strLen equ $-strHello

[section .code]
global _start ; 导出 _start 入口，让链接器识别
_start :
	mov cx , 3
	call __hwloop
	jmp __end  
		
__hwloop :
	push cx
	mov edx , strLen
	mov ecx , strHello
	mov ebx , 1
	mov eax , 4 ; sys_write
	int 0x80 ;
	mov ecx , 0 ;  
	pop cx
	loop __hwloop
	ret


__end :
	mov ebx , 0
	mov eax , 1 ; sys_exit
	int 0x80 ; return 
	
	
