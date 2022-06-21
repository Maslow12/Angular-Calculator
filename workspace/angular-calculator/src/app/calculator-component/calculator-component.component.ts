import { Component, OnInit } from '@angular/core';
import * as math from 'mathjs';

@Component({
  selector: 'app-calculator-component',
  templateUrl: './calculator-component.component.html',
  styleUrls: ['./calculator-component.component.css']
})
export class CalculatorComponentComponent implements OnInit {
  input:any=''
  output:any=0
  aux:any=0
  b:boolean=true
  calculatorInput(value: string){
    if(value == "0" && this.input.lenght==0){return}
    else{
      this.input = this.input+value
      return;
    }
    return;
  }
  appendOperators(operator: string){
    this.input = this.input+' '+operator+' '
  }
  clear(){
    this.input = ''
    this.output = 0
    return;
  }

  result(){
    let result = math.evaluate(this.input)
    this.output = result
    return;
  }
  
  /*
  arrayRemove(arr:any) {  
    return arr.filter(function(){ 
        return arr.splice(-1);
    });
}

  eliminate(){
    console.log(this.input.split(' '))
    var ele = this.arrayRemove(this.input.split(' '))
    console.log(ele)
    this.input = ele.toString()
  }
  
 */
  constructor() { }

  ngOnInit(): void {
  }

}
