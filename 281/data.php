<?php
file_put_contents("res/testdata/1.in", "1
3 7 -2 -2 7 -1
");
function data1($n) {
	$x1=$y1=$x2=$y2=0;
	while ($x1==$x2||$y1==$y2) {
		$x1=rand(-$n,$n);
		$y1=rand(-$n,$n);
		$x2=rand(-$n,$n);
		$y2=rand(-$n,$n);
	}
	$temp=rand(0,1);
	if($temp)return $x1." ".$y1." ".$x2." ".$y2." ".$x1." ".$y2."\n";
	else return $x1." ".$y1." ".$x2." ".$y2." ".$x2." ".$y1."\n";
}
function data2($n) {
	$x1=$y1=$x2=$y2=$x3=$y3=0;
	while ($x1==$x2||$x2==$x3||$y1==$y2||$y2==$y3){
		$x1=rand(-$n,$n);
		$y1=rand(-$n,$n);
		$x2=rand(-$n,$n);
		$y2=rand(-$n,$n);
		$x3=rand(-$n,$n);
		$y3=rand(-$n,$n);
	}
	return $x1." ".$y1." ".$x2." ".$y2." ".$x3." ".$y3."\n";
}
$data="10000\n";
for($i=0;$i<10000;$i++){
	$data.=data1(10);
}
file_put_contents("res/testdata/2.in", $data);
$data="10000\n";
for($i=0;$i<10000;$i++){
	$data.=data1(1000);
}
file_put_contents("res/testdata/3`.in", $data);
$data="10000\n";
for($i=0;$i<10000;$i++){
	$data.=data2(10);
}
file_put_contents("res/testdata/4.in", $data);
$data="10000\n";
for($i=0;$i<10000;$i++){
	$data.=data2(1000);
}
file_put_contents("res/testdata/5.in", $data);
?>
