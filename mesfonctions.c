#include "copy_prototype.h"
void presentation();
void presentation1(int A, int B, int C, int D);
void comparation(int A, int B, int C, int D);
void compA(int A, int B, int C, int D);
void displayHTML() {
    int A = 0, B = 0, C = 0, D = 0;
    
    printf("Content-Type: text/html\n\n");
    printf("<html>\n"); 
    // En-tete:
    printf("<head>\n"); 
    printf("<title>Ma page web</title>\n");
    printf("<style>\n");
    printf("body {\n");
    printf("    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;\n");
    printf("    background-color: #e0f7fa;\n");
    printf("    margin: 0;\n");
    printf("    padding: 0;\n");
    printf("    display: flex;\n");
    printf("    justify-content: center;\n");
    printf("    align-items: center;\n");
    printf("    height: 100vh;\n");
    printf("}\n");
    printf(".container {\n");
    printf("    background: #ffffff;\n");
    printf("    padding: 30px;\n");
    printf("    border-radius: 12px;\n");
    printf("    box-shadow: 0 4px 8px rgba(0,0,0,0.2);\n");
    printf("    width: 100%;\n");
    printf("    max-width: 500px;\n");
    printf("    text-align: center;\n");
    printf("}\n");
    printf("h2 {\n");
    printf("    color: #00796b;\n");
    printf("    font-size: 22px;\n");
    printf("    margin-bottom: 20px;\n");
    printf("}\n");
    printf("label {\n");
    printf("    display: block;\n");
    printf("    margin-bottom: 8px;\n");
    printf("    font-weight: bold;\n");
    printf("}\n");
    printf("input[type=text] {\n");
    printf("    padding: 12px;\n");
    printf("    margin-bottom: 15px;\n");
    printf("    border: 2px solid #00796b;\n");
    printf("    border-radius: 8px;\n");
    printf("    font-size: 16px;\n");
    printf("    width: calc(100% - 26px);\n");
    printf("    box-sizing: border-box;\n");
    printf("}\n");
    printf("input[type=submit] {\n");
    printf("    padding: 12px;\n");
    printf("    background-color: #00796b;\n");
    printf("    border: none;\n");
    printf("    border-radius: 8px;\n");
    printf("    color: #ffffff;\n");
    printf("    cursor: pointer;\n");
    printf("    font-size: 18px;\n");
    printf("    transition: background-color 0.3s;\n");
    printf("}\n");
    printf("input[type=submit]:hover {\n");
    printf("    background-color: #004d40;\n");
    printf("}\n");
    printf("p.error {\n");
    printf("    color: #d32f2f;\n");
    printf("    font-weight: bold;\n");
    printf("}\n");
    printf("</style>\n");
    printf("</head>\n");
    // Corps:
    printf("<body>\n");
    printf("<div class=\"container\">\n");
    printf("<h2>Entrez votre adresse IP</h2>\n");
    printf("<form method=\"GET\">\n");
    printf("    <label for=\"ip\">Adresse IP:</label>\n");
    printf("    <input type=\"text\" id=\"ip\" name=\"A\" placeholder=\"Ex: 0.0.0.0\" />\n");
    printf("    <input type=\"submit\" value=\"Envoyer\" />\n");
    printf("</form>\n");
    
    char *lien = getenv("QUERY_STRING");
    if (lien == NULL) {
        printf("<p class=\"error\">Erreur: Pas de données reçues.</p>\n");
    } else {
        // Extraction des paramètres de la chaîne QUERY_STRING
        if (sscanf(lien, "A=%d.%d.%d.%d", &A, &B, &C, &D) == 4) {
            presentation();
            presentation1(A, B, C, D);
            comparation(A, B, C, D);
        } else {
            printf("<p class=\"error\">Format de l'adresse IP invalide.</p>\n");
        }
    }
    printf("</div>\n");
    printf("</body>\n");
    printf("</html>\n");
}
void presentation() {
    printf("<h2>Ceci est un program creer par Haja</h2>\n");
   // printf("<h2>Entrez votre adresse IP ci-dessous (format A-B-C-D):</h2>\n");
    printf("<h2>Votre donne doit-etre au format 8 bits</h2>\n");
}

void presentation1(int A, int B, int C, int D) {
    // Afficher les valeurs
    printf("<h2>Votre IP: %d-%d-%d-%d</h2>\n", A, B, C, D);
}

void comparation(int A, int B, int C, int D) {
    if (A < 1000) {
        compA(A, B, C, D);
    } else {
        printf("<h2>Votre adresse IP est invalide !!</h2>\n");
    }
}

void compA(int A, int B, int C, int D) {
    if (A >= 0 && A <= 127) {
        // Classe A
        if (B <= 255 && C <= 255 && D <= 255) {
            printf("<h3>Votre IP: %d-%d-%d-%d est appartient au classe A</h3>\n", A, B, C, D);
        } else {
            printf("<h2>Votre adresse IP est invalide!</h2>\n");
        }
    } else if (A >= 128 && A <= 191) {
        // Classe B
        if (B <= 255 && C <= 255 && D <= 255) {
            printf("<h3>Votre IP: %d-%d-%d-%d est appartient au classe B</h3>\n", A, B, C, D);
        } else {
            printf("<h3>Votre adresse IP est invalide!</h3>\n");
        }
    } else if (A >= 192 && A <= 223) {
        // Classe C
        if (B <= 255 && C <= 255 && D <= 255) {
            printf("<h3>Votre IP: %d-%d-%d-%d est appartient au classe C</h3>\n", A, B, C, D);
        } else {
            printf("<h3>Votre adresse IP est invalide!</h3>\n");
        }
    } else if (A >= 224 && A <= 239) {
        // Classe D
        if (B <= 255 && C <= 255 && D <= 255) {
            printf("<h3>Votre IP: %d-%d-%d-%d est appartient au classe D</h3>\n", A, B, C, D);
        } else {
            printf("<h3>Votre adresse IP est invalide!</h3>\n");
        }
    } else if (A >= 240 && A <= 255) {
        // Classe E
        if (B <= 255 && C <= 255 && D <= 255) {
            printf("<h3>Votre IP: %d-%d-%d-%d est appartient au classe E</h3>\n", A, B, C, D);
        } else {
            printf("<h3>Votre adresse IP est invalide!</h3>\n");
        }
    } else {
        printf("<h3>Votre adresse IP est invalide!</h3>\n");
    }
}
