

@protocol IGFeedNetworkSourceDelegate <NSObject>
@optional
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2;

@end

