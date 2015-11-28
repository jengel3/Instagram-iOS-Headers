

@protocol IGCommentCellDelegate <NSObject>
@optional
-(void)commentCell:(id)arg1 locationTapped:(id)arg2;
-(char)commentCellShouldShowActions:(id)arg1;

@required
-(void)commentCellDidShowActions:(id)arg1;
-(void)commentCellDidHideActions:(id)arg1;
-(void)commentCellUserTapped:(id)arg1;
-(void)commentCellReplyButtonTapped:(id)arg1;
-(void)commentCell:(id)arg1 didLongTapOnUser:(id)arg2;
-(void)commentCellDeleteButtonTapped:(id)arg1;
-(void)commentCellReportButtonTapped:(id)arg1;
-(void)commentCellDidStartPanGestureRecognition:(id)arg1;
-(void)commentCellWillSwipeToDelete:(id)arg1;
-(void)commentCellDidSwipeToDelete:(id)arg1;

@end

