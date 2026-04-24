class Solution(object):
    def furthestDistanceFromOrigin(self, moves):
        """
        :type moves: str
        :rtype: int
        """
        return abs(moves.count('L') - moves.count('R')) + moves.count('_')
        
