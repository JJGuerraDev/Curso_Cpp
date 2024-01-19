#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Amazon{
    vector<string> filas;
    //vector<vector<char>> Imagen;
}imag_1;

int llenar();
int Mostrar();


int main(void){ 

    cout<<llenar()<<endl;

 return 0;
}

int llenar(){

    for(int loops = 0; loops < 6; loops++){
        imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    }

    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKxxKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWkllkWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd::dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKo::oKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWOc::cOWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKx::::xKKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXXWWKdk0o::::o0kdKWWXXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0okX0llOOc::::cOOlo0Xko0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMNklcdxl:o0x::::::x0o:lxd:lONMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMWKkONMMMMMMMMMMMMNXNXxc::cc::x0ocdkkdco0x::cc::cxXNXNMMMMMMMMMMMMNOkKWMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMN0dc:l0WMMMMMMMMMMXxdko::::::cd0kdONWMN0dk0dc::::::okdkNMMMMMMMMMMW0l:cd0WMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMWNKxc::::lxKNMMMMMMMXxc:c::cloxkOOdlOWMMMMWOodkOkxocc::cccxXWMMMMMWNKxl::::cxKNWMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMWXkol::::::::cokOKXNWN0xxxxkkkOkkdlc:dXMMMMMMXd:cldkkkkkkxxxx0NWNXKOkoc::::::::loxXWMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMXd:::::::::::::::clooddddddoolc:::::l0WMMMMMMW0l:::::clooddddddoolc:::::::::::::::dKMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMW0l::::c::::::::::::::::::::::::::::cONMMMMMMMMWOl::::::::::::::::::::::::::::c::::l0WMMMMMMM");
    imag_1.filas.push_back("MMMMMMWKd:::cx0xc:::::::::::::::::::::::::ckNMMMWNNWMMMNkc:::::::::::::::::::::::::cx0xc:::dKWMMMMMM");
    imag_1.filas.push_back("MMMMMMXd:::cxNWN0dc:::::coxkdc::::::::::::dXMMMMXOkKMMMMXd::::::::::::cdkxoc:::::cd0NMNx::::dXWMMMMM");
    imag_1.filas.push_back("MMMMMXxc::::oONWMN0xocoOKNWMWKkdc:::::::::xXWMMWOllOWMMMNx:::::::::cdkKWMWNKOdcox0NMMNOo:::::xXMMMMM");
    imag_1.filas.push_back("MMMNKxc::::::coOXWMWNXNMMMMMMMMNKkoc::::::cok0XKd::d0X0Odc::::::cokKNMMMMMMMMNXNWMWXOoc::::::cxKNMMM");
    imag_1.filas.push_back("MMNkc:::::::::::lx0XWMMMMMMMMMMMMMNKkoc:::::::ccc:::ccc::::::cokKNMMMMMMMMMMMMMWX0xl:::::::::::ckNMM");
    imag_1.filas.push_back("MMXx::::cdxoc::::::lkNMMMMMMMMMMMMMMWN0xlc::::::::::::::::clx0NWMMMMMMMMMMMMMMNklc::::cloxdc::::xXMM");
    imag_1.filas.push_back("MMWOc:::dXWNX0OxddookNMMMMMMMMMMMMMMMMMWXd::::::::::::::::dXWMMMMMMMMMMMMMMMMMNkooddxO0XNWXd:::ckWMM");
    imag_1.filas.push_back("MMXd::::ok0XNWWMWWNNWWMMMMMMMMMMMMMMMMMMWkc::::::::::::::ckWMMMMMMMMMMMMMMMMMMMWNNWWWMWNXKko::::dXMM");
    imag_1.filas.push_back("MW0l::::::clodkO00KKXXWMMMMMMMMMMMMMMMMMWOl::::::::::::::cOWMMMMMMMMMMMMMMMMMWXXKK0OOkdolc::::::l0WM");
    imag_1.filas.push_back("WXxc::::::::::::::cclo0WMMMMMMMMMMMMMMMMMKo::::::::::::::lKMMMMMMMMMMMMMMMMMW0olcc::::::::::::::cxXW");
    imag_1.filas.push_back("Xxc:::cdxxxxxxxxxkkO0KNWWWMMMMMMMMMMMMMMMXd::::::::::::::oXMMMMMMMMMMMMMMMWWWNK0Okkxxxxxxxxxdc:::cxX");
    imag_1.filas.push_back("Xo::::dXWMWWWWWWWWNNX0OxdkXWMMMMMMMMMMMMMNx::::::::::::::xNMMMMMMMMMMMMMWXkxxO0XNNWWWWWWWMWWXd::::oX");
    imag_1.filas.push_back("WOl:::lkOOOOOkkxxdoollcclldOXWMMMMMMMMMMMWkc::::::::::::ckWMMMMMMMMMMMWXOdlllclloodxxkkOOOOOkl:::lOW");
    imag_1.filas.push_back("MKo::::ccloddxkkOO00KKXXXNNNNWMMMMMMMMMMMNxc::::::::::::cxNMMMMMMMMMMMWNNNNXXXKK00OOkkxddolcc::::lKM");
    imag_1.filas.push_back("MKdoxkO0XXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMXxc::oxoc::coxdc:cxXMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXX0OkxodKM");
    imag_1.filas.push_back("MWXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKdc::oKNOookNKo::cdKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXWM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0dc:o0OddO0o:cd0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOoccllllccoONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNOo::::oONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOddOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    
    for(int loops = 0; loops < 6; loops++){
        imag_1.filas.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
    }

    Mostrar();

    return 1;

}

int Mostrar(){

    for (int i = 0; i < imag_1.filas.size(); i++){
        cout<<"["<<imag_1.filas[i]<<"]"<<endl;
    }
    return 2;
}