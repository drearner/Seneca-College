#ifndef SDDS_SONGCOLLECTION_H_
#define SDDS_SONGCOLLECTION_H_
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <string>

namespace sdds {
	struct Song
	{
		std::string m_title{ '\0' };
		std::string m_artist{ '\0' };
		std::string m_album{ '\0' };
		size_t m_year{ 0 };
		size_t m_length{ 0 };
		double m_price{ 0 };
	};
	class SongCollection
	{
	public:
		SongCollection(const char* filename);
		void trim(std::string& src);
		void display(std::ostream& out) const;
	private:
		std::vector<Song> m_song_collection;
	};
	std::ostream& operator<<(std::ostream& out, const Song& theSong);


}
#endif // !SDDS_SONGCOLLECTION_H_