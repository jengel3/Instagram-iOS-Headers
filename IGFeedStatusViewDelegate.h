

@protocol IGFeedStatusViewDelegate <NSObject>
@optional
-(void)feedStatusView:(id)arg1 didChangeComputedHeight:(float)arg2;
-(float)visibleContentHeight;

@required
-(void)feedStatusViewDidTapOnInfoView:(id)arg1;

@end

