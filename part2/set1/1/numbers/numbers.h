#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_


class Numbers
{
    public:
        Numbers();
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);
        void swap(Numbers &other);

    private:
};
        
#endif
