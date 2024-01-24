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



Q2: What is a UNIX file descriptor and file descriptor table?



Q3: What is a struct? What's the structure of sockaddr_in?

A struct in C++ is a method to group data in one place under a name.
