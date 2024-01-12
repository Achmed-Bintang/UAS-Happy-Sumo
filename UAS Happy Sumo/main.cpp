#include <random>
#include <vector>
#include <cmath>
#include <string>
#include <sl.h>
#include "entities.h"

void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<SumoKanan>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i * 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<SumoKiri>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i / 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<SumoAtas>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i * 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<SumoBawah>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i / 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}

void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<MangkokKanan>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i * 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<MangkokKiri>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i / 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<MangkokAtas>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i * 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<MangkokBawah>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i / 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}

void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<NasiKanan>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i * 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<NasiKiri>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double x = PosXawal + i / 128;
		double y = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<NasiAtas>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i * 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}
void InisialisasiObjek(int JumlahObjek, double PosXawal, std::vector<NasiBawah>& objectVector)
{
	std::random_device rd;
	for (int i = 0; i < JumlahObjek; ++i)
	{
		double y = PosXawal + i / 128;
		double x = (rd() % 8 + 1) * 100;
		objectVector.push_back({ x, y, 15 });
	}
}

bool isCollisiont(Anakkecil, SumoKanan);
bool isCollisiont(Anakkecil, SumoKiri);
bool isCollisiont(Anakkecil, SumoAtas);
bool isCollisiont(Anakkecil, SumoBawah);

bool isCollisiont(Anakkecil, MangkokKanan);
bool isCollisiont(Anakkecil, MangkokKiri);
bool isCollisiont(Anakkecil, MangkokAtas);
bool isCollisiont(Anakkecil, MangkokBawah);

bool isCollisiont(Anakkecil, NasiKanan);
bool isCollisiont(Anakkecil, NasiKiri);
bool isCollisiont(Anakkecil, NasiAtas);
bool isCollisiont(Anakkecil, NasiBawah);

