''' 
You need to start this game by making a list named as "players" consisting of minimum 5 players initially. 
Each player is represented as a color e,g blue, green, red, cyan
'''
players = ["blue","cyan","red","lime","yellow"]

def display():
    global players
    '''
    Use at least 5 list methods/operations 
    Recommended: # append(), insert(), remove(), pop(), count()
    '''
    
    # 1.append () ---> add a player to end
    players.append("purple")
    print("\nAfter appending: purple\n",players)
    players.append("violet-blue")
    print(f"\nAfter appending violet-blue\n {players}")
    players.append("green")
    print(f"\nAfter appending green\n{players}")

    # 2. insert(id, val) ---> add a player at a specific index
    players.insert(4,"orange")
    print("\nAfter inserting orange at index 4\n",players)
    players.insert(0, "violet-blue")
    print(f"\nAfter inserting violet-blue at index 0\n {players}")
    players.insert(4, "pink")
    print(f"\nAfter inserting pink at index 4\n {players}")

    # 3 remove(val) ---> remove a specific player by value
    players.remove("cyan")
    print("\nAfter removing: cyan\n",players)
    players.remove("violet-blue")
    print(f"\nAfter removing violet-blue\n {players}")
    players.remove("blue")
    print(f"\nAfter removing blue\n {players}")

    # 4 sort() ----> sort the list alphabetically in ascending order
    players.sort()
    print("\nAfter sorting alphabetically:\n",players)

    # 5 count(val) ---> counts the presence of a specific value
    reds = players.count("red")
    print("\nCount of red: ",reds)
    violetBlue = players.count("violet-blue")
    print(f"\nCount of violet-blue: {violetBlue}") 
    yellows = players.count("yellow")
    print(f"\nCount of yellow: {yellows}")

    # 6 - other methods 
    # pop(index) --> Remove an element at a particular index
    players.pop(3);
    print("\nAfter popping: 3 index\n",players)
    players.pop(0)
    print(f"\nAfter popping index 0:\n {players}")
    players.pop(1)
    print(f"\nAfter popping index 1:\n {players}")


    # reverse() --> Reverse the elements without creating another list
    players.reverse()
    print(f"\nAfter reversing the list:\n {players}")
    
    # Just an experiment for all code-readers to show power of python
    ''' 
    Y'all might have noticed the using remove() method only removed
    'violet-blue' that happened to be on index 0. But it didn't remove 
    the element with same value which I had appeneded earlier. 
    So we met a limitation of this method. 
    Now I'll show how we can remove all the elements with same value from
    a list
    '''
    players.insert(0, "violet-blue")
    print(f"\nBefore removing all 'violet-blue' from the list:\n {players}")
    to_remove = "violet-blue"
    new_players = [x for x in players if x!= to_remove]
    players = new_players.copy()
    # There's another way to do this job without making another list, but that's little
    # advance and I don't have a deeper understanding of it, so ain't using right now
    # For this experiment to work, I made our list global in line 8. 
    print(f"\nAfter removing all 'violet-blue' from the list:\n {players}")

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