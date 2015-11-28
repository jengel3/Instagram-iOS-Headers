

@protocol IGFeedItemActionCellDelegate <NSObject>
@optional
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1;

@required
-(int)feedItemActionCellPosition:(id)arg1;
-(id)feedItemActionCellCurrentIGAnalyticsMetadata:(id)arg1;

@end

