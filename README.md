# Lab 2

## Team Members
Victoria Lawton

Sriya Kuruppath

## Lab Question Answers

## TCP vs UDP

Q1: How did the reliability of UDP change when you added 50% loss to your local environment? Why did this occur?

The reliability decreased to 50% (the numbers only showed up on the UDP server half of the time). This is because UDP does not confirm deliveries, making it fast, but not reliable. With the 50% loss environment, the data packets were not received half of the time.

Q2: How did the reliability of TCP change? Why did this occur?

The reliability doesn't change because all of the entries (eventually) showed up on the TCP server. When the data is sent from the client, if it is not confirmed on the host, the client attempts to send the data again when using TCP. Because of the 50% loss in the environment, this delays transmission. While all of the entires eventually showed up on the host, making TCP is "reliable", it was slow.

Q3: How did the speed of the TCP response change? Why might this happen?

There was a latency for some of the entries. Meaning, some numbers showed up immediately, whereas others showed up after a delay. Thus, speed decreases. See the answer above for more explanation.

## TCP Client & Server

Q1: What is argc and *argv[]?
Argc stands for argument count and represents how many arguments there are. *argv[] stands for argument vector and it represents the actual list of command line arguments.


Q2: What is a UNIX file descriptor and file descriptor table?
A file descriptor is a unique integer that identifies an open file within a process. The file descriptor table is an array where the index corresponds to the file descriptor, and the value stored at that index is a reference to the file object or resource associated with that file descriptor.


Q3: What is a struct? What's the structure of sockaddr_in?

A struct in C++ is a method to group data in one place under a name.

Q4: What are the input parameters and return value of socket()?

Q5: What are the input parameters of bind() and listen()?

Q6: Why use while(1)? Based on the code below, what problems might occur if there are multiple simultaneous connections to handle?

Q7: Research how the command fork(0) works. How can it be applied here to better handle multiple connections?

Q8: This program makes several system calls such as bind() and listen(). What exactly is a system call?
