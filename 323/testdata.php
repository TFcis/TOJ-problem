<?php
$out="";
$out.="20 20\n";
$n=20;$k=20;
for ($p=0; $p < $k+1; $p++) { 
	$arr=array();
	for ($i=1; $i <= $n; $i++) { 
		$arr[]=$i;
	}
	shuffle($arr);
	foreach ($arr as $key => $val) {
		if($key)$out.=" ";
		$out.=$val;
	}
	$out.="\n";
}
file_put_contents("1.in", $out);
$n=10000;$k=100;
$out="";
$out.="10000 100\n";
for ($p=0; $p < $k+1; $p++) { 
	$arr=array();
	for ($i=1; $i <= $n; $i++) { 
		$arr[]=$i;
	}
	shuffle($arr);
	foreach ($arr as $key => $val) {
		if($key)$out.=" ";
		$out.=$val;
	}
	$out.="\n";
}
file_put_contents("2.in", $out);
?>