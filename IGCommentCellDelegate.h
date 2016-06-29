

@protocol IGCommentCellDelegate <NSObject>
@required
-(void)didShowActionsForCommentCell:(id)arg1;
-(void)didHideActionsForCommentCell:(id)arg1;
-(void)didCompleteActionForCommentCell:(id)arg1;

@end

