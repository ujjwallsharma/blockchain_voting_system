# Voting System based on Blockchain Technology  
This project is emulating a voting system with the a dummy implementation of Blockchain Technology.  
First of all, Let's understand what is Blockchain Technology.  

# Blockchain Technology  
Blockchain is a shared, immutable Ledger that facilitates the process of digitally recording multiple number of transactions in multiple places on a computer 
network. One of the most famous term "Cryptocurrency" is totally based on Blockchain Technology. Blockchain technology makes cryptocurrencies work just like 
the internet makes email possible. Blockchain as the name suggests, is a chain of immutable blocks. Now the question arises, What is a Block ?  

### Block  
A block consists of the data, present HASH value, HASH of the previous block.  

* Data : Details such as sender/reciever/amount of money etc.  
* HASH : A unique code for each block, it is like a fingerprint.  
* HASH of previous block : Contains the HASH of the previous block.  

## Goals  

Voting is a decision-making process by which a population chooses an individual or multiple individuals to hold public office. Since voting is such a 
important activity so it must be secure so that no one can temper with the votes. So to make it secure, the concept of blockchain technology can be used 
so that each vote will become a block with a unique hash of itself and the hash of the previous block, distributed in a network. 
So nobody can temper with the voting data.  

* Voting activity will be secure.  
* Trusted result.

## Specifications  

### Language Used  
C language is used to implement the dummy blockchain voting system.  

### Data Structure  

Blockchain is very easy in its core.  
It is formed by well known data structure LINKED LIST.  

## Design  

Voting system is designed in such a way that each vote will represent a block.  
Each block will contain the following details :  

* Name of the voting party  
* Hash code associated with a particular block  
* Hash code of the previous block  

This has been implemented using the doubly-linked list data structure.  

## Resources  
  
In-depth details about blockchain technology - [Wikipedia](https://en.wikipedia.org/wiki/Blockchain/).  




