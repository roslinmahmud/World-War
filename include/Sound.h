#ifndef SOUND_H
#define SOUND_H

void fireMissileSound()
{
    PlaySound("tankfire.wav", NULL, SND_ASYNC|SND_FILENAME);
}

void planeExplosionSound()
{
    PlaySound("explosion.wav", NULL, SND_ASYNC|SND_FILENAME);
}
#endif // SOUND_H
