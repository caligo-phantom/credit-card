# Credit Card
This code checks for whether a entered Credit Card Number belongs to American Express (15-digit & starting with 34/37), MasterCard (16-digit & starting with 51/52/53/54/55) or a VISA (13-/16-digit & starting with 4). This code also employs the Luhn's Algorithm to check the validity of the card.

# Luhn’s Algorithm
Most cards use this algorithm invented by Hans Peter Luhn of IBM.

The check digit is computed as follows:

1. Take the original number and starting from the rightmost digit moving left, double the value of every second digit (including the rightmost digit).
2. Replace the resulting value at each position with the sum of the digits of this position's value.
3. Sum up the resulting values from all positions
4. The calculated check digit is equal to (10 - (sum modulo 10)) modulo 10

That’s kind of confusing, so let’s try an example with Random Visa no.: 4003600000000014.

For the sake of discussion, let’s first underline every other digit, starting with the number’s second-to-last digit:

4 0 6 0 0 0 0 1

Okay, let’s multiply each of the underlined digits by 2:

1•2 + 0•2 + 0•2 + 0•2 + 0•2 + 6•2 + 0•2 + 4•2

That gives us:

2 + 0 + 0 + 0 + 0 + 12 + 0 + 8

Now let’s add those products’ digits (i.e., not the products themselves) together:

2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13

Now let’s add that sum (13) to the sum of the digits that weren’t multiplied by 2 (starting from the end):

13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20

Yup, the last digit in that sum (20) is a 0, so Random Visa no. is legit!

# Application

![01](https://user-images.githubusercontent.com/90185630/133023962-7fbdbc9b-af2f-4fb6-bd36-bf93ec07ed60.png)

![02](https://user-images.githubusercontent.com/90185630/132991045-9ffaccaa-568a-4ad1-ab2b-b9e0a6ab4c3d.png)

![03](https://user-images.githubusercontent.com/90185630/132991051-0f1b1410-f858-4c0e-8c52-e9c1493ef8cb.png)

![04](https://user-images.githubusercontent.com/90185630/132991056-fd36c1c6-e5d1-4651-8a6f-475d9f7da3d1.png)

![05](https://user-images.githubusercontent.com/90185630/132991064-3307c4d0-9425-48ee-9fe2-bb94144c0f7b.png)
