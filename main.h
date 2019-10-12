/*
	Application template for Amazfit Bip BipOS
	(C) Maxim Volkov  2019 <Maxim.N.Volkov@ya.ru>
	
	Шаблон приложения, заголовочный файл

*/

#ifndef __APP_TEMPLATE_H__
#define __APP_TEMPLATE_H__

#define MAX_PARTICLES_COUNT	100

struct particles_ {
	unsigned char pos_x; 	//	позиция на экране
	unsigned char pos_y; 	//	позиция на экране
	  signed char v_x; 		//	скорость в рх
	  signed char v_y; 		//	скорость в рх
	unsigned char col;	//	цвет 
};


// структура данных для нашего экрана
struct app_data_ {
	void* 	ret_f;					//	адрес функции возврата
	Elf_proc_* proc;				//	указатель на данные запущенного эльфа
	struct particles_	particles[MAX_PARTICLES_COUNT];	//	массив частиц
	int 	part_count;				//	количество активных частиц
};


// template.c
void 	show_screen (void *return_screen);
void 	key_press_screen();
int 	dispatch_screen (void *param);
int 	screen_job();
void	draw_screen(int col);

int getColorFromShort(unsigned char short_color);
void addNewParticle();

#endif