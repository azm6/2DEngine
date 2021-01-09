#include "AnimatedGraphic.hpp"

AnimatedGraphic::AnimatedGraphic(): SDLGameObject(){ 

}

void AnimatedGraphic::load(const LoaderParams* pParams){
    SDLGameObject::load(pParams);
}

AnimatedGraphic::~AnimatedGraphic() { }

void AnimatedGraphic::update(){
    m_currentFrame = (int)  (((SDL_GetTicks() / (1000 / m_animSpeed)) % m_numFrames));
}

void AnimatedGraphic::render(){
    SDLGameObject::render();
}

void AnimatedGraphic::clean(){
    SDLGameObject::clean();
}