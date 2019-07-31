section .data

message:
	db	'Hello, Holberton',10

section .text

global _start
_start:
	mov	rax, 4
	mov	rdi, 1
	mov	rsi, message
	mov	rdx, 13
	syscall

	mov	rax, 1
	xor	rdi, rdi
	syscall
