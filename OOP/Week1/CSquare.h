
#ifndef CSQUARE_H_

#define CSQUARE_H_



class CSquare{ 
    private:
    

        int mX; // Center x
        int mY; // Center y
        int mWidth; // Width of the square
    public:

        CSquare() : mX(0), mY(0), mWidth(100){}

        int GetX() const  {
            return mX;
        }
        void SetX(int x)
        {
            mX = x;
        }
        int GetY() const {
            return mY;
        }
        void SetY(int y)
        {
            mY = y;
        }

        int GetWidth() const {
            return mWidth;
            }
        void SetWidth(int w)
        {
            mWidth = w;
        }
    
}



#endif /* CSQUARE_H_ */

