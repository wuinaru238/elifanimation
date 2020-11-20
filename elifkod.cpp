#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int renkgonder;

void echo(string print)
{

    cout << print << endl;

}

void renkDegis(int renk){

    if(renk == 1){

        printf("\033[0;32m");

    }
    else if(renk == 2){

        printf("\033[0;31m");

    }

    else if(renk == 3){

        printf("\033[1;31m");

    }

    else if(renk == 4){

        printf("\033[0;33m");

    }
    else if(renk == 5){

        printf("\033[0;34m");

    }
    else if(renk == 6){

        printf("\033[0;35m");

    }
    else if(renk == 7){

        printf("\033[0;36m");

    }
    else if(renk == 8){

        printf("\033[1;33m");

    }
    

}

void elifde(){

    echo ("                                                                              ");
    echo ("                                                                              ");
    echo ("EEEEEEEEEEEEEEEEEEEEEELLLLLLLLLLL             IIIIIIIIIIFFFFFFFFFFFFFFFFFFFFFF");
    echo ("E::::::::::::::::::::EL:::::::::L             I::::::::IF::::::::::::::::::::F");
    echo ("E::::::::::::::::::::EL:::::::::L             I::::::::IF::::::::::::::::::::F");
    echo ("EE::::::EEEEEEEEE::::ELL:::::::LL             II::::::IIFF::::::FFFFFFFFF::::F");
    echo ("  E:::::E       EEEEEE  L:::::L                 I::::I    F:::::F       FFFFFF");
    echo ("  E:::::E               L:::::L                 I::::I    F:::::F             ");
    echo ("  E::::::EEEEEEEEEE     L:::::L                 I::::I    F::::::FFFFFFFFFF   ");
    echo ("  E:::::::::::::::E     L:::::L                 I::::I    F:::::::::::::::F   ");
    echo ("  E:::::::::::::::E     L:::::L                 I::::I    F:::::::::::::::F   ");
    echo ("  E::::::EEEEEEEEEE     L:::::L                 I::::I    F::::::FFFFFFFFFF   ");
    echo ("  E:::::E               L:::::L                 I::::I    F:::::F             ");
    echo ("  E:::::E       EEEEEE  L:::::L         LLLLLL  I::::I    F:::::F             ");
    echo ("EE::::::EEEEEEEE:::::ELL:::::::LLLLLLLLL:::::LII::::::IIFF:::::::FF           ");
    echo ("E::::::::::::::::::::EL::::::::::::::::::::::LI::::::::IF::::::::FF           ");
    echo ("E::::::::::::::::::::EL::::::::::::::::::::::LI::::::::IF::::::::FF           ");
    echo ("EEEEEEEEEEEEEEEEEEEEEELLLLLLLLLLLLLLLLLLLLLLLLIIIIIIIIIIFFFFFFFFFFF           ");
    echo ("                                                                              ");
    echo ("                                                                              ");
    
}

int main()
{

    system("clear");

    while (true)
    {

        for(renkgonder = 1;renkgonder < 9 ; renkgonder++){

            renkDegis(renkgonder);

             elifde();

            this_thread::sleep_for(chrono::seconds(1));

            system("clear");

        }

    }

}
