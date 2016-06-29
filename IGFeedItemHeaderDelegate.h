

@protocol IGFeedItemHeaderDelegate <NSObject>
@required
-(void)feedItemHeaderDidTapUser:(id)arg1;
-(void)feedItemHeaderDidTapLocation:(id)arg1;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1;
-(void)feedItemHeaderDidTapOnMoreButton:(id)arg1;

@end

