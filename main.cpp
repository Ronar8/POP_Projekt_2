//POP projekt 2 CodeBlocks 17.12 TDM-GCC 5.1.0
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void printhistogram(int t[], int n)
{
    int max_i = *max_element(t, t + n);

    for (int i = max_i; i >= 0; i--)
    {
        cout.width(2);
        cout << i << " | ";
        for (int j = 0; j < n; j++)
        {
            if (t[j] >= i)
            {
                cout << " x ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < n + 3; i++)
    {
        cout << "---";
    }
    cout << "\n";
    cout << "     ";

    for (int i = 0; i < n; i++)
    {
        cout.width(2);
        cout << right << t[i] << " ";
    }
    cout << endl;
    cout << endl;
}

void histogram_przyklad(double t[], int n)
{
    for (double i = 16; i >= 0; i--)
    {
        cout.width(3);
        cout << i/2 << " | ";
        for (int j = 0; j < n; j++)
        {
            if (t[j] >= i/2)
            {
                cout << " x ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < n + 3; i++)
    {
        cout << "---";
    }
    cout << "\n";
    cout << "     ";

    for (int i = 0; i < n; i++)
    {
        cout.width(2);
        cout << t[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

int indeks(int v[])
{
    int indeks;
    int maksimum = v[0];
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > maksimum)
        {
            maksimum = v[i];
            indeks = i;
        }
    }
    cout << "Indeks najwiekszej liczby: " << indeks << endl;
    return indeks;
}

void ile_liter(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z)
{
    cout << "a wystapilo " << a << " razy" << endl;
    cout << "b wystapilo " << b << " razy" << endl;
    cout << "c wystapilo " << c << " razy" << endl;
    cout << "d wystapilo " << d << " razy" << endl;
    cout << "e wystapilo " << e << " razy" << endl;
    cout << "f wystapilo " << f << " razy" << endl;
    cout << "g wystapilo " << g << " razy" << endl;
    cout << "h wystapilo " << h << " razy" << endl;
    cout << "i wystapilo " << i << " razy" << endl;
    cout << "j wystapilo " << j << " razy" << endl;
    cout << "k wystapilo " << k << " razy" << endl;
    cout << "l wystapilo " << l << " razy" << endl;
    cout << "m wystapilo " << m << " razy" << endl;
    cout << "n wystapilo " << n << " razy" << endl;
    cout << "o wystapilo " << o << " razy" << endl;
    cout << "p wystapilo " << p << " razy" << endl;
    cout << "q wystapilo " << q << " razy" << endl;
    cout << "r wystapilo " << r << " razy" << endl;
    cout << "s wystapilo " << s << " razy" << endl;
    cout << "t wystapilo " << t << " razy" << endl;
    cout << "u wystapilo " << u << " razy" << endl;
    cout << "v wystapilo " << v << " razy" << endl;
    cout << "w wystapilo " << w << " razy" << endl;
    cout << "x wystapilo " << x << " razy" << endl;
    cout << "y wystapilo " << y << " razy" << endl;
    cout << "z wystapilo " << z << " razy" << endl;
}

void tablica_podstawien(int k)
{
    char alfabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout << "Tablica podstawien: ";
    for (int i = 0; i < 26; i++)
    {
        cout << alfabet[i] << "->" << (char) ((((alfabet[i] - 'a') + k) %26) + 'a') << " ";
    }
    cout << endl;

}

string dekodowanie(int length, int k, string word)
{
    string result = "";
    for (int i = 0; i < length; i++)
    {
        if (islower(word[i]))
        {
            result += (char) ((((word[i] - 'a') + k) %26) + 'a');
        }
        else if (isupper(word[i]))
        {
            result += (char) ((((word[i] - 'A') + k) %26) + 'A');
        }
        else
        {
            result += word[i];
        }
    }
    return result;
}

int main()
{
    string input;

    cout << "Podaj sciezke: ";
    getline(cin, input);

    cout << endl;

    fstream plik(input.c_str());
    if (!plik)
    {
        cout << "Plik nie zostal otwarty" << endl;
    }

    string word;

    if (plik.is_open())
    {
        int a_count = 0, b_count = 0, c_count = 0, d_count = 0, e_count = 0, f_count = 0, g_count = 0, h_count = 0, i_count = 0, j_count = 0, k_count = 0, l_count = 0, m_count = 0, n_count = 0, o_count = 0, p_count = 0, q_count = 0, r_count = 0, s_count = 0, t_count = 0, u_count = 0, v_count = 0, w_count = 0, x_count = 0, y_count = 0, z_count = 0;
        while (getline(plik, word))
        {
            //odczytanie zaszyfrowanego tekstu i policzenie ile jest liter
            cout << "Zaszyfrowany tekst: " << word << '\n';
            cout << endl;
            int length = word.length();
            for (int i = 0; i < length; i++)
            {
                switch (word[i])
                {
                case 'a':
                    a_count++;
                    break;
                case 'b':
                    b_count++;
                    break;
                case 'c':
                    c_count++;
                    break;
                case 'd':
                    d_count++;
                    break;
                case 'e':
                    e_count++;
                    break;
                case 'f':
                    f_count++;
                    break;
                case 'g':
                    g_count++;
                    break;
                case 'h':
                    h_count++;
                    break;
                case 'i':
                    i_count++;
                    break;
                case 'j':
                    j_count++;
                    break;
                case 'k':
                    k_count++;
                    break;
                case 'l':
                    l_count++;
                    break;
                case 'm':
                    m_count++;
                    break;
                case 'n':
                    n_count++;
                    break;
                case 'o':
                    o_count++;
                    break;
                case 'p':
                    p_count++;
                    break;
                case 'q':
                    p_count++;
                    break;
                case 'r':
                    r_count++;
                    break;
                case 's':
                    s_count++;
                    break;
                case 't':
                    t_count++;
                    break;
                case 'u':
                    u_count++;
                    break;
                case 'v':
                    p_count++;
                    break;
                case 'w':
                    w_count++;
                    break;
                case 'x':
                    x_count++;
                    break;
                case 'y':
                    y_count++;
                    break;
                case 'z':
                    z_count++;
                    break;
                }
            }
        }



        //Rysowanie histogramu dla czestosci wystepowania liter w jezyku polskim

        double stats[26] = {8.91, 1.47, 3.96, 3.25, 7.66, 0.30, 1.42, 1.08, 8.21, 2.28, 3.51, 2.10, 2.80, 5.52, 7.75, 3.13, 0.14, 4.69, 4.32, 3.98, 2.50, 0.04, 4.65, 0.02, 3.76, 5.64};
        int m = sizeof(stats) / sizeof(stats[0]);
        histogram_przyklad(stats, m);

        //Rysowanie histogramu dla czestosci wystepowania liter w zaszyfrowanym tekscie

        int v[26] = {a_count, b_count, c_count, d_count, e_count, f_count, g_count, h_count, i_count, j_count, k_count, l_count, m_count, n_count, o_count, p_count, q_count, r_count, s_count, t_count, u_count, v_count, w_count, x_count, y_count, z_count};
        int n = sizeof(v) / sizeof(v[0]);
        printhistogram(v, n);

        //okreslenie klucza podstawien
        int k = 0;
        k = 26 - indeks(v);

        //wypisanie czestosci wystepowania liter w zaszyfrowanym tekscie
        ile_liter(a_count, b_count, c_count, d_count, e_count, f_count, g_count, h_count, i_count, j_count, k_count, l_count, m_count, n_count, o_count, p_count, q_count, r_count, s_count, t_count, u_count, v_count, w_count, x_count, y_count, z_count);

        int wielkosc_tekstu = word.size();
        bool warunek = true;
        while(warunek)
        {
            //zaprezentowanie tablicy podstawien
            tablica_podstawien(k);

            //dekodowanie tekstu
            dekodowanie(wielkosc_tekstu, k, word);
            cout << "Odszyfrowany tekst: " << dekodowanie(wielkosc_tekstu, k, word) << endl;

            //zatwierdzenie tablicy podstawien
            char odp;
            char odp_1;
            int korekta;
            cout << "Czy tekst zostal poprawnie odszyfrowany? Wpisz 'y' jesli tak, 'n' jesli nie." << endl;
            cin >> odp;
            if (odp == 'y')
            {
                ofstream dekodowany("wynik.txt");
                dekodowany << dekodowanie(wielkosc_tekstu, k, word);
                dekodowany.close();
                cout << "Odszyfrowany tekst zostal zapisany do pliku o nazwie 'wynik.txt'" << endl;
                warunek = false;
                break;
            }
            else
            {
                cout << "Chcesz recznie wprowadzic korekte do tablicy podstawien czy pozostawic to programowi? Wpisz kolejno 1 lub 2." << endl;
                cin >> odp_1;
            }

            //funkcja recznego podstawienia
            if (odp_1 == '1')
            {
                cout << "Podaj wartosc korekty (o ile chcesz przesunac podstawienia): ";
                cin >> korekta;
                cout << endl;
                k += korekta;
                dekodowanie(wielkosc_tekstu, k, word).clear();
                cout << "Korekta zostala wprowadzona" << endl;
            }
            else
            {
                k += 1;
                dekodowanie(wielkosc_tekstu, k, word).clear();
            }
        }
    plik.close();
    }

    return 0;
}
