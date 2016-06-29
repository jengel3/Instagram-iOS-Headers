

@protocol IGHybridWebViewHeaderDelegate <NSObject>
@required
-(void)webViewHeader:(id)arg1 didTapCloseWithItem:(id)arg2;
-(void)webViewHeader:(id)arg1 didTapBackWithItem:(id)arg2;
-(void)webViewHeader:(id)arg1 didTapRightButtonWithItem:(id)arg2;

@end

