class Vector{
	int* arr;
	int cs; // current size
	int ms; // max size
public:
	Vector(int max_size=1){
		ms = max_size;
		cs = 0;
		arr = new int[ms];

	}

	//to add element in the last of the vector
	void push_back(const int d){
		if(ms == cs){
			int* oldarr = arr;
			ms = 2*ms;
			arr = new int[ms];
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

	int at(int i) const{
		return arr[i];
	}

	int size() const{
		return cs;
	}
	int capacity() const{
		return ms;
	}

	int operator[](int i) const{
		return arr[i];
	}


};

