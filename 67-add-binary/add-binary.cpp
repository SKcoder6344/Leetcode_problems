class Solution {
public:
    string addBinary(string a, string b) {
        string result= "";
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;

        while(i>=0 || j>=0 || carry){
            int da;
            if(i>=0){
                da=a[i]-'0';
            } else{
                da=0;
            }

            int db;
            if(j>=0){
                db=b[j]-'0';
            } else{
                db=0;
            }

            int sum= da + db + carry;
            result = char((sum%2)+ '0')+ result;
            carry=sum/2;

            i--;
            j--;
        }
        return result;
    }

int main(){
    string a,b;
    cin>>a;
    cin>>b;

    cout<<addBinary(a,b)<<endl;
    return 0;
}
};