using Line = vector<char>;	//a line is a vector of characters
struct Document {
	list<Line> lines;
	Document() {lines.push_back(Line {});}
};

istream& operator>>(istream& is, Document& d)
{
	for (char ch; is.get(ch); ) {
		d.lines.back().push_back(ch);
		if (ch == '\n') d.lines.push_back(Line {});	//add new Line 
	}
	if (d.lines.back().size()) d.lines.push_back(Line {});	//reading finish, ensure that there is an empty Line, because?
	return is;
}


