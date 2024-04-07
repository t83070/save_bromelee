#include <BBOP/Graphics.h>
#include <BBOP/Graphics/bbopGlobal.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class objets : public BbopDrawable{
    private:
        int type; 
        /* compris en 0 et 1
            0 : Bombe 'classique'
            1 : Bombe 'qui rajoute du terrain'
        */
        int animState;

    public:
        objets();
        objets(Vector2f);

        std::vector<Texture> textures[2]; //remplacer 2 par le nombre total de textures
        Texture base;
        Sprite objet;
        bool explose;

        void RandPos(); 
        // détermine la position de l'objet aléatoirement
        void RandTypeObjet();
        // détermine le type de l'objet aléatoirement
        int returnTypeObjet();
        // return le type de l'objet
        Vector2f returnPos();
        // return la position de l'objet
        
        void update();
        void animation(int);
        void explosion();

        void Draw(GLint renderModeLoc) const override;
};