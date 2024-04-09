#include <stdlib.h>
#include <time.h> 
#include "../include/objets.h"

objets::objets(){ 
    bool explose = false;
    RandTypeObjet();
    RandPos();
    int animState = 0;
    int x;
    for(int i = 1; i < x; i++){ // suprimer x et initialiser avec le nombre de frames total
        std::string filename = "chemin vers l'image" + std::to_string(i) + ".png";
        Texture toadd(filename.c_str());
        textures[0].push_back(toadd);
    }
    for(int i = 1; i < x; i++){ // suprimer x et initialiser avec le nombre de frames total
        std::string filename = "chemin vers l'image" + std::to_string(i) + ".png";
        Texture toadd(filename.c_str());
        textures[1].push_back(toadd);
    }
}

objets::objets(Vector2f pos){
    bool explose = false;
    RandTypeObjet();
    objet.setPosition(pos);
    int animState = 0;
    int x;
    for(int i = 1; i < x; i++){ // suprimer x et initialiser avec le nombre de frames total
        std::string filename = "chemin vers l'image" + std::to_string(i) + ".png";
        Texture toadd(filename.c_str());
        textures[0].push_back(toadd);
    }
    for(int i = 1; i < x; i++){ // suprimer x et initialiser avec le nombre de frames total
        std::string filename = "chemin vers l'image" + std::to_string(i) + ".png";
        Texture toadd(filename.c_str());
        textures[1].push_back(toadd);
    }
}

void objets::RandPos(){
    Vector2f r;
    int a = 0; // limite gauche de la map où le joueur peut se déplacer
    int b = 100; // limite droite de la map où le joueur peut se déplacer
    int c = 0; // limite basse de la map où le joueur peut se déplacer
    int d = 100; // limite haute de la map où le joueur peut se déplacer
    r.x = rand()%(b+a);
    r.y = rand()%(d+c);
    objet.setPosition(r);
}

void objets::RandTypeObjet(){
    type = rand()%1;
    if (type == 0){ // Bombe 'classique'
        objet.setTexture(Texture("../bombe-21x24.png"));
    }
    if (type == 1){ // Bombe 'qui rajoutent du terrain'
        objet.setTexture(Texture("[inclure chemin vers la texture]"));
    }
}

int objets::returnTypeObjet(){
    return(type);
}

Vector2f objets::returnPos(){
    return(objet.getPosition());
}

void update(){

}

void objets::animation(int i){ 
// si comme pour le jeu des 24h pour coder 
// on fait une fonction update qu'on appele 
// à chaque frame
    if (i == 1) objet.setTexture(textures[i][animState]); // ajouter un '/quelque_chose' si l'animation est trop rapide
    else objet.setTexture(textures[i][animState]);
    if (animState == 0 /*A remplacer par la valeur max de l'animation*/){
        animState = 0;
    }
}

void objets::explosion(){}

void objets::Draw(GLint renderModeLoc) const{
    objet.Draw(renderModeLoc);
}
