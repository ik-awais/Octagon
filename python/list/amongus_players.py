''' 
You need to start this game by making a list named as "players" consisting of minimum 5 players initially. 
Each player is represented as a color e,g blue, green, red, cyan
'''
players = ["blue","cyan","red","lime","yellow"]

def display():
    '''
    Use at least 5 list methods/operations 
    Recommended: # append(), insert(), remove(), pop(), count()
    '''
    
    # 1.append () ---> add a player to end
    players.append("purple")
    print("\nAfter appending: purple\n",players)
    
    # 2. insert(id, val) ---> add a player at a specofic index
    players.insert(4,"orange")
    print("\nAfter inserting: orange\n",players)

    # 3 remove(val) ---> remove a specific player by value
    players.remove("cyan")
    print("\nAfter removing: cyan\n",players)

    # 4 sort() ----> sort the list alphabetically in ascending order
    players.sort()
    print("\nAfter sorting:\n",players)

    # 5 count(val) ---> counts the presence of a specific value
    reds = players.count("red")
    print("\nCount of reds:\n",reds)

    # 6 - other methods 
    players.pop(3);
    print("\nAfter popping: 3 index\n",players)

# don't touch the code below

print("=======================================================================")
print("                       AMONG US PLAYERS MANAGER                        ")
print("=======================================================================")

print("\nInitial Players:")
print(players)

display()

print("\n=====================================================================")
print("                          Program completed!                           ")
print("=======================================================================")