[section .data]
_str_star db "*" ; ,0AH
_len_star equ $-_str_star
_str_cr db 0AH
_len_cr equ $-_str_cr

[section .code]
global _start ; 导出 _start 入口，让链接器识别
_start :
	mov cx , 3
	call __psize
	mov cx , 4
	call __psize
	mov cx , 5
	call __psize
	jmp __end  


__psize :
	push cx
	mov rdx , _len_star
	mov rcx , _str_star
	call __print
	mov rcx , 0 ;  
	pop cx
	loop __psize
	
	mov rdx , _len_cr
	mov rcx, _str_cr
	call __print 
	ret
	
__print :
	mov rbx , 1
	mov rax , 4 ; system:write
	int 0x80
	ret

__end :
	mov rbx , 0
	mov rax , 1 ; sys_exit
	int 0x80 ; return 
	
	
