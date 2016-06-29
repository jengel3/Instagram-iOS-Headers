

@protocol IGThreadStoreNetworkingProtocol <NSObject>
@required
-(void)fetchThreadWithID:(id)arg1 cursorOption:(unsigned)arg2 cursorValue:(id)arg3 mergeOption:(unsigned)arg4 successfulThreadHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 cursorOption:(unsigned)arg3 cursorValue:(id)arg4 mergeOption:(unsigned)arg5 successfulThreadHandler:(/*^block*/id)arg6 failureHandler:(/*^block*/id)arg7;

@end

