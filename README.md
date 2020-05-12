# DSA<br>
# 1. Backtracking--
<br>An algorithmic technique to solve a problem using recursion one piece at a time.<br>

#3 key elements of Bactracking are:<br>
1.Choice<br>2.constraints<br>3.goal<br>

# General structure of Bactracking is:-<br>

int solve(graph/board)<br>{
# Base case<br>

#choice-----------------------placing it in board/graph<br>

# issafe()--------------------constraints

if yes than put it in position and recurr for next position<br>

now for next if solve return true than continue<br>
otherwise do backtrack and change the prev position <br>


int main(){<br>
graph/board<br>

if(solve(board/graph)){<br>
print(sol)<br>
# Goal<br>
}
else<br>{
print(no sol)<br>}
<br>}



