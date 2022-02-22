template<typename T>
class Vector{
	T* arr;
	int cs; // current size
	int ms; // max size
public:
	Vector(int max_size=1){
		ms = max_size;
		cs = 0;
		arr = new T[ms];

	}

	//to add element in the last of the vector
	void push_back(const T d){
		if(ms == cs){
			T* oldarr = arr;
			ms = 2*ms;
			arr = new T[ms];
			for(int i=0; i<cs; i++) arr[i] = oldarr[i];
			delete [] oldarr;

		}
		arr[cs] = d;
		cs++;
	}
	//to remove elemmnt form the last of the vector
	void pop_back(){
		if(cs >= 0) cs--;
	}

	bool is_empty() const{
		return cs==0;
	}

	int front() const {
		return arr[0];
	}

	int back() const{
		return arr[cs-1];
	}

	T at(int i) const{
		return arr[i];
	}

	//returns the total size(elemnts it currently do have) 
	int size() const{
		return cs;
	}

	//returns the total capacity of the vector
	int capacity() const{
		return ms;
	}
	
	//Overloaded the operator [] to get value at that index
	T operator[](int i) const{
		return arr[i];
	}


};

