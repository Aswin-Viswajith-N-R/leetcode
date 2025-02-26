class Solution:
    def isValid(self, s: str) -> bool:
        while(True):
            if(s.__contains__("()")):
                s = s.replace("()","")
            elif(s.__contains__("{}")):
                s = s.replace("{}","")
            elif(s.__contains__("[]")):
                s = s.replace("[]","")
            else:
                return len(s) == 0