/*static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
            return 0;
            }();*/
            class Solution {
            public:
                bool isPalindrome(int x) {
                        if(x<0){
                                    return false ;
                                            }
                                                    int dig,temp;
                                                            long long rev=0;
                                                                    temp=x;
                                                                            for(int i=0;temp!=0;i++){
                                                                                        dig=temp%10;
                                                                                                    rev=rev*10+dig;
                                                                                                                temp=temp/10;
                                                                                                                        }
                                                                                                                                if(x==rev){
                                                                                                                                            return true;
                                                                                                                                                    }
                                                                                                                                                            return false;
                                                                                                                                                                }
                                                                                                                                                                };