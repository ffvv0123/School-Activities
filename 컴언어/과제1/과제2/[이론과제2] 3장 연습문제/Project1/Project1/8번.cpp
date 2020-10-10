class Calendar {
private:
	int year;
public:
	Calendar();
	int getYear();
};

Calendar::Calendar() {
	year = 10;
}
int Calendar::getYear() {
	return year;
}