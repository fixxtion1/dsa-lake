# Strings


#### Given two strings check if they are anagrams of each other.

I/P: s1 = "geeks" , s2 = "ekegs"
O/P: Yes

Solution:

```
bool anagram(string a, string b){
	if(a.length()!=b.length()) 
		return false;
	
	int count[256] = {0};
	
	for(int i=0; i<a.length(); i++)
		count[a[i]-'a']++;
	for(int i=0; i<b.length(); i++)
		count[b[i]-'a']--;

	for(int i=0; i<256; i++)
		if(count[i]!=0) return false;
	
	return true;
}
```

#### Given a string, find the lefmost character that repeats

I/P : str= "geeksforgeeks"
O/P : 0

Method 1: We can use the previous method but it will require two traversals.

Method 2:

Idea is to store the leftmost index of every character and if it is repeating we check there exist any smaller one or not

```
int firstRepeating(string a){
	vector<int> count(256, -1);
	int res = INT_MAX;

	for(int i=0; i<a.length(); i++){
		if(count[a[i]-'a']==-1) 
			count[a[i]-'a'] = i;
		else
			res = min(res, count[a[i]-'a']);
	}
	return res;
	
}
```

#### Given a string, find the leftmost character that doesn't repeat.

I/P: str = "geekforgeek"
O/P: 3

Solution:
```
int firstNonRepeat(string a){
	int res = INT_MAX;
	vector<int> count(256, -1);

	for(int i=0; i<a.length(); i++){
		if(count[a[i]-'a'] ==-1) count[a[i]-'a'] = i;
		else count[a[i]-'a'] = -2;
	}

	for(int i=0; i<256; i++){
		if(count[i]>=0) res = min(res, count[i]);
	}

	return res;

}
```

#### Panagram Problem

I/P: txt= "geeksforgeeks" and pattern = "egek"
O/P: YES 


g e e k s f o r g e e k s 





