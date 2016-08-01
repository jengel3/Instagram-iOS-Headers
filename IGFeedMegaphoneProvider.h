

@protocol IGFeedMegaphoneProvider <NSObject>
@required
-(id)activeMegaphones;
-(unsigned)displaySource;
-(void)updateServerMegaphoneWithResponse:(id)arg1;

@end

