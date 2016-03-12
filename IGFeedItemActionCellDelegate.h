

@protocol IGFeedItemActionCellDelegate <NSObject>
@required
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
-(int)feedItemActionCellPosition:(id)arg1;
-(id)feedItemActionCellCurrentIGAnalyticsMetadata:(id)arg1;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1;
-(void)feedItemActionCellDidTapAddToPostButton:(id)arg1;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1;
-(void)feedItemActionCellDidTapChervonButton:(id)arg1;

@end

