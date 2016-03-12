

@protocol IGPullToRefreshProtocol <NSObject>
@required
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(UIEdgeInsets*)preferredContentInsets;

@end

