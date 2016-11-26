<?php
$s = "qwertyuiopasdfghjklzxcvbnm";
for ($i=1; $i <= 100; $i++) { 
	if ($i <= 20) {
		$n = rand(1,32);
		$la = rand(1, 10);
		$lb = rand(1, 10);
	} else {
		$n = rand(1,1000000000);
		$la = rand(11, 50);
		$lb = rand(11, 50);
	}
	$out="";
	for ($j=0; $j < $la; $j++) { 
		$out.=$s[rand(0, 25)];
	}
	$out.=" ";
	for ($j=0; $j < $lb; $j++) { 
		$out.=$s[rand(0, 25)];
	}
	$out.="\n";
	$out.=$n." ".rand(1,1000000)."\n";
	file_put_contents("res/testdata/".$i.".in", $out);
}
?>