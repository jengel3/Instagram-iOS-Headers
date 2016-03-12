

@protocol IGCommentCellDelegate <NSObject>
@required
-(void)didCompleteActionForCommentCell:(id)arg1;
-(void)didShowActionsForCommentCell:(id)arg1;
-(void)didHideActionsForCommentCell:(id)arg1;

@end

