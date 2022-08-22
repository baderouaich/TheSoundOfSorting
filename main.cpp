#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#define OLC_SOUNDWAVE
#include "olcSoundWaveEngine.h"
#include "RandomHelper.h"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 960
#define PIXEL_WIDTH 1
#define PIXEL_HEIGHT 1

#define NUMBER_RECTS 80
#define RECT_WIDTH (SCREEN_WIDTH / NUMBER_RECTS)
#define RECT_MARGIN 1
#define SORTING_DELAY 0.001L
#define USE_AUDIO true


enum class SortingAlgorithm : uint8_t
{
	SelectionSort,
	BubbleSort,
	RecursiveBubbleSort,
	InsertionSort,
	RecursiveInsertionSort,
	MergeSort,
	IterativeMergeSort,
	QuickSort,
	IterativeQuickSort,
	HeapSort,
	CountingSort,
	RadixSort,
	BucketSort,
	ShellSort,
	TimSort,
	CombSort,
	PigeonholeSort,
	CycleSort,
	CocktailSort,
	StrandSort,
	BitonicSort,
	PancakeSorting,
	BinaryInsertionSort,
	BogoSortorPermutationSort,
	GnomeSort,
	SleepSortTheKingOfLazinessSortingwhileSleeping,
	StructureSorting,
	StoogeSort,
	TagSort,
	TreeSort,
	CartesianTreeSorting,
	OddEvenSortBrickSort,
	QuickSortonSinglyLinkedList,
	QuickSortonDoublyLinkedList,
	WayQuickSort,
	MergeSortLinkedLists,
	MergeSortDoublyLinkedList,
	ThreewayMergeSort
};

SortingAlgorithm sortingAlgorithm = SortingAlgorithm::BubbleSort;

struct Rect
{
	int x, y, width, height;
	olc::Pixel color;
};

class TheSoundOfSorting : public olc::PixelGameEngine
{
public:
	TheSoundOfSorting()
	{
		sAppName = "The Sound Of Sorting";
	}

private:
	int width, height;
	std::vector<Rect> rects;

	Rect* currentRectPtr = nullptr;
	Rect* nextRectPtr = nullptr;
	int currentRectIndex = 0;
	int nextRectIndex = 0;

	float delay = 0.0f;

	unsigned int endSortIndex = 0;
	unsigned int comparisons = 0;

private:
	inline void SortRects()
	{

		switch (sortingAlgorithm)
		{
		case SortingAlgorithm::SelectionSort:
		{

		}
		break;
		case SortingAlgorithm::BubbleSort:
		{
			/// Change back current rect's color into the default color WHITE.
			if (currentRectPtr != nullptr && currentRectPtr->color == olc::RED)
				currentRectPtr->color = olc::WHITE;
			/// Move back to 0
			if (currentRectIndex + 1 >= rects.size())
				currentRectIndex = 0;

			currentRectPtr = &rects[currentRectIndex];
			nextRectPtr = &rects[currentRectIndex + 1];
			/// Set current rect's colors to red.
			currentRectPtr->color = olc::RED;
			if (currentRectPtr->y < nextRectPtr->y)
			{
				/// Swap
				int newY = nextRectPtr->y;
				nextRectPtr->y = currentRectPtr->y;
				currentRectPtr->y = newY;
				//Play Sound
				PlayAudio();
			}
			currentRectIndex++;
			comparisons++;
		}
		break;
		case SortingAlgorithm::RecursiveBubbleSort:
		{

		}
		break;
		case SortingAlgorithm::InsertionSort:
		{

		}
		break;
		case SortingAlgorithm::RecursiveInsertionSort:
		{

		}
		break;
		case SortingAlgorithm::MergeSort:
		{

		}
		break;
		case SortingAlgorithm::IterativeMergeSort:
		{

		}
		break;
		case SortingAlgorithm::QuickSort:
		{

		}
		break;
		case SortingAlgorithm::IterativeQuickSort:
		{

		}
		break;
		case SortingAlgorithm::HeapSort:
		{

		}
		break;
		case SortingAlgorithm::CountingSort:
		{

		}
		break;
		case SortingAlgorithm::RadixSort:
		{

		}
		break;
		case SortingAlgorithm::BucketSort:
		{

		}
		break;
		case SortingAlgorithm::ShellSort:
		{

		}
		break;
		case SortingAlgorithm::TimSort:
		{

		}
		break;
		case SortingAlgorithm::CombSort:
		{

		}
		break;
		case SortingAlgorithm::PigeonholeSort:
		{

		}
		break;
		case SortingAlgorithm::CycleSort:
		{

		}
		break;
		case SortingAlgorithm::CocktailSort:
		{

		}
		break;
		case SortingAlgorithm::StrandSort:
		{

		}
		break;
		case SortingAlgorithm::BitonicSort:
		{

		}
		break;
		case SortingAlgorithm::PancakeSorting:
		{

		}
		break;
		case SortingAlgorithm::BinaryInsertionSort:
		{

		}
		break;
		case SortingAlgorithm::BogoSortorPermutationSort:
		{

		}
		break;
		case SortingAlgorithm::GnomeSort:
		{

		}
		break;
		case SortingAlgorithm::SleepSortTheKingOfLazinessSortingwhileSleeping:
		{

		}
		break;
		case SortingAlgorithm::StructureSorting:
		{

		}
		break;
		case SortingAlgorithm::StoogeSort:
		{

		}
		break;
		case SortingAlgorithm::TagSort:
		{

		}
		break;
		case SortingAlgorithm::TreeSort:
		{

		}
		break;
		case SortingAlgorithm::CartesianTreeSorting:
		{

		}
		break;
		case SortingAlgorithm::OddEvenSortBrickSort:
		{

		}
		break;
		case SortingAlgorithm::QuickSortonSinglyLinkedList:
		{

		}
		break;
		case SortingAlgorithm::QuickSortonDoublyLinkedList:
		{

		}
		break;
		case SortingAlgorithm::WayQuickSort:
		{

		}
		break;
		case SortingAlgorithm::MergeSortLinkedLists:
		{

		}
		break;
		case SortingAlgorithm::MergeSortDoublyLinkedList:
		{

		}
		break;
		case SortingAlgorithm::ThreewayMergeSort:
		{

		}
		break;
		default:
			std::cerr << "Unsupported Sorting Algorithm.";
			break;
		}

	}

private:
	inline static olc::sound::WaveEngine sound_engine;
	olc::sound::Wave swap_audio;
	void InitAudio()
	{
		sound_engine.InitialiseAudio();
		assert(swap_audio.LoadAudioWaveform("swap.wav"));
	}
	inline void PlayAudio()
	{
#if USE_AUDIO
		sound_engine.PlayWaveform(&swap_audio);
#endif
	}

private:
	/*void GenRects() 
	{
		 
		int diffHeight = height;
		for (int x = 0; x < width; x += RECT_WIDTH)
		{
			rects.push_back
			(
				{
					x,
					diffHeight,
					RECT_WIDTH - RECT_MARGIN,
					height,
					olc::WHITE
				}
			);
			diffHeight -= 5;
		}
	
		std::random_shuffle(rects.begin(), rects.end());
	}*/
	inline bool isSorted()
	{
		for (int i = 0; i < rects.size() - 1; i++)
				if (rects[i].y < rects[i + 1].y)
					return false;
		return true;
		/*
		return std::is_sorted(rects.begin(), rects.end(), [&](const Rect& r1, const Rect& r2) -> bool
		{
			return r1.y < r2.y;
		});*/
	}
		
