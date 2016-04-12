

@protocol IGFeedItemActionCellDelegate <NSObject>
@required
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1;
-(void)feedItemActionCellDidTapSendButton:(id)arg1;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1;

@end

