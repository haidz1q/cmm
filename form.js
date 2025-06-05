function tinhTong() { 
    var tongHang = document.getElementById('matHang').value * document.getElementById('soLuong').value
    document.getElementById('tongTien').innerHTML = tongHang
}
var phuKien = document.querySelectorAll('.phuKien')
var tongPhuKien = 0
for(let i = 0; i < phuKien.length; i++)
{
    if(phuKien[i].checked == true) {
        tongPhuKien += (phuKien[i].value*document.getElementById('soLuong').value)
    }
}
