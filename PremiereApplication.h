#include "ExampleApplication.h"

class PremiereApplication : public ExampleApplication
{
public:
    void createScene()
    {

        // Création Plan.
        Plane plan(Vector3::UNIT_Y, 0);
        MeshManager::getSingleton().createPlane("sol", ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME, plan, 5000, 5000, 1, 1, true, 1, 1, 1, Vector3::UNIT_Z);
        
        Entity *ent= mSceneMgr->createEntity("EntiteSol", "sol");
        SceneNode *node = mSceneMgr->getRootSceneNode()->createChildSceneNode();
        node->attachObject(ent);
        ent->setMaterialName("Examples/GrassFloor");


        // Création d'objets sur le terrain.
        Entity *cube= mSceneMgr ->createEntity("Cube", "cube.mesh");
        node= mSceneMgr->getRootSceneNode()->createChildSceneNode("nodeCube", Vector3::ZERO, Quaternion::IDENTITY);
        node->attachObject(cube);
        cube->setMaterialName("Examples/Rockwall");
        node->setPosition(0.0, 50.0, 0.0);


    
        }

    
};