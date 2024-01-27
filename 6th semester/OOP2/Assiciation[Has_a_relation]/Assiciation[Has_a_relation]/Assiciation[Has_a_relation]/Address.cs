namespace Assiciation_Has_a_relation_
{
    internal class Address
    {
        private string houseNo, roadNo, area;
        public Address(string a, string b, string c)
        {
            houseNo = a;
            roadNo = b;
            area = c;
        }
        public string HouseNo
        {
            set { houseNo = value; }
            get { return houseNo; }
        }
        public string RoadNo
        {
            set { roadNo = value; }
            get { return roadNo; }
        }
        public string Area
        {
            set { area = value; }
            get { return area; }
        }
        public string Getaddress()
        {
            return "House no: " + this.HouseNo + ", Road no: " + this.RoadNo + ", Area: " + this.Area;
        }
    }
}