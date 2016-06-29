

@protocol AFMultipartFormData
@required
-(void)appendPartWithFormData:(id)arg1 name:(id)arg2;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id*)arg5;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3;
-(void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
-(void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
-(void)throttleBandwidthWithPacketSize:(unsigned)arg1 delay:(double)arg2;

@end

