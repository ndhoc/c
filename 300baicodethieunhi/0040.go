package main
import "fmt"

func main(){
	var a,b int
	fmt.Scan(&a,&b)
	ans := float64(a)/float64(b)
	if a==0 || b==0{
		fmt.Print(0)
	} else if ans > 0{
		fmt.Print(1)
	} else if ans < 0{
		fmt.Print(-1)
	}
}