int main()
{

	// Membuat Window
	slWindow(800, 800, "Amikom Summo", 0);

	// Memasukan Assets
	int font = slLoadFont("Redwing-Medium.otf");
	int imgsumo = slLoadTexture("Sumo.png");
	int imganakkecil = slLoadTexture("Anakkecil.png");
	int imgarena = slLoadTexture("Arena.png");
	int imgmangkok = slLoadTexture("Mangkok.png");
	int imgnasi = slLoadTexture("Nasi.png");
	int Score = 0;
	int Health = 5;
	int Makan = slLoadWAV("SoundMakan.wav");
	int Sumo = slLoadWAV("SoundSumo.wav");
	int Backsound = slLoadWAV("BackSound.wav");
	bool gameover = false;

	std::random_device rd;

	//  ---Inisialisasi Objek---
	Anakkecil anakkecil{ 400, 400, 20 };

	// Sumo
	SumoKanan sumokan{ 500, 800, 30 };
	SumoKiri sumokir{ 500, 0, 30 };
	SumoAtas sumoata{ 800, 500, 30 };
	SumoBawah sumobaw{ 0, 500, 30 };
	std::vector<SumoKanan>sumokanan;
	std::vector<SumoKiri>sumokiri;
	std::vector<SumoAtas>sumoatas;
	std::vector<SumoBawah>sumobawah;

	// Mangkok
	MangkokKanan mangkokkan{ 500, 800, 30 };
	MangkokKiri mangkokkir{ 500, 0, 30 };
	MangkokAtas mangkokata{ 800, 500, 30 };
	MangkokBawah mangkokbaw{ 0, 500, 30 };
	std::vector<MangkokKanan>mangkokkanan;
	std::vector<MangkokKiri>mangkokkiri;
	std::vector<MangkokAtas>mangkokatas;
	std::vector<MangkokBawah>mangkokbawah;

	// Nasi
	NasiKanan nasikan{ 500, 800, 40 };
	NasiKiri nasikir{ 500, 0, 40 };
	NasiAtas nasiata{ 800, 500, 40 };
	NasiBawah nasibaw{ 0, 500, 40 };
	std::vector<NasiKanan>nasikanan;
	std::vector<NasiKiri>nasikiri;
	std::vector<NasiAtas>nasiatas;
	std::vector<NasiBawah>nasibawah;

	// ---Memasukan Objek---

	// Sumo  

	InisialisasiObjek((rd() % 2 + 1), 800, sumokanan);
	InisialisasiObjek((rd() % 2 + 1), 0, sumokiri);
	InisialisasiObjek((rd() % 2 + 1), 800, sumoatas);
	InisialisasiObjek((rd() % 2 + 1), 0, sumobawah);

	// Mangkok
	InisialisasiObjek((rd() % 2 + 1), 800, mangkokkanan);
	InisialisasiObjek((rd() % 2 + 1), 0, mangkokkiri);
	InisialisasiObjek((rd() % 2 + 1), 800, mangkokatas);
	InisialisasiObjek((rd() % 2 + 1), 0, mangkokbawah);

	// Nasi
	InisialisasiObjek((rd() % 2 + 1), 800, nasikanan);
	InisialisasiObjek((rd() % 2 + 1), 0, nasikiri);
	InisialisasiObjek((rd() % 2 + 1), 800, nasiatas);
	InisialisasiObjek((rd() % 2 + 1), 0, nasibawah);

	slSetFont(font, 50);

	slSoundLoop(Backsound);

	// Pengulangan Dalam Game
	while (!slShouldClose())
	{

		if (slGetMouseButton(SL_MOUSE_BUTTON_LEFT))
		{
			Score = 0; // Reset Score
			Health = 5; // Reset Healt
			gameover = false;
			anakkecil.posX = 400;
			anakkecil.posY = 400;

			// -----Reset Game-----
			// Sumo
			for (int i = 0; i < sumokanan.size(); ++i)
			{
				sumokanan[i].posX = 800 + i * 128;
				sumokanan[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < sumokiri.size(); ++i)
			{
				sumokiri[i].posX = 800 + i * 128;
				sumokiri[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < sumoatas.size(); ++i)
			{
				sumoatas[i].posX = 800 + i * 128;
				sumoatas[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < sumobawah.size(); ++i)
			{
				sumobawah[i].posX = 800 + i * 128;
				sumobawah[i].posY = (rd() % 9 + 1) * 100;
			}

			// Mangkok
			for (int i = 0; i < mangkokkanan.size(); ++i)
			{
				mangkokkanan[i].posX = 800 + i * 128;
				mangkokkanan[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < mangkokkiri.size(); ++i)
			{
				mangkokkiri[i].posX = 800 + i * 128;
				mangkokkiri[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < mangkokatas.size(); ++i)
			{
				mangkokatas[i].posX = 800 + i * 128;
				mangkokatas[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < mangkokbawah.size(); ++i)
			{
				mangkokbawah[i].posX = 800 + i * 128;
				mangkokbawah[i].posY = (rd() % 9 + 1) * 100;
			}

			// Nasi
			for (int i = 0; i < nasikanan.size(); ++i)
			{
				nasikanan[i].posX = 800 + i * 128;
				nasikanan[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < nasikiri.size(); ++i)
			{
				nasikiri[i].posX = 800 + i * 128;
				nasikiri[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < nasiatas.size(); ++i)
			{
				nasiatas[i].posX = 800 + i * 128;
				nasiatas[i].posY = (rd() % 9 + 1) * 100;
			}
			for (int i = 0; i < nasibawah.size(); ++i)
			{
				nasibawah[i].posX = 800 + i * 128;
				nasibawah[i].posY = (rd() % 9 + 1) * 100;
			}
		}

		if (!gameover)
		{
			// Render Asset
			slSprite(imgarena, 400, 400, 800, 800);
			slSprite(imganakkecil, anakkecil.posX, anakkecil.posY, 50, 65);

			// ---Reset Gerakkan Sumo---

		// **Mangkok**
		// Jika Mangkok Sampai Ujung Layar Kiri, Riset
			if (mangkokkan.posX = 10)
			{
				for (MangkokKanan& m : mangkokkanan)
				{
					m.posX -= (rd() % 2 + 0.5);
					if (m.posX <= 0)
					{
						m.posX = 800;
						m.posY = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, m))
					{
						Score += 2;
						slSoundPlay(Makan);
						m.posX = 800;
						m.posY = (rd() % 9 + 1) * 100;
					}
				}
				for (const MangkokKanan& mangkokkan : mangkokkanan)
					slSprite(imgmangkok, mangkokkan.posX, mangkokkan.posY, 50, 50);
			}

			// Jika Mangkok Sampai Ujung Layar Kanan, Riset
			if (mangkokkir.posX = 1090)
			{
				for (MangkokKiri& m : mangkokkiri)
				{
					m.posX += (rd() % 2 + 0.5);
					if (m.posX >= 1100)
					{
						m.posX = 0;
						m.posY = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, m))
					{
						Score += 2;
						slSoundPlay(Makan);
						m.posX = 0;
						m.posY = (rd() % 9 + 1) * 100;
					}
				}
				for (const MangkokKiri& mangkokkir : mangkokkiri)
					slSprite(imgmangkok, mangkokkir.posX, mangkokkir.posY, 50, 50);
			}

			// Jika Mangkok Sampai Ujung Layar Bawah, Riset
			if (mangkokata.posY = -140)
			{
				for (MangkokAtas& m : mangkokatas)
				{
					m.posY -= (rd() % 2 + 0.5);
					if (m.posY <= -150)
					{
						m.posY = 800;
						m.posX = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, m))
					{
						Score += 2;
						slSoundPlay(Makan);
						m.posY = 800;
						m.posX = (rd() % 9 + 1) * 100;
					}
				}
				for (const MangkokAtas& mangkokata : mangkokatas)
					slSprite(imgmangkok, mangkokata.posX, mangkokata.posY, 50, 50);
			}

			// Jika Mangkok Sampai Ujung Layar Atas, Riset
			if (mangkokbaw.posY = 1240)
			{
				for (MangkokBawah& m : mangkokbawah)
				{
					m.posY += (rd() % 2 + 0.5);
					if (m.posY >= 1250)
					{
						m.posY = 0;
						m.posX = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, m))
					{
						Score += 2;
						slSoundPlay(Makan);
						m.posY = 0;
						m.posX = (rd() % 9 + 1) * 100;
					}
				}
				for (const MangkokBawah& mangkokbaw : mangkokbawah)
					slSprite(imgmangkok, mangkokbaw.posX, mangkokbaw.posY, 50, 50);
			}

			// **Nasi**
			// Jika Nasi Sampai Ujung Layar Kiri, Riset
			if (nasikan.posX = 10)
			{
				for (NasiKanan& n : nasikanan)
				{
					n.posX -= (rd() % 2 + 0.5);
					if (n.posX <= 0)
					{
						n.posX = 800;
						n.posY = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, n))
					{
						Score += 1;
						slSoundPlay(Makan);
						n.posX = 800;
						n.posY = (rd() % 9 + 1) * 100;
					}
				}
				for (const NasiKanan& nasikan : nasikanan)
					slSprite(imgnasi, nasikan.posX, nasikan.posY, 50, 50);
			}

			// Jika Nasi Sampai Ujung Layar Kanan, Riset
			if (nasikir.posX = 990)
			{
				for (NasiKiri& n : nasikiri)
				{
					n.posX += (rd() % 2 + 0.5);
					if (n.posX >= 1000)
					{
						n.posX = 0;
						n.posY = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, n))
					{
						Score += 1;
						slSoundPlay(Makan);
						n.posX = 0;
						n.posY = (rd() % 9 + 1) * 100;
					}
				}
				for (const NasiKiri& nasikir : nasikiri)
					slSprite(imgnasi, nasikir.posX, nasikir.posY, 50, 50);
			}

			// Jika Nasi Sampai Ujung Layar Bawah, Riset
			if (nasiata.posY = -190)
			{
				for (NasiAtas& n : nasiatas)
				{
					n.posY -= (rd() % 2 + 0.5);
					if (n.posY <= -200)
					{
						n.posY = 800;
						n.posX = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, n))
					{
						Score += 1;
						slSoundPlay(Makan);
						n.posY = 800;
						n.posX = (rd() % 9 + 1) * 100;
					}
				}
				for (const NasiAtas& nasiata : nasiatas)
					slSprite(imgnasi, nasiata.posX, nasiata.posY, 50, 50);
			}

			// Jika Nasi Sampai Ujung Layar Atas, Riset
			if (nasibaw.posY = 890)
			{
				for (NasiBawah& n : nasibawah)
				{
					n.posY += (rd() % 2 + 0.5);
					if (n.posY >= 900)
					{
						n.posY = 0;
						n.posX = (rd() % 9 + 1) * 100;
					}
					if (isCollisiont(anakkecil, n))
					{
						Score += 1;
						slSoundPlay(Makan);
						n.posY = 0;
						n.posX = (rd() % 9 + 1) * 100;
					}
				}
				for (const NasiBawah& nasibaw : nasibawah)
					slSprite(imgnasi, nasibaw.posX, nasibaw.posY, 50, 50);
			}

			// **Sumo** 
			// Jika Sumo Sampai Ujung Layar Kiri, Riset
			if (sumokan.posX = 10)
			{
				for (SumoKanan& s : sumokanan)
				{
					s.posX -= (rd() % 2 + 0.5);
					if (s.posX <= 0)
					{
						s.posX = 800;
						s.posY = (rd() % 8 + 1) * 100;
					}
					if (isCollisiont(anakkecil, s))
					{
						Health -= 1;
						anakkecil.posX = 400;
						anakkecil.posY = 400;
						slSoundPlay(Sumo);
						s.posX = 800;
						s.posY = (rd() % 8 + 1) * 100;
					}
					if (Health <= 0)
						gameover = true;
				}
				for (const SumoKanan& sumokan : sumokanan)
					slSprite(imgsumo, sumokan.posX, sumokan.posY, 75, 75);
			}

			// Jika Sumo Sampai Ujung Layar Kanan, Riset
			if (sumokir.posX = 990)
			{
				for (SumoKiri& s : sumokiri)
				{
					s.posX += (rd() % 2 + 0.5);
					if (s.posX >= 1000)
					{
						s.posX = 0;
						s.posY = (rd() % 8 + 1) * 100;
					}
					if (isCollisiont(anakkecil, s))
					{
						Health -= 1;
						anakkecil.posX = 400;
						anakkecil.posY = 400;
						slSoundPlay(Sumo);
						s.posX = 0;
						s.posY = (rd() % 8 + 1) * 100;
					}

					if (Health <= 0)
						gameover = true;
				}
				for (const SumoKiri& sumokir : sumokiri)
					slSprite(imgsumo, sumokir.posX, sumokir.posY, 75, 75);
			}

			// Jika Sumo Sampai Ujung Layar Bawah, Riset
			if (sumoata.posY = -190)
			{
				for (SumoAtas& s : sumoatas)
				{
					s.posY -= (rd() % 2 + 0.5);
					if (s.posY <= -200)
					{
						s.posY = 800;
						s.posX = (rd() % 8 + 1) * 100;
					}
					if (isCollisiont(anakkecil, s))
					{
						Health = Health - 1;
						anakkecil.posX = 400;
						anakkecil.posY = 400;
						slSoundPlay(Sumo);
						s.posY = 800;
						s.posX = (rd() % 8 + 1) * 100;
					}

					if (Health <= 0)
						gameover = true;

				}
				for (const SumoAtas& sumoata : sumoatas)
					slSprite(imgsumo, sumoata.posX, sumoata.posY, 75, 75);
			}

			// Jika Sumo Sampai Ujung Layar Atas, Riset
			if (sumobaw.posY = 890)
			{
				for (SumoBawah& s : sumobawah)
				{
					s.posY += (rd() % 2 + 0.5);
					if (s.posY >= 900)
					{
						s.posY = 0;
						s.posX = (rd() % 8 + 1) * 100;
					}

					if (isCollisiont(anakkecil, s))
					{
						Health -= 1;
						anakkecil.posX = 400;
						anakkecil.posY = 400;
						slSoundPlay(Sumo);
						s.posY = 0;
						s.posX = (rd() % 8 + 1) * 100;
					}
					if (Health <= 0)
						gameover = true;
				}
				for (const SumoBawah& sumobaw : sumobawah)
					slSprite(imgsumo, sumobaw.posX, sumobaw.posY, 75, 75);
			}

			// Kontrol Main Char
			if (slGetKey(SL_KEY_UP))
				anakkecil.posY = anakkecil.posY + 3.5;
			if (slGetKey(SL_KEY_DOWN))
				anakkecil.posY = anakkecil.posY - 3.5;
			if (slGetKey(SL_KEY_RIGHT))
				anakkecil.posX = anakkecil.posX + 3.5;
			if (slGetKey(SL_KEY_LEFT))
				anakkecil.posX = anakkecil.posX - 3.5;

			slSetFontSize(35);
			slText(70, 750, std::to_string(Score).c_str());
			slText(30, 750, "lbs");
			slSprite(imganakkecil, 730, 765, 30, 45);
			slText(750, 750, std::to_string(Health).c_str());
		}
		else
		{
			slSetTextAlign(SL_ALIGN_CENTER);
			slText(400, 425, "Game Over");
			slText(400, 375, "Click To Continue");
		}

		// Membuat Main Char Tetap Didalam Game
		if (anakkecil.posX <= -1)
			anakkecil.posX = 800;
		else if (anakkecil.posX >= 801)
			anakkecil.posX = 0;
		else if (anakkecil.posY <= -1)
			anakkecil.posY = 800;
		else if (anakkecil.posY >= 801)
			anakkecil.posY = 0;

		slRender();


	}
	slClose();

	return true;
}

// Sumo
bool isCollisiont(Anakkecil a, SumoKanan s)
{
	double dx = s.posX - a.posX;
	double dy = s.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + s.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, SumoKiri s)
{
	double dx = s.posX - a.posX;
	double dy = s.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + s.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, SumoAtas s)
{
	double dx = s.posX - a.posX;
	double dy = s.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + s.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, SumoBawah s)
{
	double dx = s.posX - a.posX;
	double dy = s.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + s.radius)
		return true;

	return false;
}

// Mangkok
bool isCollisiont(Anakkecil a, MangkokKanan m)
{
	double dx = m.posX - a.posX;
	double dy = m.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + m.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, MangkokKiri m)
{
	double dx = m.posX - a.posX;
	double dy = m.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + m.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, MangkokAtas m)
{
	double dx = m.posX - a.posX;
	double dy = m.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + m.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, MangkokBawah m)
{
	double dx = m.posX - a.posX;
	double dy = m.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + m.radius)
		return true;

	return false;
}

// Nasi
bool isCollisiont(Anakkecil a, NasiKanan n)
{
	double dx = n.posX - a.posX;
	double dy = n.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + n.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, NasiKiri n)
{
	double dx = n.posX - a.posX;
	double dy = n.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + n.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, NasiAtas n)
{
	double dx = n.posX - a.posX;
	double dy = n.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + n.radius)
		return true;

	return false;
}
bool isCollisiont(Anakkecil a, NasiBawah n)
{
	double dx = n.posX - a.posX;
	double dy = n.posY - a.posY;
	double distrance = sqrt(pow(dx, 2.0) + pow(dy, 2));
	if (distrance <= a.radius + n.radius)
		return true;

	return false;
}

