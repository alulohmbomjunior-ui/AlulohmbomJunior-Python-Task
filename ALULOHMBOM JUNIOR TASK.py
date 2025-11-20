# 3-4 to 3-7 combined using Cameroonian famous names

# 3-4: start with at least three guests
guests = ["JAMES BOND", "JOHN WICK", "PARKER BURTON"]

# invite everyone
for person in guests:
    print("Hi " + person + ", I'd like to invite you to dinner.")

print()

# 3-5: one guest can't make it
print(guests[1] + " can't make it to the dinner.")

# replace that guest with someone else from Cameroon
guests[1] = "ALULOHMBOM JUNIOR"

# send new invitations
for person in guests:
    print("Hi " + person + ", you're still invited to dinner.")

print()

# 3-6: bigger table found
print("Good news — I found a bigger dinner table!")

# add more well-known Cameroonian people
guests.insert(0, "Brenda Biya")               # beginning
guests.insert(len(guests)//2, "Fally Ipupa")  # middle (not Cameroonian but big in Central Africa)
guests.append("Blanche Bailly")               # end

# print invites again
for person in guests:
    print("Hi " + person + ", please come to dinner.")

print()

# 3-7: only two guests allowed
print("Bad news — the table won't arrive in time. I can only invite two people.")

while len(guests) > 2:
    removed = guests.pop()
    print("Sorry " + removed + ", I can't invite you anymore.")

print()

# the final two
for person in guests:
    print("Hi " + person + ", you're still invited.")

# clear the list
del guests[0]
del guests[0]

print()
print(guests)  # should show []