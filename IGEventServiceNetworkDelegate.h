

@protocol IGEventServiceNetworkDelegate <NSObject>
@required
-(void)eventService:(id)arg1 didFailWithError:(id)arg2;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2;

@end

