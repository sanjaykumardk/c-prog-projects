#include <stdio.h>

// Structure to store information about each element
struct Element
{
    char name[50];
    char symbol[3];
    int atomicNumber;
    char electronicConfiguration[20];
    char discoveredBy[50];
    int charge;
};

int main()
{
    int n, m, a, xit;

    // Array of structures to store information about each element
    struct Element elements[118] = {
        // ... (data for all 118 elements)
        {"Hydrogen", "H", 1, "1s^1", "Henry Cavendish", 1},
        {"Helium", "He", 2, "1s^2", "Pierre Janssen", 0},
        {"Lithium", "Li", 3, "[He] 2s^1", "Johan August Arfwedson", 1},
        {"Beryllium", "Be", 4, "[He] 2s^2", "Louis Nicolas Vauquelin", 2},
        {"Boron", "B", 5, "[He] 2s^2 2p^1", "Sir Humphry Davy", 3},
        {"Carbon", "C", 6, "[He] 2s^2 2p^2", "Ancient times", 4},
        {"Nitrogen", "N", 7, "[He] 2s^2 2p^3", "Daniel Rutherford", 5},
        {"Oxygen", "O", 8, "[He] 2s^2 2p^4", "Carl Wilhelm Scheele", 6},
        {"Fluorine", "F", 9, "[He] 2s^2 2p^5", "Henri Moissan", 7},
        {"Neon", "Ne", 10, "[He] 2s^2 2p^6", "Morris Travers", 0},
        {"Sodium", "Na", 11, "[Ne] 3s^1", "Humphry Davy", 1},
        {"Magnesium", "Mg", 12, "[Ne] 3s^2", "Joseph Black", 2},
        {"Aluminum", "Al", 13, "[Ne] 3s^2 3p^1", "Hans Christian Ørsted", 3},
        {"Silicon", "Si", 14, "[Ne] 3s^2 3p^2", "Jöns Jacob Berzelius", 4},
        {"Phosphorus", "P", 15, "[Ne] 3s^2 3p^3", "Hennig Brand", 5},
        {"Sulfur", "S", 16, "[Ne] 3s^2 3p^4", "Antoine Lavoisier", 6},
        {"Chlorine", "Cl", 17, "[Ne] 3s^2 3p^5", "Carl Wilhelm Scheele", 7},
        {"Argon", "Ar", 18, "[Ne] 3s^2 3p^6", "Lord Rayleigh, William Ramsay", 0},
        {"Potassium", "K", 19, "[Ar] 4s^1", "Humphry Davy", 1},
        {"Calcium", "Ca", 20, "[Ar] 4s^2", "Humphry Davy", 2},
        {"Scandium", "Sc", 21, "[Ar] 4s^2 3d^1", "Lars Fredrik Nilson", 3},
        {"Titanium", "Ti", 22, "[Ar] 4s^2 3d^2", "William Gregor", 4},
        {"Vanadium", "V", 23, "[Ar] 4s^2 3d^3", "Andrés Manuel del Río", 5},
        {"Chromium", "Cr", 24, "[Ar] 4s^1 3d^5", "Louis Nicolas Vauquelin", 6},
        {"Manganese", "Mn", 25, "[Ar] 4s^2 3d^5", "Johan Gottlieb Gahn", 7},
        {"Iron", "Fe", 26, "[Ar] 4s^2 3d^6", "Ancient times", 8},
        {"Nickel", "Ni", 28, "[Ar] 4s^2 3d^8", "Axel Fredrik Cronstedt", 10},
        {"Cobalt", "Co", 27, "[Ar] 4s^2 3d^7", "George Brandt", 9},
        {"Copper", "Cu", 29, "[Ar] 4s^1 3d^9", "Ancient times", 11},
        {"Zinc", "Zn", 30, "[Ar] 4s^2 3d^10", "Andreas Sigismund Marggraf", 12},
        {"Gallium", "Ga", 31, "[Ar] 4s^2 3d^10 4p^1", "Paul-Émile Lecoq de Boisbaudran", 3},
        {"Germanium", "Ge", 32, "[Ar] 4s^2 3d^10 4p^2", "Clemens Winkler", 4},
        {"Arsenic", "As", 33, "[Ar] 4s^2 3d^10 4p^3", "Albertus Magnus", 5},
        {"Selenium", "Se", 34, "[Ar] 4s^2 3d^10 4p^4", "Jöns Jacob Berzelius", 6},
        {"Bromine", "Br", 35, "[Ar] 4s^2 3d^10 4p^5", "Antoine Jérôme Balard", 7},
        {"Krypton", "Kr", 36, "[Ar] 4s^2 3d^10 4p^6", "Sir William Ramsay, Morris Travers", 0},
        {"Rubidium", "Rb", 37, "[Kr] 5s^1", "Robert Bunsen, Gustav Kirchhoff", 1},
        {"Strontium", "Sr", 38, "[Kr] 5s^2", "Adair Crawford, William Cruickshank", 2},
        {"Yttrium", "Y", 39, "[Kr] 5s^2 4d^1", "Johan Gadolin", 3},
        {"Zirconium", "Zr", 40, "[Kr] 5s^2 4d^2", "Martin Heinrich Klaproth", 4},
        {"Niobium", "Nb", 41, "[Kr] 5s^1 4d^4", "Charles Hatchett", 5},
        {"Molybdenum", "Mo", 42, "[Kr] 5s^1 4d^5", "Carl Wilhelm Scheele", 6},
        {"Technetium", "Tc", 43, "[Kr] 5s^2 4d^5", "Carlo Perrier, Emilio Segrè", 7},
        {"Ruthenium", "Ru", 44, "[Kr] 5s^1 4d^7", "Karl Ernst Claus", 8},
        {"Rhodium", "Rh", 45, "[Kr] 5s^1 4d^8", "William Hyde Wollaston", 9},
        {"Palladium", "Pd", 46, "[Kr] 4d^10", "William Hyde Wollaston", 10},
        {"Silver", "Ag", 47, "[Kr] 5s^1 4d^10", "Ancient times", 11},
        {"Cadmium", "Cd", 48, "[Kr] 5s^2 4d^10", "Karl Samuel Leberecht Hermann", 12},
        {"Indium", "In", 49, "[Kr] 5s^2 4d^10 5p^1", "Ferdinand Reich, Hieronymous Theodor Richter", 3},
        {"Tin", "Sn", 50, "[Kr] 5s^2 4d^10 5p^2", "Ancient times", 4},
        {"Antimony", "Sb", 51, "[Kr] 5s^2 4d^10 5p^3", "Ancient times", 5},
        {"Tellurium", "Te", 52, "[Kr] 5s^2 4d^10 5p^4", "Franz-Joseph Müller von Reichenstein", 6},
        {"Iodine", "I", 53, "[Kr] 5s^2 4d^10 5p^5", "Bernard Courtois", 7},
        {"Xenon", "Xe", 54, "[Kr] 5s^2 4d^10 5p^6", "Sir William Ramsay, Morris Travers", 0},
        {"Cesium", "Cs", 55, "[Xe] 6s^1", "Robert Bunsen, Gustav Kirchhoff", 1},
        {"Barium", "Ba", 56, "[Xe] 6s^2", "Carl Wilhelm Scheele", 2},
        {"Lanthanum", "La", 57, "[Xe] 5d^1 6s^2", "Carl Gustaf Mosander", 3},
        {"Cerium", "Ce", 58, "[Xe] 4f^1 5d^1 6s^2", "Martin Heinrich Klaproth, Jöns Jakob Berzelius", 4},
        {"Praseodymium", "Pr", 59, "[Xe] 4f^3 6s^2", "Carl Auer von Welsbach", 3},
        {"Neodymium", "Nd", 60, "[Xe] 4f^4 6s^2", "Carl Auer von Welsbach", 3},
        {"Promethium", "Pm", 61, "[Xe] 4f^5 6s^2", "Isotopes produced in labs", 3},
        {"Samarium", "Sm", 62, "[Xe] 4f^6 6s^2", "Lecoq de Boisbaudran", 3},
        {"Europium", "Eu", 63, "[Xe] 4f^7 6s^2", "Eugène-Anatole Demarçay", 3},
        {"Gadolinium", "Gd", 64, "[Xe] 4f^7 5d^1 6s^2", "Jean Charles Galissard de Marignac", 3},
        {"Terbium", "Tb", 65, "[Xe] 4f^9 6s^2", "Carl Gustaf Mosander", 3},
        {"Dysprosium", "Dy", 66, "[Xe] 4f^10 6s^2", "Paul Émile Lecoq de Boisbaudran", 3},
        {"Holmium", "Ho", 67, "[Xe] 4f^11 6s^2", "Per Teodor Cleve", 3},
        {"Erbium", "Er", 68, "[Xe] 4f^12 6s^2", "Carl Gustaf Mosander", 3},
        {"Thulium", "Tm", 69, "[Xe] 4f^13 6s^2", "Per Teodor Cleve", 3},
        {"Ytterbium", "Yb", 70, "[Xe] 4f^14 6s^2", "Jean Charles Galissard de Marignac", 3},
        {"Lutetium", "Lu", 71, "[Xe] 4f^14 5d^1 6s^2", "Carl Auer von Welsbach", 3},
        {"Hafnium", "Hf", 72, "[Xe] 4f^14 5d^2 6s^2", "Dirk Coster, George de Hevesy", 4},
        {"Tantalum", "Ta", 73, "[Xe] 4f^14 5d^3 6s^2", "Anders Gustaf Ekeberg", 5},
        {"Tungsten", "W", 74, "[Xe] 4f^14 5d^4 6s^2", "Carl Wilhelm Scheele", 6},
        {"Rhenium", "Re", 75, "[Xe] 4f^14 5d^5 6s^2", "Ferdinand White", 7},
        {"Osmium", "Os", 76, "[Xe] 4f^14 5d^6 6s^2", "Smithson Tennant", 8},
        {"Iridium", "Ir", 77, "[Xe] 4f^14 5d^7 6s^2", "Smithson Tennant", 9},
        {"Platinum", "Pt", 78, "[Xe] 4f^14 5d^9 6s^1", "Ancient times", 10},
        {"Gold", "Au", 79, "[Xe] 4f^14 5d^10 6s^1", "Ancient times", 11},
        {"Mercury", "Hg", 80, "[Xe] 4f^14 5d^10 6s^2", "Ancient times", 12},
        {"Thallium", "Tl", 81, "[Xe] 4f^14 5d^10 6s^2 6p^1", "William Crookes", 3},
        {"Lead", "Pb", 82, "[Xe] 4f^14 5d^10 6s^2 6p^2", "Ancient times", 4},
        {"Bismuth", "Bi", 83, "[Xe] 4f^14 5d^10 6s^2 6p^3", "Ancient times", 5},
        {"Polonium", "Po", 84, "[Xe] 4f^14 5d^10 6s^2 6p^4", "Pierre and Marie Curie", 6},
        {"Astatine", "At", 85, "[Xe] 4f^14 5d^10 6s^2 6p^5", "Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè", 7},
        {"Radon", "Rn", 86, "[Xe] 4f^14 5d^10 6s^2 6p^6", "Friedrich Ernst Dorn", 0},
        {"Francium", "Fr", 87, "[Rn] 7s^1", "Marguerite Perey", 1},
        {"Radium", "Ra", 88, "[Rn] 7s^2", "Marie Sklodowska Curie", 2},
        {"Actinium", "Ac", 89, "[Rn] 6d^1 7s^2", "Friedrich Oskar Giesel", 3},
        {"Thorium", "Th", 90, "[Rn] 6d^2 7s^2", "Jöns Jakob Berzelius", 4},
        {"Protactinium", "Pa", 91, "[Rn] 5f^2 6d^1 7s^2", "Kasimir Fajans, Oswald Helmuth Göhring", 5},
        {"Uranium", "U", 92, "[Rn] 5f^3 6d^1 7s^2", "Martin Heinrich Klaproth", 6},
        {"Neptunium", "Np", 93, "[Rn] 5f^4 6d^1 7s^2", "Edwin McMillan, Philip H. Abelson", 7},
        {"Plutonium", "Pu", 94, "[Rn] 5f^6 7s^2", "Glenn T. Seaborg, Ralph A. James", 8},
        {"Americium", "Am", 95, "[Rn] 5f^7 7s^2", "Glenn T. Seaborg, Ralph A. James", 9},
        {"Curium", "Cm", 96, "[Rn] 5f^7 6d^1 7s^2", "Glenn T. Seaborg, Ralph A. James", 10},
        {"Berkelium", "Bk", 97, "[Rn] 5f^9 7s^2", "Glenn T. Seaborg, Albert Ghiorso", 11},
        {"Californium", "Cf", 98, "[Rn] 5f^10 7s^2", "Glenn T. Seaborg, Albert Ghiorso", 12},
        {"Einsteinium", "Es", 99, "[Rn] 5f^11 7s^2", "Albert Ghiorso", 13},
        {"Fermium", "Fm", 100, "[Rn] 5f^12 7s^2", "Albert Ghiorso", 14},
        {"Mendelevium", "Md", 101, "[Rn] 5f^13 7s^2", "Albert Ghiorso", 15},
        {"Nobelium", "No", 102, "[Rn] 5f^14 7s^2", "Albert Ghiorso", 16},
        {"Lawrencium", "Lr", 103, "[Rn] 5f^14 7s^2 7p^1", "Albert Ghiorso", 17},
        {"Rutherfordium", "Rf", 104, "[Rn] 5f^14 6d^2 7s^2", "Joint Institute for Nuclear Research (Russia)", 4},
        {"Dubnium", "Db", 105, "[Rn] 5f^14 6d^3 7s^2", "Joint Institute for Nuclear Research (Russia)", 5},
        {"Seaborgium", "Sg", 106, "[Rn] 5f^14 6d^4 7s^2", "Joint Institute for Nuclear Research (Russia)", 6},
        {"Bohrium", "Bh", 107, "[Rn] 5f^14 6d^5 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 7},
        {"Hassium", "Hs", 108, "[Rn] 5f^14 6d^6 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 8},
        {"Meitnerium", "Mt", 109, "[Rn] 5f^14 6d^7 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 9},
        {"Darmstadtium", "Ds", 110, "[Rn] 5f^14 6d^8 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 10},
        {"Roentgenium", "Rg", 111, "[Rn] 5f^14 6d^9 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 11},
        {"Copernicium", "Cn", 112, "[Rn] 5f^14 6d^10 7s^2", "Gesellschaft für Schwerionenforschung (Germany)", 12},
        {"Nihonium", "Nh", 113, "[Rn] 5f^14 6d^10 7s^2 7p^1", "RIKEN (Japan)", 13},
        {"Flerovium", "Fl", 114, "[Rn] 5f^14 6d^10 7s^2 7p^2", "Joint Institute for Nuclear Research (Russia)", 14},
        {"Moscovium", "Mc", 115, "[Rn] 5f^14 6d^10 7s^2 7p^3", "Joint Institute for Nuclear Research (Russia)", 15},
        {"Livermorium", "Lv", 116, "[Rn] 5f^14 6d^10 7s^2 7p^4", "Joint Institute for Nuclear Research (Russia)", 16},
        {"Tennessine", "Ts", 117, "[Rn] 5f^14 6d^10 7s^2 7p^5", "Joint Institute for Nuclear Research (Russia)", 17},
        {"Oganesson", "Og", 118, "[Rn] 5f^14 6d^10 7s^2 7p^6", "Joint Institute for Nuclear Research (Russia)", 18}
    };

    printf("Welcome to the Modern periodic table\n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to know about periodic table\n");

    printf("ENTER\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("> Press 3 to search the element by atomic number\n\n");

        printf("ENTER\n\n");
        scanf("%d", &m);

        if (m == 3)
        {
            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if (a >= 1 && a <= 118)
            {
                struct Element element = elements[a - 1];

                printf("Name : %s\n", element.name);
                printf("Symbol : %s\n", element.symbol);
                printf("Atomic number : %d\n", element.atomicNumber);
                printf("Electronic configuration : %s\n", element.electronicConfiguration);
                printf("Discovered by : %s\n", element.discoveredBy);
                printf("Charge : +%d\n", element.charge);
            }
            else
            {
                printf("Invalid atomic number\n");
            }
        }
    }
    else if (n == 2)
    {
        printf("Do you want to exit? (Yes or No)\n ");
        printf("> Press 6 for Yes\n");
        printf("> Press 7 for No\n");

        printf("ENTER\n");
        scanf("%d", &xit);

        if (xit == 6)
        {
            printf("The Periodic Table has closed\n");
        }
        else if (xit == 7)
        {
            printf("Periodic table has not closed, and you can continue to learn more elements\n\n");

            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if (a >= 1 && a <= 118)
            {
                struct Element element = elements[a - 1];

                printf("Name : %s\n", element.name);
                printf("Symbol : %s\n", element.symbol);
                printf("Atomic number : %d\n", element.atomicNumber);
                printf("Electronic configuration : %s\n", element.electronicConfiguration);
                printf("Discovered by : %s\n", element.discoveredBy);
                printf("Charge : +%d\n", element.charge);
            }
            else
            {
                printf("Invalid atomic number\n");
            }
        }
    }

    return 0;
}
