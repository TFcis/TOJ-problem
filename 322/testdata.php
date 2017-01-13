<?php
for ($i=1; $i <= 10; $i++) {
	$out="";
	$out.=rand(3,5)." ".rand(1,3)."\n";
	$k=rand(1,10);
	$max=10;
	for ($j=0; $j < $k; $j++) {
		if ($j) $out.= " ";
		$out.= rand(1,$max);
	}
	$out.= "\n";
	$out.= rand(1,$max)."\n";
	file_put_contents($i.".in", $out);
}
for ($i=11; $i <= 25; $i++) { 
	$out="";
	$out.= rand(20,50)." ".rand(1,3)."\n";
	$k=rand(100,1000);
	$max=1000;
	for ($j=0; $j < $k; $j++) {
		if ($j) $out.= " ";
		$out.= rand(1,$max);
	}
	$out.= "\n";
	$out.= rand(1,$max)."\n";
	file_put_contents($i.".in", $out);
}
for ($i=26; $i <= 50; $i++) { 
	$out="";
	$out.= rand(10000,50000)." ".rand(1,3)."\n";
	$k=rand(100000,500000);
	$max=1000000;
	for ($j=0; $j < $k; $j++) {
		if ($j) $out.= " ";
		$out.= rand(1,$max);
	}
	$out.= "\n";
	$out.= rand(1,$max)."\n";
	file_put_contents($i.".in", $out);
}
?>