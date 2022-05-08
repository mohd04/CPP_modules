#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
private:
	unsigned int	_size;
	T*				_array;

public:
	Array<T>() : _size(0), _array(new T[0]) {};
	Array<T>(const Array& cp) : _size(0) {*this = cp};
	~Array<T>() {delete[] this->_array};

	Array<T>& opereator=(const Array& cp){
		if (this != cp) {
			delete[] this;
			this->_size = cp._size;
			this->_array = new T[this->_array];
			for (unsigned int = 0; i < this->_size; i++)
				this->_array[i] = cp._array[i];
		}
		return (*this);
	}
	T& operator[](long long index) const {
		if (index >= this->_size || index < 0)
			throw (std::out_of_range("Index Out of Range\n"));
		return (this->_array[index]);
	}
	unsigned int	size(void) const {
		return (this->_size);
	}
};

#endif
