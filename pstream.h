#ifndef P_STREAM_H
#define P_STREAM_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>



namespace pst
{

    //stream status
    const int  GOOD = 0x0000;
    const int  FAIL = 0x0001;

    //margins ninimum values
    const int MARGINMIN = 3; //millimetres



    template <typename T> class pstreamManip;

    /*!
    \brief class pstream
    */
    class pstream
    {

    public:
        pstream();
        pstream(std::string whichPrinter);
        ~pstream();

        operator bool()
        {
            return !streamStatus;
        }


        void setTitle(std::string newTitle) { title = newTitle; }
        void setPageNumbers(bool bVal)      { pageNumbers = bVal;}
        void setTabSize(int newTabSize)     { tabSize = newTabSize;}

        /*!
        The following are member functions NOT manipulators
        */
        void setLeftMargin(int newMargin)   {leftMargin = newMargin <= MARGINMIN? MARGINMIN:newMargin; }
        void setTopMargin(int newMargin)    {topMargin = newMargin <= MARGINMIN? MARGINMIN:newMargin; };
        void setRightMargin(int newMargin)   {rightMargin = newMargin <= MARGINMIN? MARGINMIN:newMargin; };
        void setBottomMargin(int newMargin)   {bottomMargin = newMargin <= MARGINMIN? MARGINMIN:newMargin; };



        //Insertion Overloads
        //Add a string
        pstream& operator << (std::string name);
        //Add a char buffer
        pstream& operator << (char* name);
        //Add a file
        pstream& operator << (std::ifstream & inFile);

        //other insertion overlaods
        pstream& operator << (pstream & (*ptr)(pstream&)); //manipulator with no parameters
        /*!
        \brief Insertion overload for with manipulators with one parameter
        Note this is a template function so we put the definition here - much easier
        */
        template <typename T>
        pstream& operator << (pstreamManip<T> manip)
        {
            return manip(*this);
        }

        /*!
        \brief Useful static functions
        */
        static std::vector<std::string> getPrinterNames();


    private:
        std::string defaultPrinter;
        int streamStatus;
        std::vector<std::string> lines;
        int leftMargin;
        int rightMargin;
        int topMargin;
        int bottomMargin;
        std::string title;
        bool pageNumbers;
        int tabSize;


        //Copy Constructor - private and no body
        pstream(const pstream& other);


        /*!
        \brief manipulators
        These are mostly friends of pstream.
        They are in the pst namespace
        */

        /*!
        \brief Manipulators taking no arguments
        */
        friend pstream& flushp (pstream& p);
        /*!
        \brief manipulators taking one or more arguments
        These are structure based
        */

        template <typename T>
        friend pstreamManip<T> setLeftMargin (T margin);

        template <typename T>
        friend pstreamManip<T> setRightMargin (T margin);

        template <typename T>
        friend pstreamManip<T> setTopMargin (T margin);

        template <typename T>
        friend pstreamManip<T> setBottomMargin (T margin);

        /*!
        \brief private  functions for the manipulator(s) with arguments.
        \note These are static.
        */
        static pstream& _setMarginL(pstream & p, int n);
        static pstream& _setMarginR(pstream & p, int n);
        static pstream& _setMarginT(pstream & p, int n);
        static pstream& _setMarginB(pstream & p, int n);

    };//class pstream


    /*!
    \brief The manipulator class for manipulator with one parameter
    */
    template <typename T>
    class pstreamManip
    {
    public:
        pstreamManip(pstream& (*fp)(pstream&, T val), T arg) : pf(fp), argValue(arg){};
        pstream& operator() (pstream & ps)
        {
            return (*pf)(ps, argValue);
        }

    private:
        pstream& (*pf)(pstream&, T);
        T argValue;

    }; //class pstream

    /*!
    \brief All manipulators are in the pst namespace
    */
    pstream& flushp (pstream& p);


    template <typename T>
    pstreamManip<T> setLeftMargin (T margin)
    {
        return pstreamManip<T>(pstream::_setMarginL, margin);
    }

    template <typename T>
    pstreamManip<T> setRightMargin (T margin)
    {
        return pstreamManip<T>(pstream::_setMarginR, margin);
    }

    template <typename T>
    pstreamManip<T> setTopMargin (T margin)
    {
        return pstreamManip<T>(pstream::_setMarginT, margin);
    }

    template <typename T>
    pstreamManip<T> setBottomMargin (T margin)
    {
        return pstreamManip<T>(pstream::_setMarginB, margin);
    }


} //namespace pst




#endif
