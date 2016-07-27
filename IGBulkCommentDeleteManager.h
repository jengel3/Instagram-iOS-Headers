

@protocol IGBulkCommentDeleteManagerDelegate;
@class IGFeedItem, NSMutableArray;

@interface IGBulkCommentDeleteManager : NSObject {

	char _deletingComments;
	id<IGBulkCommentDeleteManagerDelegate> _commentDeleteManagerDelegate;
	IGFeedItem* _post;
	NSMutableArray* _commentsToDelete;

}

@property (nonatomic,retain) IGFeedItem * post;                                                                       //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSMutableArray * commentsToDelete;                                                       //@synthesize commentsToDelete=_commentsToDelete - In the implementation block
@property (assign,getter=isDeletingComments,nonatomic) char deletingComments;                                         //@synthesize deletingComments=_deletingComments - In the implementation block
@property (assign,nonatomic,__weak) id<IGBulkCommentDeleteManagerDelegate> commentDeleteManagerDelegate;              //@synthesize commentDeleteManagerDelegate=_commentDeleteManagerDelegate - In the implementation block
-(void)setPost:(IGFeedItem *)arg1 ;
-(IGFeedItem *)post;
-(void)commentDeletionFinished:(id)arg1 ;
-(char)addCommentToDelete:(id)arg1 ;
-(NSMutableArray *)commentsToDelete;
-(id<IGBulkCommentDeleteManagerDelegate>)commentDeleteManagerDelegate;
-(void)bulkDeleteComments:(id)arg1 ;
-(id)bulkCommentDeleteRequestForPostPk:(id)arg1 commentsToDelete:(id)arg2 ;
-(void)setDeletingComments:(char)arg1 ;
-(void)commentDeletionFailed:(id)arg1 error:(id)arg2 ;
-(void)deleteUnpostedComments:(id)arg1 ;
-(void)deletePostedComments:(id)arg1 ;
-(id)commaSeparatedListOfCommentsToDeleteFromArray:(id)arg1 ;
-(char)canAddCommentToDelete;
-(char)validateCommentsBeingDeleted:(id)arg1 ;
-(char)isDeletingComments;
-(void)setCommentsToDelete:(NSMutableArray *)arg1 ;
-(id)initWithPost:(id)arg1 ;
-(void)setCommentDeleteManagerDelegate:(id<IGBulkCommentDeleteManagerDelegate>)arg1 ;
-(void)commitBulkCommentDeletion;
-(id)undoBulkCommentDeletion;
-(void)dealloc;
@end

