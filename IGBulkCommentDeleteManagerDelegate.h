

@protocol IGBulkCommentDeleteManagerDelegate <NSObject>
@required
-(void)commentDeleteManagerDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2;
-(void)commentDeleteManagerDidStartCommentDeletion:(id)arg1;
-(void)commentDeleteManagerDidFinishCommentDeletion:(id)arg1;
-(void)commentDeleteManagerDidFailToDeleteComments:(id)arg1;

@end

