#include "���������.h"

int main() {

	RenderWindow window(sf::VideoMode(1280, 720), L"������ ��������", Style::Close);	//�����


	//���  � ���
	Texture d, t;
	Sprite ���;
	t.loadFromFile("��������/���������/�����.png");
	���.setTextureRect(IntRect(0, 0, 1280, 720));
	
	//��������������� ����������
	����� �����(0, 0, t);
	����˨� ������(0, 0, t, 100);

	bool t1 = 0;
	bool t2 = 0;
	bool t3 = 0;
	bool t4 = 0;
	bool t5 = 0;
	bool t6 = 0;
	bool t7 = 0;
	bool t8 = 0;
	bool t9 = 0;
	bool t10 = 0;

	Event event;//������ �������
	while (window.isOpen())
	{
		//��������
		 {
			/************  ��������� ������  ***********/
			 {
				 d.loadFromFile("��������/maxresdefault.jpg");
				 ���.setTexture(d);
				 window.draw(���);

				 while (window.pollEvent(event))//��������� �������
				 {
					 //��������� ����
					 if (event.type == sf::Event::Closed || Keyboard::isKeyPressed(Keyboard::K))
						 window.close();
				 } 

			 }
			 /************  ����������  ***********/
			 {
				 if (Keyboard::isKeyPressed(Keyboard::E))//�������� �����
					 t1 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::R))//�������� ����� �� ����� �����
					 t2 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::T))//���������� �����
					 t3 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::Y))//��������� ���������� �����
					 t3 = 0;
				 if (Keyboard::isKeyPressed(Keyboard::U))// ������ �����
					 t4 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::I))//�������� ������
					 t5 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::O))//�������� ������ �� ����� �����
					 t6 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::P))//���������� ������
					 t7 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::F))//��������� ���������� ������
					 t7 = 0;
				 if (Keyboard::isKeyPressed(Keyboard::G))//������ ������
					 t8 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::H))//��������� ������
					 t9 = 1;
				 if (Keyboard::isKeyPressed(Keyboard::J))//��������� ������
					 t10 = 1;
			 }
			/************  � � � � �  ***********/
			 {
				 
				 if (t1)//�������� �����
				 {
					 �����.Show();  
					 t1 = 0;
				 }

				 if (t2)//�������� ����� �� ����� �����
				 {
					 �����.�����������(100, 100);  
					 t2 = 0;
				 }

				 if (t3)//���������� �����
					 �����.����������(1);  

				 if (t4)//������ �����
				 {
					 �����.Hide();  
					 t4 = 0;
				 }
			 
			 }
			/************  ������   ***********/
			 {
				 if (t5)//�������� ������
				 {
					 ������.Show();  
					 t5 = 0;
				 }

				 if (t6)//�������� ������ �� ����� �����
				 {
					 ������.�����������(100, 100);  
					 t6 = 0;
				 }

				 if (t7)//���������� ������
					 ������.����������(5);  

				 if (t8)//������ ������
				 {
					 ������.Hide();  
					 t8 = 0;
				 }

				 if (t9)//��������� ������
				 {
					 ������.��������������(300);  
					 t9 = 0;
				 }

				 if (t10)//��������� ������
				 {
					 ������.��������������(100);  
					 t10 = 0;
				 }
			 }
			

			//===================================================================

			//���������� �������
			�����.����������(window);
			������.����������(window,5);
			window.display();
		}
	}
	return 0;
}