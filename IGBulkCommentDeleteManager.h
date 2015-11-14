/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGBulkCommentDeleteManagerDelegate;
@class IGPost, NSMutableArray;

@interface IGBulkCommentDeleteManager : NSObject {

	char _deletingComments;
	id<IGBulkCommentDeleteManagerDelegate> _commentDeleteManagerDelegate;
	IGPost* _post;
	NSMutableArray* _commentsToDelete;

}

@property (assign,nonatomic,__weak) id<IGBulkCommentDeleteManagerDelegate> commentDeleteManagerDelegate;              //@synthesize commentDeleteManagerDelegate=_commentDeleteManagerDelegate - In the implementation block
@property (assign,getter=isDeletingComments,nonatomic) char deletingComments;                                         //@synthesize deletingComments=_deletingComments - In the implementation block
@property (nonatomic,retain) IGPost * post;                                                                           //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSMutableArray * commentsToDelete;                                                       //@synthesize commentsToDelete=_commentsToDelete - In the implementation block
-(id)requestWithURL:(id)arg1 parameters:(id)arg2 ;
-(NSMutableArray *)commentsToDelete;
-(IGPost *)post;
-(id<IGBulkCommentDeleteManagerDelegate>)commentDeleteManagerDelegate;
-(void)bulkDeleteComments:(id)arg1 ;
-(id)bulkCommentDeleteRequestForPostPk:(id)arg1 commentsToDelete:(id)arg2 ;
-(void)setDeletingComments:(char)arg1 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(void)commentDeletionFailed:(id)arg1 error:(id)arg2 ;
-(void)deleteUnpostedComments:(id)arg1 ;
-(void)deletePostedComments:(id)arg1 ;
-(id)commaSeparatedListOfCommentsToDeleteFromArray:(id)arg1 ;
-(id)urlToBulkDeleteComments:(id)arg1 ;
-(id)initWithPost:(id)arg1 ;
-(char)canAddCommentToDelete;
-(char)addCommentToDelete:(id)arg1 ;
-(void)commitBulkCommentDeletion;
-(id)undoBulkCommentDeletion;
-(char)validateCommentsBeingDeleted:(id)arg1 ;
-(void)setCommentDeleteManagerDelegate:(id<IGBulkCommentDeleteManagerDelegate>)arg1 ;
-(char)isDeletingComments;
-(void)setPost:(IGPost *)arg1 ;
-(void)setCommentsToDelete:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

