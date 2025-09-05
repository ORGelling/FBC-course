# Exercise 8.
Advanced exercise
Purpose of this exercise: learn to manipulate bits inside variables

In this exercise we'll have a look at how to handle bits inside an existing size_t variable. Our program (assuming the compiled program has the (default) name a.out) could be called this way:


    ./a.out 129 125 14 80 24
        

Here, the first four arguments specify the first octets of an IP4 address. In this case it represents the address 129.125.14.80. IP addresses are assigned to computers who are usually part of a network. All computers in a network have IP-addresses that start like a specific address, but are unique after a common base. E.g., the computers in 129.125.14.80's network all start with 129.125.14, having a unique fourth octet. To specify the common part the fifth argument is used: it defines the netmask specifying the number of bits that are identical for all the computers in the network, resulting in the netmask. In the illustration the netmask is 129.125.14.0.

Assignment: write a program requiring five arguments like the ones shown in the illustration. Each of the first four arguments must have values between 0 and 255, and the fifth argument must have a value between 0 and 32 (including 0 and 32). The program may assume the arguments are correctly specified.

The program may define a single size_t ip4 variable which is, using a single initialization expession, initialized to the 32 bits of the masked address. Next it uses a single cout statement to show the masked address using the common dot-separated format. Using the above illustration it shows


    129.125.14.0
 

Hints:

    Use the stoul(argv[x]) function to convert argv[x] to an unsigned value;
    Use ~0UL to set all bits in a size_t value;
    Use brief semantic comments to describe what you're doing (e.g. use // compute octet 4 when computing the most significant octet). 

Submit your program and its output when called with arguments 129 125 3 162 and mask values of, respectively, 32, 28, 24, 20, and 16. Briefly explain why the last two outputs are equal.



