//Bai2
class Nguoi{
    constructor(Ten, Tuoi,diaCHi,ngheNghiep,Luong){
        this.Ten = Ten
        this.Tuoi =Tuoi
        this.diaCHi
        this.ngheNghiep = ngheNghiep
        this.Luong = Luong
    }
}
let nguoi1 = new Nguoi("Nguyen Van A",23,"Hanoi",1000)
let nguoi2 = new Nguoi("Nguyen Van B",58,"Hanam",2100)
let nguoi3 = new Nguoi("Nguyen Van C",51,"Hanoi",1500)
let mang = [nguoi1,  nguoi2, nguoi3]

mang.forEach(nguoi => {
    if(nguoi.Tuoi > 50)Ơ
})
// Câu 1(2 điểm) Nhập vào từ bàn phím 2 số nguyên a và b bằng hàm promt(), báo
// lỗi nếu giá trị a và b được nhập vào không phải là số nguyên, sau đó in vào console
// hình chữ nhật bằng kí tự ‘*’ với a là chiều dài của hình và b là chiều cao
// VD: a = 3 và b = 4 thì hình sẽ như sau :
// ***
// ***
// ***
// ***
// Câu 2(2 điểm ) : Khởi tạo một lớp đối tượng nguoi với các thuộc tính Tên , Tuổi ,
// Địa Chỉ , Nghề nghiệp , mức lương.
// + Xây dựng mảng gồm 3 đối tượng từ lớp trên
// + In vào console thông tin những đối tượng có tuổi lớn hơn 50
// + Viết và gọi hàm tính tổng mức lương của 3 đối tượng được tạo ra từ lớp trên.
// Câu 3( 3 điểm) : Nhập vào từ bàn phím 4 trường thông tin bao gồm : Tên, năm
// sinh, email, số điện thoại:
// Tiến hành validate các thông tin vừa nhập vào, báo lỗi trong console:
// + Tên không được bỏ trống và phải có kí tự viết hoa
// + Tính đến nay, nếu tuổi &lt;18 thì báo lỗi
// + Email phải có kí tự . và @
// + Số điện thoại phải có 10 kí tự và không có kí tự nào không phải số
// Câu4( 3 điểm): Xây dựng game đập chuột như sau:
// Xây dựng 7 ô vuông hố chuột, khi người dùng ấn vào một trong 7 hố thì chương
// trình sẽ tạo ngẫu nhiên 1 con chuột trong 7 hố đó và hiển thị ra màn hình, nếu con
// chuột ở trong đúng ô người dùng ấn thì thông báo bạn thắng, nếu không đúng ô
// người dùng vừa chọn thì thông báo bạn đập trượt rồi