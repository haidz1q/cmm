let Ten = prompt("Nhập tên:")
let namSinh = prompt("Nhập năm sinh:")
let Email = prompt("Nhập email:")
let sdt = prompt("Nhập sdt:")

if(!Ten){
    console.log("Tên không được bỏ trống")
}
if(!Email !== ('.') || (!Email !== ('@'))){
    console.log("Email phải có kí tự . và @")
}
if(isNaN(sdt)){
    console.log("số điện thoại phải không có kí tự nào không phải số và phải có 10 kí tự")
}
if(!sdt.length == 9){
    console.log("số điện thoại phải không có kí tự nào không phải số và phải có 10 kí tự")

}
if(!namSinh < 2005){
    console.log("Nhập vào tuổi >18")
}



// Câu 3( 3 điểm) : Nhập vào từ bàn phím 4 trường thông tin bao gồm : Tên, năm
// sinh, email, số điện thoại:
// Tiến hành validate các thông tin vừa nhập vào, báo lỗi trong console:
// + Tên không được bỏ trống và phải có kí tự viết hoa
// + Tính đến nay, nếu tuổi &lt;18 thì báo lỗi
// + Email phải có kí tự . và @
// + Số điện thoại phải có 10 kí tự và không có kí tự nào không phải số