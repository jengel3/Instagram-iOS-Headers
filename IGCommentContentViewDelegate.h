

@protocol IGCommentContentViewDelegate <NSObject>
@required
-(void)commentUserTapped:(id)arg1;
-(void)replyToUser:(id)arg1;
-(void)locationTapped:(id)arg1;
-(void)toggleActionsVisibleTapped;
-(void)reply;

@end

