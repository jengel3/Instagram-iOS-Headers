

@protocol IGFeedItemTextCellDelegate <NSObject>
@required
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2;
-(void)feedItemTextCellDidTapOnMore:(id)arg1;
-(void)feedItemTextCellDidTapTranslation:(id)arg1;

@end

