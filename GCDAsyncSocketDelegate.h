

@protocol GCDAsyncSocketDelegate
@optional
-(id)newSocketQueueForConnectionFromAddress:(id)arg1 onSocket:(id)arg2;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
-(void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned)arg2 tag:(long)arg3;
-(void)socket:(id)arg1 didWriteDataWithTag:(long)arg2;
-(void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned)arg2 tag:(long)arg3;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned)arg4;
-(double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned)arg4;
-(void)socketDidCloseReadStream:(id)arg1;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)socketDidSecure:(id)arg1;

@end

