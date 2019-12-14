  const Module =require('./utilities')
  const len = 100000;
  const typedArray = new Float32Array(len);
  for (let i=0; i<len; i++) {
    typedArray[i]=i*0;
  }
  // let bufferr = Module._malloc(typedArray.length * typedArray.BYTES_PER_ELEMENT);
  // Module.HEAPF32.set(typedArray, bufferr >> 2)
  Module.extra(typedArray,len)
  console.log(Module.run(1,5));