
class InputHandler {
private:	
	static InputHandler* m_instance;
	InputHandler();
	~InputHandler();
public:
	static InputHandler* getInstance();
	bool Read();
};