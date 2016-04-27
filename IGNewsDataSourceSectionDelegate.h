

@protocol IGNewsDataSourceSectionDelegate <NSObject>
@required
-(void)newsDataSection:(id)arg1 showViewController:(id)arg2;
-(void)newsDataSection:(id)arg1 openURL:(id)arg2;
-(void)needsUpdateHeightsWithNewsDataSection:(id)arg1;
-(void)newsDataSection:(id)arg1 logRaindropEvent:(id)arg2;
-(void)logFollowEvent:(id)arg1 isFollow:(char)arg2 targetID:(id)arg3 clickPoint:(id)arg4;

@end

