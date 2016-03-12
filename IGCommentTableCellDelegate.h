

@protocol IGCommentTableCellDelegate <NSObject>
@required
-(void)commentCellDidShowActions:(id)arg1;
-(void)commentCellDidHideActions:(id)arg1;
-(void)commentCell:(id)arg1 didLongTapOnUser:(id)arg2;
-(void)commentCellUserTapped:(id)arg1;
-(void)commentCellReplyButtonTapped:(id)arg1;
-(void)commentCellDeleteButtonTapped:(id)arg1;
-(void)commentCellReportButtonTapped:(id)arg1;
-(void)commentCellDidStartPanGestureRecognition:(id)arg1;
-(void)commentCellWillSwipeToDelete:(id)arg1;
-(void)commentCellDidSwipeToDelete:(id)arg1;
-(char)commentCellShouldShowActions:(id)arg1;

@end

