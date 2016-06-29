

@protocol IGNewsDataSourceSectionDelegate <NSObject>
@required
-(void)newsDataSection:(id)arg1 pushViewController:(id)arg2;
-(void)newsDataSection:(id)arg1 presentViewController:(id)arg2;
-(void)newsDataSection:(id)arg1 openURL:(id)arg2;
-(void)needsUpdateHeightsWithNewsDataSection:(id)arg1;
-(void)logFollowEvent:(id)arg1 isFollow:(char)arg2 targetID:(id)arg3 clickPoint:(id)arg4;

@end

