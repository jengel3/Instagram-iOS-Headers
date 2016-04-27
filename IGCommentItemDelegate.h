

@protocol IGCommentItemDelegate <NSObject>
@required
-(void)commentController:(id)arg1 didTapReplyForUser:(id)arg2;
-(void)commentController:(id)arg1 didTapURL:(id)arg2;
-(void)commentController:(id)arg1 didDeleteComment:(id)arg2;
-(void)commentController:(id)arg1 didReportComment:(id)arg2;

@end