	inline int RandomHeight()
	{
		int h;
		bool exists = false;
		do
		{
			h = RandomHelper::random_int<int>(0, height);
			for (const Rect& rect : rects)
				if (rect.height == h)
				{
					exists = true;
					break;
				}
		} while (exists);
		return h;
	}
	void GenerateRects()
	{
		for (int x = 0; x < width; x += RECT_WIDTH)
		{
			rects.push_back
			(
				{
					x,
					RandomHeight(),
					RECT_WIDTH - RECT_MARGIN,
					height,
					olc::WHITE
				}
			);
		}
	}
	void EndSorting()
	{
		if (endSortIndex < rects.size())
		{
			currentRectPtr = &rects[endSortIndex];
			currentRectPtr->color = olc::GREEN;
			endSortIndex++;
			PlayAudio();
		}
		else
			return;
	}
	inline void DrawRects() 
	{
		for (const Rect& rect : rects)
		{
			FillRectDecal(olc::vf2d(rect.x, rect.y), olc::vf2d(rect.width, rect.height), rect.color);
		}
	}
	inline void DrawStatistics()
	{
		DrawStringDecal(olc::vf2d(5, 5), "Rects: " + std::to_string(rects.size()));
		DrawStringDecal(olc::vf2d(5, 20), "Delay: " + std::to_string(SORTING_DELAY * 100) + " milliseconds");
		DrawStringDecal(olc::vf2d(5, 35), "Comparisons: " + std::to_string(comparisons));
	}

public:
	bool OnUserCreate() override
	{
		width = ScreenWidth(), height = ScreenHeight();
		GenerateRects();
		InitAudio();

		std::this_thread::sleep_for(std::chrono::seconds(10));
		return true;
	}

	
	bool OnUserUpdate(float fElapsedTime) override
	{
		delay += fElapsedTime;
		
		if (delay >= SORTING_DELAY)
		{
			if(!isSorted())
				SortRects();
			else
				EndSorting();

			delay = 0.0f;
		}
		
		Clear(olc::BLACK);
		DrawRects();
		DrawStatistics();
		return true;
	}

	bool OnUserDestroy() override
	{
		sound_engine.StopAll();
		sound_engine.DestroyAudio();	
		return true;
	}


};

int main() 
{
	TheSoundOfSorting T;
	if (T.Construct(SCREEN_WIDTH, SCREEN_HEIGHT, PIXEL_WIDTH, PIXEL_HEIGHT))
		T.Start();
	return 0;
}