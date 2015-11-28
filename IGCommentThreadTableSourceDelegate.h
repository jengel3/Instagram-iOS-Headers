

@protocol IGCommentThreadTableSourceDelegate <NSObject>
@optional
-(void)commentThreadDataSource:(id)arg1 didAddNewCommentAtIndexPath:(id)arg2;
-(void)commentThreadDataSourceDidStartLoading:(id)arg1 isLoadingMore:(char)arg2;
-(void)commentThreadDataSourceDidFinishLoading:(id)arg1;
-(void)commentThreadDataSourceDidFailLoading:(id)arg1;
-(id)commentThreadDataSource:(id)arg1 viewForHeaderInSection:(int)arg2;
-(float)commentThreadDataSource:(id)arg1 heightHeaderInSection:(int)arg2;
-(void)commentThreadDataSource:(id)arg1 didTapReplyToUser:(id)arg2 inCommentCell:(id)arg3;
-(void)commentThreadDataSourceTableWillDrag:(id)arg1;
-(void)commentThreadDataSourceTableDidDrag:(id)arg1;
-(void)commentThreadDataSourceTableWillEndDragging:(id)arg1 withVelocity:(float)arg2;
-(void)commentThreadDataSourceTableDidEndDragging:(id)arg1;
-(void)commentThreadDataSourceDeletedComment:(id)arg1 didReportAsSpam:(char)arg2;
-(void)commentThreadDataSourceDidFailToDeleteComment:(id)arg1;
-(void)commentThreadDataSourceWillDeleteComment:(id)arg1;
-(void)commentThreadDataSourceDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2;
-(void)commentThreadDataSourceDidStartBulkCommentDeletion:(id)arg1;
-(void)commentThreadDataSourceDidFinishBulkCommentDeletion:(id)arg1;
-(void)commentThreadDataSourceDidFailBulkCommentDeletion:(id)arg1;

@end

