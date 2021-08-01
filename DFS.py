from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        
    
    def addEdge(self,u,v):
        self.graph[u].append(v)
        
    #Create a recursive node that takes in the index of the node and a visited array    
    def dfsUtl(self,v,visited):
    #Add the initial index to the visited array and print it
        visited.add(v)
        print(v,end = ' ')
    #Recurse on the neighbouring nodes if not in visited array   
        for neighbour in self.graph[v]:
            if neighbour not in visited:
                self.dfsUtl(neighbour,visited)
    
    def dfs(self,v):
        visited = set()
        self.dfsUtl(v,visited)

# Driver code
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
 
print("Following is Depth First Traversal")
g.dfs(2)
 
 
