

@protocol TTransport <NSObject>
@required
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3;
-(void)flush;

@end

