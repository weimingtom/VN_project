/*
* Definition of the main loop of the visual novel editor.
* It is meant to (more or less) easily make a visual novel.
*/
#ifndef DEF_EDIT_HPP
#define DEF_EDIT_HPP


#include <SFML/Window/Keyboard.hpp>
#include <SFML/System/String.hpp>
#include "editTypes.hpp"
#include <list>
#include "Editor.hpp"


namespace sf
{
	class RenderWindow;
}


namespace edit
{
	void getEvents(sf::RenderWindow &window, Action &action);

	void edit(sf::RenderWindow &window);

	std::string toString(Action::item aItem);

	void updateEditorList(std::list<Editor> &editors, std::list<Editor>::iterator &it, Action &action, sf::Music& voice, sf::Music& music);

	void saveToFile(std::list<Editor>& editors, const std::string& file);

	//void updateAtomicScene(AtomicScene &scene, Action &action);

} //namespace edit



#endif //DEF_EDIT_HPP

