const Module =require('./utilities')
const len = 7;
const typedArray = new Float32Array(len);
//for (let i=0; i<len; i++) {
 // typedArray[i]=i;
//}
typedArray[0]=2;
typedArray[1]=3;
typedArray[2]=4;
typedArray[3]=10;
typedArray[4]=40;
typedArray[5]=23;
typedArray[6]=12;
// let bufferr = Module._malloc(typedArray.length * typedArray.BYTES_PER_ELEMENT);
// Module.HEAPF32.set(typedArray, bufferr >> 2)
Module.extra(typedArray,len)
console.log(Module.run(1,5));