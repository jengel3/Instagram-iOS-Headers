

@protocol IGFeedItemTextCellDelegate <NSObject>
@required
-(void)feedItemTextCellDidTapTranslation:(id)arg1;
-(void)feedItemTextCellDidTapOnMore:(id)arg1;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2;

@end

