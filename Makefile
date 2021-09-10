# Makefile : Voting System Based on Blockchain

blockchain : main.c hash.c linkedlist.c
	gcc -o blockchain main.c hash.c linkedlist.c	
