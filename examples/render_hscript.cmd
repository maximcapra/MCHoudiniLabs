Redshift_setLogLevel -L 5
mread "D:/HoudiniRender/test1.hiplc"
render -V "/obj/render/rop_chain"
render -V "/obj/render/rop_box"
mread "D:/HoudiniRender/test2.hiplc"
render -V "/obj/render/rop_teapot"