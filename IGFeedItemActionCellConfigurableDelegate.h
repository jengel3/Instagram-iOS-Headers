

@protocol IGFeedItemActionCellConfigurableDelegate <NSObject>
@required
-(void)feedItemActionCellDidTapMoreButton:(id)arg1;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1;
-(void)feedItemActionCellDidTapSendButton:(id)arg1;
-(void)feedItemActionCellDidTapLikeViewCount:(id)arg1;
-(void)feedItemActionCellDidTapCommentCount:(id)arg1;

@end

