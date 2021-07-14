#include <iostream>

using namespace std;

int main()
{
    long long w_width(0), h_height(0), a_awidth(0), b_bheight(0);
    long m_money(0), c_cost(0);
    int c_cut(0);
    long t_tiles(0);
    long tw_tiles(0), th_tiles(0);

    cin >> w_width >> h_height >> a_awidth >> b_bheight >> m_money >> c_cut;

    if (w_width <= a_awidth && h_height <= b_bheight)
    {
        c_cut = (w_width +  h_height) * c_cut;
        c_cost = c_cut + m_money;

        cout << c_cost << endl;
    }
  
    if (w_width > a_awidth && h_height <= b_bheight)
    {
        t_tiles = w_width / a_awidth + 1;
        if (h_height == b_bheight)
        {
            c_cut = h_height  * c_cut;
        }
        else 
        {
            c_cut = (h_height + w_width) * c_cut;
        }
        

        c_cost = c_cut + ((t_tiles / 10) + 1) * m_money;

        cout << c_cost << endl;
    }
    if (w_width <= a_awidth && h_height > b_bheight)
    {
        if (w_width == a_awidth)
        {
            c_cut = w_width * c_cut;
        }
        else
        {
            c_cut = (h_height + w_width) * c_cut;
        }
        c_cost = c_cut + ((t_tiles / 10) + 1) * m_money;

        cout << c_cost << endl;
    }
        
    if (w_width > a_awidth && h_height > b_bheight)
    {
        
            tw_tiles = w_width / a_awidth + 1;
            th_tiles = h_height / b_bheight + 1;
            t_tiles = tw_tiles * th_tiles;
            c_cut = (h_height + w_width) * c_cut;
            c_cost = c_cut + ((t_tiles / 10) + 1) * m_money;

            cout << c_cost << endl;
     }

    
     
    return 0;
}

