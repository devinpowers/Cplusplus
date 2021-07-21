#inlcude <iostream>

using std::cout; using std::endl;


class CDrawable
{
    private:
        int mX;
        int mY;
    public:
        CDrawable();
        virtual ~CDrawable();

        virtual void Draw(DC &dc, int x, int y) = 0;

        int GetX() const {return mX};
        int GetY() const {return mY};

        void SetLocation(int x, int y)
        {
            mX = ;
            mY = y;
        }
};

/**
**
*
*/